
n.n.n / 2022-01-22
==================

  * Revert "sm8250-common: Build PowerStats"
  * sm8250-common: introduce battery-friendly-pocketmode
  * sm8250-common: Set correct manufacter prop
  * sm8250-common: props: Disable NR when LTE is selected
  * sm8250-common: disable pocketlock
  * sm8250-common: decouple Interactive and AutoSuspend from display
  * sm8250-common: Enable support for IEEE80211AX.
  * sm8250-common: Enable support for IEEE80211AC.
  * sm8250-common: Enable automatic channel selection.
  * sm8250-common: drop Ignore Neverallows
  * sm8250-common: sepolicy: Label ro.fota.oem and ro.product.marketname property
  * sm8250-common: sepolicy: Define some missing nodes
  * sm8250-common: sepolicy: Allow zram to read
  * sm8250-common: nuke duplicated policy entry
  * sm8250-common: Commonize IFAAManager & enable boot_jar
  * fixup! sm8250-common: biometrics: Implement custom HAL loading list
  * Revert "sm8250-common: Disable settings provider model"
  * sm8250-common: Move aux camera packagelist to system props
  * sm8250-commoni: init: Do not override ro.vendor.gpu.available_frequencies
  * sm8250-common: Declare OpenGL ES dEQP level
  * sm8250-common: sepolicy: Attach vendor_property_type to properties
  * sm8250-common: rootdir: Enforce android-S new launch debugfs restrictions.
  * sm8250-common: Restrict PRODUCT_EXTRA_VNDK_VERSIONS to 30
  * sm8250-common:  set BOARD_USES_ADRENO to true
  * sm8250-common: disable proximity usage during doze
  * sm8250-common: fingerprint: Call OnFingerUp while postenroll and authenticated
  * sm8250-common: relax sysprop owner enforcement
  * sm8250-common: fingerprint: Add on show\hide udfps overlays
  * sm8250-common: biometrics: Disable fod_status on fod_ui changes
  * sm8250-common: Adress camera denial
  * sm8250-common: sepolicy: Label a missing node
  * sm8250-common: sepolicy: Adress remaning denials
  * sm8250-common: sepolicy: Label libipebpsstriping
  * sm8250-common: sepolicy: Adress bluetooth_hal denials
  * sm8250-common: sepolicy: allow nfc hal to create vendor nfc data directory and files
  * sm8250-common: sepolicy: Adress health_hal denials
  *  sm8250-common: sepolicy: Allow ota updater to access package file
  * sm8250-common: Use qemu.sf.lcd_density instead of ro.sf.lcd_density
  * sm8250-common: Bring back DocumentsUIGoogle
  * sm8250-commmon: prop: Disable settings provider model
  * sm8250-common: Update ndk_platform shared libs
  * sm8250-common: Import light aidl from caf and build lights.kona
  * sm8250-common: org.ifaa.android.manager: Access mlipay hal via a binder service
  * sm8250-common: alllow parts to read/write sysfs nodes
  * sm8250-common: parts:  Add HBM qs tile
  * sm8250-common: parts: Implement HBM switch
  * sm8250-common: init to rootdir
  * sm8250-common: tidy up overlays
  * sm8250-common: disable notification led overlay
  * sm8250-common: do not show volte icon
  * sm8250-common: Specify the size of ZRAM in percent
  * sm8250-common: nuke more bloat
  * sm8250-common: Introduce 'SafailNet'
  * sm8250-common: build whole wifi stack
  * sm8250-common: libqti-perfd-client: Move to C
  * sm8250-common: libqti-perfd-client: return a dummy value
  * sm8250-common: libqti-perfd-client: Remove namespace declaration
  * sm8250-common: Create dummy libqti-perfd-client
  * sm8250-common: Adapt powerhint for SM8250
  * sm8250-common: Import powerhint.json from android-11.0.0_r32
  * sm8250-common: Drop I/O prefetcher
  * sm8250-common: Remove QTI perfd
  * sm8250-common: Migrate to Xiaomi power AIDL HAL
  * sm8250-common: set gps prop
  * sm8250-common: zram: set 4gb as stock rom
  * sm8250-common: updae dependencies
  * sm8250-common: perf: Enable the pre-rendering feature
  * sm8250-common: don't latch unsignal buffers
  * sm8250-common: Disable hwc vds in surface flinger
  * sm8250-common: Switch rendering to SkiaVK
  * sm8250-common: wifi: Add parameters for Hotspot 2.0
  * sm8250-common: wifi: Relax WiFi re-association RSSI thresholds
  * sm8250-common: wifi: smarter decisions on whether to use a 2- or 5Ghz AP
  * sm8250-common: wifi: Disable RX wakelock feature
  * sm8250-common: wifi: Enable QPower and Deep sleep at the same time
  * sm8250-common: Source APNs from Pixel CarrierSettings
  * sm8250-common: remove_packages bring back Snap
  * sm8250-common: remove_packages: Switch to platform certificate
  * sm8250-common: remove_packages: nuke Recorder Prebuild
  * sm8250-common: disable tips and hub
  * sm8250-common: remove unwanted packages
  * sm8250-common: init: setup post boot kernel behaviour
  * sm8250-common: Enable wifi 6 support
  * sm8250-common: overlay: Set default hotspot ssid
  * sm8250-common: rro_overlays: overlay tethering and wifi stack from Google
  * sm8250-common: Don't sign Wifi RROs with platform cert
  * sm8250-common: Sign Tether RROs with default cert
  * sm8250-common: TetheringOverlay: Update config
  * sm8250-common: TetheringOverlay: Change wifi tether regex
  * sm8250-common: rro_overlays: Redo TetheringOverlay's blueprint
  * sm8250-common: Add TetheringOverlay
  * sm8250-common: Add WifiOverlay
  * [DNM] sm8250-common: disable forced encryption
  * sm8250-common: set custom density
  * sm8250-common: Merge Device Tree from 'https://github.com/chaptsand/android_device_xiaomi_umi' into EvolutionX_OSS_Snow
  * sm8250: Merge audio configs from tag 'LA.UM.9.12.r1-12800-SMxx50.0' of https://source.codeaurora.org/quic/la/platform/hardware/qcom/audio into master
  * sm8250: overlay: Don't pin launcher app in memory
  * sm8250: overlay: Don't pin camera app in memory
  * sm8250: rootdir: set kernel behaviour on boot
  * sm8250: rootdir: remove cpu 7 from foreground tasks
  * sm8250: Drop prebuilt dtb
  * sm8250-common: update props from MIUI 12.5.8
  * sm8250-common: move media configs where they belong
  * sm8250-common: move display configs where they belong
  * sm8250-common: move audio config where it belongs co-authored: yarpiin <yarpiin@gmail.com>
  * sm8250-common: Switch to media_profiles_vendor from OP9R
  * sm8250-common: switch also primary output to 24 bit profile
  * sm8250-common: wifi: Add parameters for Hotspot 2.0
  * sm8250-common: Enable wifi 6 support
  * sm8250-common: sepolicy: allow HBM to work
  * sm8250-common: parts:  Add HBM qs tile
  * sm8250-common: parts: Implement HBM switch
  * Revert "umi:  Initialize High Touch Polling Rate support"
  * sm8250-common: use modified aosp volume curves
  * sm8250-common: set bt audio rouuting
  * sm8250-common: audio: Drop speaker safe audio routing
  * Revert "sm8250-common: Switch audio policy to LA.UM.9.12.r1-08300-SMxx50.0"
  * Revert "sm8250-common: audio: Switch to Qualcomm sound effects"
  * Revert "umi: Implement SunlightEnhancement LiveDisplay HAL"
  * sm8250-common: remove duplicated overlay
  * Revert "sm8250-common: update audio props"
  * sm8250-common: audio: audio: Remove effects that won't load
  * sm8250-common: audio:  Remove USE_XML_AUDIO_POLICY_CONF
  * sm8250-common: audio: cleanup config
  * sm8250-common: parts: add localization from MIUI MiSound settings
  * sm8250-common: parts: use single dirac_default string resource
  * sm8250-common: parts: remove surplus headset pref value
  * sm8250-common: parts: simplify DiracUtils initialization
  * sm8250-common: parts: remove unused method in DiractUtils
  * sm8250-common: parts: do not set Dirac settings during init
  * sm8250-common: parts: add logging facility for Dirac sound enhancer
  * sm8250-common: parts: use misoundfx effect uuid for Dirac sound enhancer
  * sm8250-common: parts: Prevent NPE before DiracSound is initialized
  * sm8250-common: parts: Add DiracSound backend
  * sm8250-common: parts: Introduce Dirac preferences
  * sm8250-common: system.prop: set prop for NFC DT
  * sm8250-common: drop appended dtb kernel image
  * sm8250-common: overlay: Force show network traffic on statusbar
  * sm8250-common: make fod position great again
  * sm8250-common: Declare BOARD_VENDOR
  * sm8250-common: Build offline charging daemon dependency
  * sm8250-common: Add missing IMS symlinks
  * sm8250-common: Create Adreno symlinks
  * sm8250-common: Add kpti=off to vendor boot command line
  * sm8250-common: Extend vbmeta_system to include product
  * sm8250-common: Create full vendor/rfs symlinks
  * sm8250-common: parts: Use correct gaming thermal
  * sm8250-common: Source APNs from Pixel CarrierSettings
  * sm8250-common: fstab: Change userdata fsync mode to strict for f2fs
  * sm8250-common: fstab: A-only userdata: nodiscard -> discard
  * sm8250-common: Switch to source built NFC
  * sm8250-common: initial common tree bringup
  * Revert "umi: overlay: Don't use light sensor for pocket lock"
  * Revert "umi: audio: Add fast flag to deep buffer policy"
  * Revert "umi: props: Enable Seamless Transfer"
  * umi: use correct default network mode (5G+4G)
  * umi: Set target arch variant "armv8-2a"
  * umi: config_suspendWhenScreenOffDueToProximity false
  * umi: import display callibration files
  * umi: Import NVRAM blobs
  * umi: overlay: Set default hotspot ssid
  * umi: org.ifaa.android.manager: Access mlipay hal via a binder service
  * umi: update carrier configs
  * umi: overlay: Don't use light sensor for pocket lock
  * umi: display: enable wide color display and HDR capabilities
  * umi: nuke GcamGo  and bring back Snap
  * umi: Implement SunlightEnhancement LiveDisplay HAL
  * umi: selinux: allow powershare get fs attribute
  * umi: remove unused stuff
  * umi: dont show refresh rate switch
  * umi: system.prop: Enable blurs by default
  * umi: overlay: Enable Adaptive Sleep
  * umi:  Initialize High Touch Polling Rate support
  * umi: update device volume curves
  * umi: Switch audio policy to LA.UM.9.12.r1-08300-SMxx50.0
  * umi: audio: Add fast flag to deep buffer policy
  * umi:  remove stereo channel mask from voip rx
  * umi: audio: Fix mic issues in apps like WhatsApp
  * umi: GcamGO: switch to pratform cert
  * umi: remove_packages: Switch to platform certificate
  * umi: remove_packages: nuke Recorder Prebuild
  * Umi: Init Evolution 5.9
  * umi: overlay: Define OEM fast charge sysfs nod
  * umi: map livedisplay modes
  * umi: overlay: Improve haptic and vibration patterns
  * umi: update dependencies
  * umi: overlay: Define OEM fast charge sysfs nod
  * umi: Remove dsp. prefix from audio and video power profiles
  * umi: Remove USE_XML_AUDIO_POLICY_CONF
  * umi: Use prebuilt vendor libdisplayconfig.qti.so
  * umi: parts: Update Thermal Profiles drawable icons
  * umi: parts: Add back button to ThermalProfiles.
  * umi: parts: Use all shared resources from devicesettings
  * umi: Move parts to /system_ext
  * umi: parts: Refactor sensors
  * umi: parts: Refactor whole code
  * umi: parts: Make thermal profiles naming completely generic
  * umi: parts: clean up
  * Revert "umi: Add screen off FOD"
  * build native livedisplay
  * umi: update dependencies
  * umi: update dtbo from 12.5.5
  * umi: include built in firmware
  * umi: Import QTI vibrator HAL
  * umi: update to july redfin fp
  * umi: hide magisk better
  * umi: update device props
  * umi: move manifests to vintf folder
  * umi: overlay: Set fast charging indicator threshold to 10.8W
  * umi: Set VENDOR_SECURITY_PATCH to platform
  * umi: update dim alpha
  * umi: audio: bring back aosp volume tables
  * umi: audio: Switch to Qualcomm sound effects
  * umi: audio: Add back libmisound and audiosphere
  * umi: provide support for callscreening for kona/lito.
  * umi: fix volume adjustment in voip calls
  * umi: update media codecs
  * umi: drop FOD permission copy
  * umi: Increase a bit calls volume
  * umi: update volume tables
  * umi: increase mic gains
  * umi: remove opencamera config
  * umi: audio: move to configs
  * umi: update speaker volume curve
  * umi: audio: Offload 24 bits playback supports mp3/aac format
  * umi: audio: Add compress recording configurations
  * Revert "umi: adapt configs from instantnoodle"
  * Revert "umi: kill force encryption"
  * Revert "umi: audio: Import partial changes from MI 10S"
  * umi: update brightness from stock
  * umi: update power profile
  * umi: allow powershare file open
  * umi: allow powershare read/write to sysfs
  * umi: remove 32 bit powershare libs
  * umi: releasetools: Print a better message while flashing
  * umi: parts: Update Thermal Profiles drawable icons
  * umi: Simplify AVB flag logic
  * umi:Consolidate smart charging under 'Adaptive Charging'
  * umi: overlay: Change all three default haptic levels to high
  * umi: Remove init.qcom.factory
  * umi: Implement vendor.lineage.powershare@1.0 HAL
  * umi: audio: Import partial changes from MI 10S
  * umi: Switch Skia rendering backend to Vulkan
  * umi: proprietary-files: Remove unnecessary display-composer blobs
  * umi: update partition flags
  * umi: update audio props
  * umi: Increase proximityCheckTimeout
  * Revert "umi: Build HWComposer"
  * umi: fod: update dimming alpha
  * umi: set density correct way
  * umi: update dtb from 12.5.3
  * umi: we dont have notification led
  * umi:  fod: Update libfod extension function prototypes
  * umi:fod: Update FOD position
  * umi: decrease the slow and fast charging threshold
  *  umi: sepolicy: Allow ota updater to access package file
  * umi: overlay: Don't show Mobile plan preference item
  *  umi: common: Set default sounds
  * umi: Don't build tinymix
  * umi: audio: restore earpiece max volumes
  * umi: addres displayfeature denial
  * umi: addres fingerprint denial
  * umi: clean rest of policy for user build
  * umi: Shit Clean-up, UserDebug Build --> User Build
  * umi: Drop auth biometric fingerprint view
  * umi: Fix mic issues in apps like WhatsApp
  * umi: Add dual sim card support entries in manifest
  * umi: props: Enable Seamless Transfer
  * umi: update redfin may fingerprint
  * umi: Build more from source
  * umi: Build HWComposer
  * umi: Build Clearkey Service
  * umi: Proprietary Files, libnl required to get wfd service
  * umi: overlay: default white FOD pressed color
  * umi: overlay: Add maintainer string
  * umi: overlay: Configure SQLite to operate in MEMORY mode
  * umi: sepolicy: smartcharging policy
  * umi: add smart charging nodes
  * umi: audio: update volume tables
  * umi: audio: Disable ULL mode
  * umi: disable tips and hub
  * umi: EvolutionX bringup
  * umi: update dependencies
  * umi: drop interfaces
  * umi: adapt configs from instantnoodle
  * umi: declare vendor security patch
  * umi: parts: Add icons to doze menu
  * umi: build compressed kernel image
  * umi: Update brightness config from Coral
  * umi: reduce reserved size
  * umi: Tune up and organize properties
  * umi: Color mode by miui
  * umi: Check-up Hotword configs
  * umi: update readme
  * umi: update dependencies
  * umi: specify clang version for building own kernel
  * umi: Use prebuilt dtc
  * umi: build dtbo.img
  * umi: Switch to standalone extract utils
  * umi: Update to Redfin April fingerprint
  *  umi: rro_overlays: overlay tethering and wifi stack from Google
  * umi: Don't sign Wifi RROs with platform cert
  * umi: Sign Tether RROs with default cert
  * umi: wifi: Relax WiFi re-association RSSI thresholds
  * umi: wifi: smarter decisions on whether to use a 2- or 5Ghz AP
  * umi: wifi: Disable RX wakelock feature
  * umi: wifi: Enable QPower and Deep sleep at the same time
  * umi: fod: use stock fod dimension
  * umi: kill force encryption
  * umi: Add prebuilt CameraGo
  * umi: remove unwanted packages
  * umi: adapt the exact values for lockscreen charging info
  * umi: adapt fod for interfaces
  * umi: Import goodix HAL definitions
  * umi: Import Xiaomi TouchFeature HAL definitions
  * umi: Move hidl_package_root definition to interfaces directory
  * umi: Import Xiaomi HAL definitions
  * umi: kang init from Raphael
  * umi: TetheringOverlay: Update config
  * umi: TetheringOverlay: Change wifi tether regex
  * umi: rro_overlays: Redo TetheringOverlay's blueprint
  * umi: Add TetheringOverlay
  * umi: Add WifiOverlay
  * umi: initial device bring up
  * sm8250: this.setEnforcing();
  * sm8250: Label all remaing sepolicy
  * sm8250-common: Replace BOARD_CHARGER_ENABLE_SUSPEND with ro.charger.enable_suspend
  * sm8250-common: Re-add aptx blobs
  * sm8250: Tune audio policy volumes *Increase notification and ringtone max volume *Increase headset volume *Decrease alarm max volume
  * sm8250: Clean by unused and old light hal
  * sm8250: Remove these hwserv label for now
  * sm8250-common: Label /dev/ir_spi
  * sm8250-common: Initial common sepolicies
  * sm8250:common: Add lineage.dependencies, track prebuilt blobs https://gitlab.com/dataoutputstream/vendor_xiaomi_sm8250 https://gitlab.com/dataoutputstream/vendor-_xiaomi_umi
  * sm8250-common: Inject Doze trough ia and remove dirac pro guard flag
  * sm8250-common: Update proprietary files *A little more could be built from source, for now ship these libs prebuilt.
  * sm8250-common: Improve libinit *Manage all finger props
  * sm8250-common: Order copies of audio configurations
  * sm8250-common: Lineagify
  * sm8250-common: Add missed p2p config overlay
  * sm8250-common: Kona: media configs
  *  sm8250-common: Don't use custom format for RAW10  && add gralloc usage bits
  * sm8250-common: Kona: Display Configs
  * sm8250-common: Re-Include audio scripts Note: Already builded into kona/audio.mk
  * sm8250: Kona: Audio Configs
  * sm8250-common: Redesign of qcom-hardware configurations -The Board tags and the product tags related to Kona spec-code will be order in their specific place.
  * sm8250-common: Redesigned Properties
  * sm8250: Clean-Up
  * sm8250-common: Overlays cleanup
  * sm8250-common: Restore Parts
  * sm8250-common : Adapt Device Matrix and Manifest
  * sm8250-common: Fod stereotypes
  * sm8250-common: Cut netPerfTuner Interface drom init.qcom.rc
  * sm8250-common: Build hwconfigstore lib
  * sm8250-common: Import light aidl from caf and build lights.kona
  * sm8250-common: Build Nfc Stack
  * sm8250-common: Needed for wfd
  * sm8240-common: Add consumerir config
  * sm8250-common: Build perf libs from source
  * sm8250-common: Build libvulkan
  * sm8250: Clean Wifi Configs Config under firmware not needed for Oss Kernel, but it will be a match for prebuilt kernel, could be replaced by a symbolyc link.
  * Build VNDK packages *Not able to get context object on /dev/vndbinder *libgui needed by libstagefright
  * sm8250-common: build HIDL packages
  * sm8250-common: System Verified Boot
  * sm8250-common: Bye Vendor prebuilt sepolicy
  * sm8250-common: Use MultiHal sensors and build sensors libs
  * sm8250-common: Clean Qti Bluetooth
  * sm8250-common: Import and clean audio configs Tuned policy volumes for audio call and notifications
  * sm8250: Kernel Tags
  * sm8250-common: Update rootdir from lmi V12.2.5.0.RJKMIXM
  * sm8250-common: Update config.fs
  * sm8250-common: Selinux Permissive
  * sm8250-common: Edit wifi symlinks for CAF qca_cld driver
  * sm8250-common: releasetools: flash vbmeta_system as well
  * sm8250-common: releasetools: Add dtbo image to the output zip if present
  * sm8250-common: Override QTI power AIDL init entry
  * sm8250-common: Remove install-recovery.sh
  * sm8250-common: Cleanup audio init scripts
  * sm8250-common: Use component-override to configure Bluetooth
  * sm8250-common: Import CAF bluetooth overlay
  * sm8250-common: Build QTI thermal HIDL
  * sm8250-common: Add additional gralloc usage bit for camera
  * sm8250-common: Reserve additional space on odm/product/system/system_ext/vendor
  * sm8250-common: Kill AVB on fstab
  * sm8250-common: Setup wifi symlinks
  * sm8250-common: Add vendor symlinks
  * sm8250-common: Move supplicant service init to wpa_supplicant
  * sm8250-common: Import rootdir files
  * sm8250-common: Build QTI vibrator AIDL
  * sm8250-common: Build QTI USB HIDL
  * sm8250-common: Build IR HIDL
  * sm8250-common: Inherit qcom vendor sepolicies
  * sm8250-common: Start building vendor and odm * Adapt and add from extracted miui blobs * Initial Proprietary file * Config Files * Build whatever we can from source * Import vintf compatibility_matrix and manifest * Import stock vendor props
  * Dtb into mkboot argument, separeted dtbo target
  * Refact a bit the Dimming Formula
  * Fod icon based on the miui light halo, converted into webp
  * Miui Brightness Overlays
  * Improve haptic and vibe patterns
  * Update media profiles-|kona|
  * releasetools: Ship and update vbmeta image
  * Update and clean proprietary-files
  * Clean-up
  * umi: Increase mic volume
  * umi: audio: Import and vendor_overlay mixer_paths_cdp
  * umi: audio: Make mixer_path inline with CAF
  * umi: audio: Import and vendor_overlay mixer_path
  * umi: audio: Switch to CAF's audio_policy_volume
  * umi: audio: Update audio config from MIUI 12.2.4
  * umi: audio: Apply CAF changes on top and strip Xiaomi ones
  * umi: audio: Import and vendor_overlay audio_platform_info_intcodec
  * umi: audio: Remove shoebox and hw_acc from audio effects
  * Adjust mk for new audio config
  * Label more sepolicy Included sepolicy for touch data, taht will fix low response of the touch
  * Remove vendor sepolicy we don't build vendor at this moment, this  sepolicy won't be never loaded so cut for now.
  * Import new Carrier Config
  * Make fod color transparent and add custom icon For ours best to change to full white
  * sm8250-common: audio: Remove volume_listener from audio effects
  * sm8250-common: Import audio effects config from lmi
  * Remove dirty mount bind
  * Revert "lmi: overlay: Update CarrierConfig from sdm845"
  * Revert "lmi: Enable LTE+ icon"
  * More Descendant-ify
  * Support to GoogleAssistant voice services
  * Adapt to build QtiBtStack into sources
  * Cut Doze from parts
  * Cut dirac from Parts
  * AlwaysOn enabled by default
  * Remove Lineage Parts Custom Doze
  * lmi: Build system variant of configstore
  * Build system variant of Cryptfs
  * lmi: Enable LTE+ icon
  * lmi: overlay: Update CarrierConfig from sdm845
  * system_prop: Remove Gboard annoying spacing
  * Set Se-Linux Enforcing at Boot Since redefining all the missing sepolicy is madness and seeing that the lack of definition does not allow the interaction with the vendor data files and persist data files etc at startup, break the rules but with a limit, we unset at init and set enforcing at the boot stage.The sepolicy required after boot has been defined and is more than necessary, thus doing all malicious applications that would like to read from nodes on sysfs etc will not be able to do it.
  * Overlay only FrameworkResTarget for now
  * Correct scontext string
  * Open camera into Descendant Prebuilts
  * Used well, will solves the problems with the audio speaker
  * Overlays Rearragment
  * Already defined into descendant sepolicy
  * Update Fingerprint description to jenuary
  * umi: resolve some more denials
  * sepolicy: fix some denials
  * Fix Smart Charging denials
  * disable some more overlays
  * overlay: Define config_customDozePackage
  * Cut Lineage PowerShare
  * descendant: device supports in-display fingerprint
  * Move Fingerprint Namespace
  * Support Alipay and WeChat fingerprint payment
  * MountBind libvolumelistener to dev/null
  * FOD: Improve and define some usecase with more formules and code clean.
  * Sepolicy:Clean up and re-format
  * Add needed sepolicy rules from lmi
  * Drop SafailNet
  * Include Public sepolicy
  * Address others denial
  * SeLinux Enforcing
  * BringUp R Sepolicy
  * Remove duplicated overlay
  * Relive libvolumelistener
  * init: Import and workaround safetynet check and cts
  * Ship proper postprocessing soundfx libs  * The lib responsible for audio postprocessing (libvolumelistener)    from Xiaomi causes stuttering distorted audio. Replace with working    lib built from source.
  * kang aptx blobs from redfin-user-11-RD1A.201105.003.A1-6886512-release-keys
  * Currently building them
  * sm8250-common: Remove broken WfdService empty lib
  * sm6250-common: audio: remove raw flag for audio pop
  * sm8250-common: audio: Disable ULL mode
  * Import a complete init.recovery.qcom
  * Support source audio unprocessed
  * WiFi support to protected buffers
  * System props adjustaments
  * ContaxtHub hal
  * umi: Add screen off FOD
  * BatteryHealth Overlays
  * Don't using passtrough hal, not build.
  * Qti camera services
  * Restore white fod work better with last impl
  * Implement fod_ext and specialize fod implementation for xiaomi kona devices Adapt to extension lib and adjust fod, pay attention need my change on fodcircle view https://github.com/dataoutputstream/platform_frameworks_base/commit/86a2a0901b8af99019996286decbc6510f77e375
  * Include thermal libs
  * umi: Build Open Camera instead of Snap Camera
  * Add touch profiles for gaming and benchmarking
  * raphael: parts: Switch to TaskStackListener
  * raphael: Switch back to default thermal profile when screen off
  * raphael: Set dynamic thermal interval to 5 sec
  * raphael: parts: Prevent NPE before DiracSound is initialized
  * Add dynamic thermal profile implementation
  * R proprietary-files
  * umi: add bt_stack_qti.conf to soong namespaces
  * Import vendor/qcom/opensource/commonsys/packages/apps/Bluetooth soong namespace
  * Revert "Fix Bluetooth Audio"
  * Crackling less on the speaker
  * Import R Audio Configuration
  * FrameworkOverlays needed to manage colors into Settings Remove of FrameworkResTarget overlays, that we done to fix brightness, cut also this needed vendor overlays.
  * Up to  VNDK 30
  * lmi: audio: remove raw flag for audio pop
  * lmi: audio: Disable ULL mode
  * Cut hostapd Now We don't need aosp, broke hotspopt wifi
  * Fix Secilc boot crash We don't need this gen rules, so simply cut it
  * Inline our sepolicy
  * Address few selinux denials
  * Clean and Boot
  * Remove livedisplay from manifest for now. Generate blackscreen after boot
  * HAXXX: Fix libvolumelistener and croak audio problem
  * Build PowerStats
  * TetherOffload Config
  * [R] packages: Add protobuf vendorcompat lib
  * Fix Brightness Vendor-Overlay seems that is not working --> Old School
  * Hp-SignApk
  * Fix Bluetooth Audio
  * Refact the properties
  * Tethering Overlay RegExpression
  * overlay: Update in pinned files.
  * Overlays: Clean and usefully R overlays
  * [DNM]raphael: sepolicy: Allow vendor_init to check encryption status of system_data_file
  * mount bind audio_policy_configuration from vendor/etc/audio to vendor/etc too
  * raphael: Add fingerprint configuration to overlay
  * raphael: overlay: Add translatable="false" tags to ims package overlays
  * overlay: Remove old configuration and use new config for MMTEL/RCS
  * raphael: Adjust biometric dialog for 11
  * update avb flags for newer recovery builds
  * R Baseline
  * Missed libs of wifi display
  * Clean Up
  * More sepolicy to light_hal This will solve the ugly effect at the shutdown.
  * Audio tune
  * Se-Linux Enforce
  * Clean init sepolicy
  * Import needed overlays Had cut some vendor overlay and we have to set necessaries flags.
  * Snap Api and others tweak
  * Store kernel module on system and load on early-init + sepolicy
  * Clean up
  * Import policy_volumes xml, tune and set vendor_overlay.
  * Replace empty audio_policy_engine_configuration with the one from stock
  * Audio..config from Miui and set overlay to handle dev input on usb port
  * Allow to xiaomi settings to find ITouchFeature
  * Import missed qti-telephony-common
  * Sepolicy ueventd
  * Fod sepolicy
  * Fixes to system-app sepolicy
  * Xiaomi kona prebuilt: healthd sepolicy
  * Fix a denial xiaomi citsensor
  * Framework compatibility matrix from miui
  * Adjust sepolicy of powershare to Xiaomi kona
  * Fix sepolicy for init module loading
  * Define sepolicy for touchfeature
  * Import some sepolicy needed rules from raphael
  * Enabled brightness path
  * AutoBrightness on and config
  * Override some overlays in vendor
  * PowerShare: Use Common Path
  * Improve fod light
  * Adapt PowerShare from instantnoodle
  * Inline safailnet and clean
  * Dirac fixes in the xml and boot service
  * Switch back to AOSP NFC
  * Add safailnet to hide selinux permessive
  * extract tools specialized
  * add aosp compiled hostapd binary
  * Hdr display
  * Dc Dimmming off need fix There are problems with light hal at low bright.
  * Dummy config for bcause have tinymix and Ant+
  * Build passtrough for kona
  * Import passthrough light hal
  * Inline a minimal sepolicy
  * Add touchfeature impl of dt2w
  * Fod Service and hz menu from Picasso
  * sm8250-common: Import XiaomiParts
  * sm8250-common: Initial fod impl
  * hardware xiaomi interfaces Will need for fod impl and parts impl
  * Config fylesystem for custom power hal impl
  * Overlays
  * Use NQ Nfc such as xiaomi
  * Build Bluetooth Qti Stack
  * Common init script
  * Include props
  * Custom and vendor properties
  * Define a initial dirty proprietary-files txt
  * Audio configs and for now use tinymix
  * Import and include needed permissions and define medial_profiles
  * Define dummies libs
  * HIDL
  * Include fstab in the ramdisk, define avb and recovery flags
  * Import fstab no avb and include needed init run commands
  * Sm8250: init body and include some headers
  * Initial commit
