/*
 * Copyright (C) 2019-2020 The LineageOS Project
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

#define LOG_TAG "FingerprintInscreenService"

#include "FingerprintInscreen.h"

#include <android-base/logging.h>
#include <hardware_legacy/power.h>
#include <cmath>
#include <fstream>

#define COMMAND_NIT 10
#define PARAM_NIT_FOD 1
#define PARAM_NIT_NONE 0

#define TOUCH_FOD_ENABLE 10

#define FOD_SENSOR_X 441
#define FOD_SENSOR_Y 1808
#define FOD_SENSOR_SIZE 197

#define BRIGHTNESS_PATH "/sys/class/backlight/panel0-backlight/brightness"

namespace vendor {
namespace lineage {
namespace biometrics {
namespace fingerprint {
namespace inscreen {
namespace V1_0 {
namespace implementation {
    
template <typename T>
static T get(const std::string& path, const T& def) {
    std::ifstream file(path);
    T result;

    file >> result;
    return file.fail() ? def : result;
}

template <typename T>
static void set(const std::string& path, const T& value) {
    std::ofstream file(path);
    file << value;
}

FingerprintInscreen::FingerprintInscreen() {
    xiaomiDisplayFeatureService = IDisplayFeature::getService();
    touchFeatureService = ITouchFeature::getService();
    xiaomiFingerprintService = IXiaomiFingerprint::getService();
}

Return<int32_t> FingerprintInscreen::getPositionX() {
    return FOD_SENSOR_X;
}

Return<int32_t> FingerprintInscreen::getPositionY() {
    return FOD_SENSOR_Y;
}

Return<int32_t> FingerprintInscreen::getDimAmount(int32_t /* brightness */) {
     float alpha;
    int realBrightness = get(BRIGHTNESS_PATH, 0);
    
    if (realBrightness < 1) {
        alpha = 255;
    } else if (realBrightness < 14 && realBrightness >0) {
        alpha = 235;
    } else if (realBrightness < 31 && realBrightness >13) {
         alpha = 229;
    } else if (realBrightness < 69 && realBrightness >30) {
         alpha = 208;
    } else if (realBrightness < 134 && realBrightness >68) {
         alpha = 192;
    } else if (realBrightness < 219 && realBrightness >133) {
         alpha = 176;
    } else if (realBrightness < 329 && realBrightness >218) {
         alpha = 160;
    } else if (realBrightness < 487 && realBrightness >328) {
         alpha = 144;
    } else if (realBrightness < 643 && realBrightness >486) {
         alpha = 128;
    } else if (realBrightness < 833 && realBrightness >642) {
         alpha = 112;
    } else if (realBrightness < 1044 && realBrightness >832) {
         alpha = 96;
    } else if (realBrightness < 1268 && realBrightness >1043) {
         alpha = 80;
    } else if (realBrightness < 1501 && realBrightness >1267) {
         alpha = 64;
    } else if (realBrightness < 1771 && realBrightness >1500) {
         alpha = 48;
    } else if (realBrightness < 2001 && realBrightness >1770) {
         alpha = 36;
    }else{
        alpha = 33;
    }

    return alpha;
}
/**

**/
Return<int32_t> FingerprintInscreen::getSize() {
    return FOD_SENSOR_SIZE;
}

Return<void> FingerprintInscreen::onStartEnroll() {
    return Void();
}

Return<void> FingerprintInscreen::onFinishEnroll() {
    return Void();
}

Return<void> FingerprintInscreen::onPress() {
    acquire_wake_lock(PARTIAL_WAKE_LOCK, LOG_TAG);
    xiaomiFingerprintService->extCmd(COMMAND_NIT, PARAM_NIT_FOD);
    return Void();
}

Return<void> FingerprintInscreen::onRelease() {
    xiaomiFingerprintService->extCmd(COMMAND_NIT, PARAM_NIT_NONE);
    release_wake_lock(LOG_TAG);
    return Void();
}

Return<void> FingerprintInscreen::onShowFODView() {
    xiaomiDisplayFeatureService->setFeature(0, 17, 1, 1);
    touchFeatureService->setTouchMode(TOUCH_FOD_ENABLE, 1);
    return Void();
}

Return<void> FingerprintInscreen::onHideFODView() {
    touchFeatureService->resetTouchMode(TOUCH_FOD_ENABLE);
    xiaomiDisplayFeatureService->setFeature(0, 17, 0, 1);
    return Void();
}

Return<bool> FingerprintInscreen::handleAcquired(int32_t acquiredInfo, int32_t vendorCode) {
    LOG(ERROR) << "acquiredInfo: " << acquiredInfo << ", vendorCode: " << vendorCode;
    return false;
}

Return<bool> FingerprintInscreen::handleError(int32_t error, int32_t vendorCode) {
    LOG(ERROR) << "error: " << error << ", vendorCode: " << vendorCode;
    return false;
}

Return<void> FingerprintInscreen::setLongPressEnabled(bool) {
    return Void();
}

Return<bool> FingerprintInscreen::shouldBoostBrightness() {
    return false;
}


Return<void> FingerprintInscreen::setCallback(const sp<IFingerprintInscreenCallback>& /* callback */) {
    return Void();
}


}  // namespace implementation
}  // namespace V1_0
}  // namespace inscreen
}  // namespace fingerprint
}  // namespace biometrics
}  // namespace lineage
}  // namespace vendor
