/*
 * Copyright (C) 2019 The LineageOS Project
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

#include <android-base/logging.h>
#include <android-base/properties.h>
#define _REALLY_INCLUDE_SYS__SYSTEM_PROPERTIES_H_
#include <sys/_system_properties.h>
#include <sys/sysinfo.h>

#include "property_service.h"
#include "vendor_init.h"

void property_override(char const prop[], char const value[]) {
    prop_info *pi;

    pi = (prop_info*) __system_property_find(prop);
    if (pi)
        __system_property_update(pi, value, strlen(value));
    else
        __system_property_add(prop, strlen(prop), value, strlen(value));
}

void load_dalvik_properties() {
    struct sysinfo sys;

    sysinfo(&sys);
    if (sys.totalram < 6144ull * 1024 * 1024) {
        // from - phone-xhdpi-6144-dalvik-heap.mk
        property_override("dalvik.vm.heapstartsize", "16m");
        property_override("dalvik.vm.heapgrowthlimit", "256m");
        property_override("dalvik.vm.heapsize", "512m");
        property_override("dalvik.vm.heapmaxfree", "32m");
    } else {
        // 8GB & 12GB RAM
        property_override("dalvik.vm.heapstartsize", "32m");
        property_override("dalvik.vm.heapgrowthlimit", "512m");
        property_override("dalvik.vm.heapsize", "768m");
        property_override("dalvik.vm.heapmaxfree", "64m");
    }

    property_override("dalvik.vm.heaptargetutilization", "0.5");
    property_override("dalvik.vm.heapminfree", "8m");
}

void property_override_multifp(char const buildfp[], char const systemfp[],
        char const bootimagefp[], char const vendorfp[], char const value[]) {
    property_override(buildfp, value);
    property_override(systemfp, value);
    property_override(bootimagefp, value);
    property_override(vendorfp, value);
}

void load_umi() {
    property_override("ro.product.model", "Mi 10");
    property_override("ro.product.system.model", "Mi 10");
    property_override("ro.build.product", "umi");
    property_override("ro.product.device", "umi");
    property_override("ro.build.description", "umi-user 10 QKQ1.191117.002 V11.0.10.0.QJBEUVF release-keys");
    property_override_multifp("ro.build.fingerprint", "ro.system.build.fingerprint", "ro.bootimage.build.fingerprint",
        "ro.vendor.build.fingerprint", "Xiaomi/umi_eea/umi:10/QKQ1.191117.002/V11.0.10.0.QJBEUVF:user/release-keys");
}

void vendor_load_properties() {

    std::string model = android::base::GetProperty("ro.product.vendor.device", "");

    if (model.find("umi") != std::string::npos) {
        load_umi();
    } else {
        LOG(ERROR) << __func__ << ": unexcepted device!";
    }

    load_dalvik_properties();

    property_override("ro.apex.updatable", "true");
    property_override("ro.oem_unlock_supported", "0");
}
