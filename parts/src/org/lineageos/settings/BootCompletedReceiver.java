/*
 * Copyright (C) 2015 The CyanogenMod Project
 *               2017-2019 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.lineageos.settings;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.util.Log;
import android.provider.Settings;
import android.content.SharedPreferences;
import android.content.pm.PackageManager;
import org.lineageos.settings.dirac.DiracUtils;
import org.lineageos.settings.doze.DozeUtils;
import org.lineageos.settings.thermal.ThermalUtils;
import org.lineageos.settings.touchsampling.TouchSamplingUtils;
import org.lineageos.settings.utils.FileUtils;
import android.content.SharedPreferences;
import androidx.preference.PreferenceManager;

import org.lineageos.settings.fod.FodUtils;
import vendor.xiaomi.hardware.touchfeature.V1_0.ITouchFeature;
import org.lineageos.settings.thermal.ThermalUtils;



public class BootCompletedReceiver extends BroadcastReceiver {

    private static final boolean DEBUG = false;
    private static final String TAG = "XiaomiParts";
    private static final String DC_DIMMING_ENABLE_KEY = "dc_dimming_enable";
    private static final String DC_DIMMING_NODE = "/sys/devices/platform/soc/soc:qcom,dsi-display-primary/msm_fb_ea_enable";
    private static final String HBM_ENABLE_KEY = "hbm_mode";
    private static final String HBM_NODE = "/sys/devices/platform/soc/soc:qcom,dsi-display-primary/hbm";
    public static final String SHAREDD2TW = "sharadeD2TW";
    private ITouchFeature mTouchFeature;
    @Override
    public void onReceive(final Context context, Intent intent) {
     try {
            // We need to reset this setting to trigger an update in display service
            final float refreshRate = Settings.System.getFloat(context.getContentResolver(),
                Settings.System.MIN_REFRESH_RATE, 90.0f);
            Thread.sleep(500);
            Settings.System.putFloat(context.getContentResolver(),
                Settings.System.MIN_REFRESH_RATE, 90.0f);
            Thread.sleep(500);
            Settings.System.putFloat(context.getContentResolver(),
                Settings.System.MIN_REFRESH_RATE, refreshRate);
        } catch (Exception e) {
            // Ignore
        }

        //Micro-Service to restore sata of dt2w on reboot
        SharedPreferences prefs = context.getSharedPreferences(SHAREDD2TW, Context.MODE_PRIVATE); 
        try {
            mTouchFeature = ITouchFeature.getService();
            mTouchFeature.setTouchMode(14,prefs.getInt(SHAREDD2TW, 1));
        } catch (Exception e) {
            // Do nothing
        }

    
        if (DEBUG) Log.d(TAG, "Received boot completed intent");
        DiracUtils.initialize();
        DozeUtils.checkDozeService(context);
        FodUtils.startService(context);
        TouchSamplingUtils.restoreSamplingValue(context);
        ThermalUtils.startService(context);

        SharedPreferences sharedPrefs = PreferenceManager.getDefaultSharedPreferences(context);

        boolean dcDimmingEnabled = sharedPrefs.getBoolean(DC_DIMMING_ENABLE_KEY, false);
        FileUtils.writeLine(DC_DIMMING_NODE, dcDimmingEnabled ? "1" : "0");
        boolean hbmEnabled = sharedPrefs.getBoolean(HBM_ENABLE_KEY, false);
        FileUtils.writeLine(HBM_NODE, hbmEnabled ? "1" : "0");
    }
}
