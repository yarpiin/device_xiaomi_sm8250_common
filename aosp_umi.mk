#
# Copyright (C) 2020 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

$(call inherit-product, device/xiaomi/umi/device.mk)

# Inherit some common Aosp stuff.
$(call inherit-product, vendor/aosp/config/common_full_phone.mk)

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/aosp_base_telephony.mk)

# Device identifier. This must come after all inclusions.
PRODUCT_NAME := aosp_umi
PRODUCT_DEVICE := umi
PRODUCT_BRAND := Xiaomi
PRODUCT_MODEL := MI 10
PRODUCT_MANUFACTURER := Xiaomi

# Fingerprint
BUILD_FINGERPRINT := google/sunfish/sunfish:11/RP1A.201005.006/6828489:user/release-keys
BUILD_DESCRIPTION := sunfish-user 11 RP1A.201005.006 6828489 release-keys

PRODUCT_PROPERTY_OVERRIDES += \
    ro.build.fingerprint=$(BUILD_FINGERPRINT)

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRIVATE_BUILD_DESC="$(BUILD_DESCRIPTION)"

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi
