# Copyright (C) 2009 The Android Open Source Project
# Copyright (C) 2019 The Mokee Open Source Project
# Copyright (C) 2020 The LineageOS Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import common
import re

def FullOTA_InstallEnd(info):
  OTA_UpdateFirmware(info)
  OTA_InstallEnd(info)
  return

def IncrementalOTA_InstallEnd(info):
  OTA_UpdateFirmware(info)
  OTA_InstallEnd(info)
  return

def OTA_UpdateFirmware(info):
  info.script.Print("Patching modem and firmware...")
  info.script.AppendExtra('package_extract_file("install/firmware-update/cmnlib64.mbn", "/dev/block/bootdevice/by-name/cmnlib64");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/xbl_config_5.elf", "/dev/block/bootdevice/by-name/xbl_config_5");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/NON-HLOS.bin", "/dev/block/bootdevice/by-name/modem");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/cmnlib.mbn", "/dev/block/bootdevice/by-name/cmnlib");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/BTFM.bin", "/dev/block/bootdevice/by-name/bluetooth");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/km4.mbn", "/dev/block/bootdevice/by-name/keymaster");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/xbl_5.elf", "/dev/block/bootdevice/by-name/xbl_5");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/tz.mbn", "/dev/block/bootdevice/by-name/tz");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/aop.mbn", "/dev/block/bootdevice/by-name/aop");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/featenabler.mbn", "/dev/block/bootdevice/by-name/featenabler");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/xbl_config_4.elf", "/dev/block/bootdevice/by-name/xbl_config_4");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/storsec.mbn", "/dev/block/bootdevice/by-name/storsec");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/uefi_sec.mbn", "/dev/block/bootdevice/by-name/uefisecapp");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/qupv3fw.elf", "/dev/block/bootdevice/by-name/qupfw");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/abl.elf", "/dev/block/bootdevice/by-name/abl");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/dspso.bin", "/dev/block/bootdevice/by-name/dsp");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/devcfg.mbn", "/dev/block/bootdevice/by-name/devcfg");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/xbl_4.elf", "/dev/block/bootdevice/by-name/xbl_4");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/hyp.mbn", "/dev/block/bootdevice/by-name/hyp");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/cmnlib64.mbn", "/dev/block/bootdevice/by-name/cmnlib64bak");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/cmnlib.mbn", "/dev/block/bootdevice/by-name/cmnlibbak");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/tz.mbn", "/dev/block/bootdevice/by-name/tzbak");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/aop.mbn", "/dev/block/bootdevice/by-name/aopbak");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/storsec.mbn", "/dev/block/bootdevice/by-name/storsecbak");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/qupv3fw.elf", "/dev/block/bootdevice/by-name/qupfwbak");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/abl.elf", "/dev/block/bootdevice/by-name/ablbak");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/devcfg.mbn", "/dev/block/bootdevice/by-name/devcfgbak");')
  info.script.AppendExtra('package_extract_file("install/firmware-update/hyp.mbn", "/dev/block/bootdevice/by-name/hypbak");')

def AddImage(info, basename, dest):
  name = basename
  data = info.input_zip.read("IMAGES/" + basename)
  common.ZipWriteStr(info.output_zip, name, data)
  info.script.AppendExtra('package_extract_file("%s", "%s");' % (name, dest))

def OTA_InstallEnd(info):
  info.script.Print("Patching dtbo and vbmeta images...")
  AddImage(info, "vbmeta.img", "/dev/block/bootdevice/by-name/vbmeta")
  AddImage(info, "dtbo.img", "/dev/block/bootdevice/by-name/dtbo")
  AddImage(info, "vbmeta_system.img", "/dev/block/bootdevice/by-name/vbmeta_system")
  return
