
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := jconsole-nopie

LOCAL_LDLIBS := -ldl -lc

ifeq ($(TARGET_ARCH_ABI),arm64-v8a)
  LOCAL_CFLAGS := -fPIC -Os -Werror -fno-strict-aliasing -DREADLINE -march=armv8-a
  LOCAL_ARM_MODE := arm
  LOCAL_ARM_NEON := true
endif
ifeq ($(TARGET_ARCH_ABI),armeabi-v7a)
  LOCAL_CFLAGS := -fPIC -Os -Werror -fno-strict-aliasing -DREADLINE -mfloat-abi=softfp -mfpu=vfpv3-d16 -march=armv7-a
  LOCAL_ARM_MODE := arm
endif
ifeq ($(TARGET_ARCH_ABI),armeabi)
  LOCAL_CFLAGS := -fPIC -Os -Werror -fno-strict-aliasing -DREADLINE -mfloat-abi=softfp -mfpu=vfp -march=armv6
  LOCAL_ARM_MODE := arm
endif
ifeq ($(TARGET_ARCH),x86_64)
  LOCAL_CFLAGS := -fPIC -Os -Werror -fno-strict-aliasing -DREADLINE -march=x86-64 -mtune=intel -msse4.2 -mpopcnt -fno-stack-protector
endif
ifeq ($(TARGET_ARCH),x86)
  LOCAL_CFLAGS := -fPIC -Os -Werror -fno-strict-aliasing -DREADLINE -march=i686 -mtune=intel -msse2 -mfpmath=sse -fno-stack-protector
endif

LOCAL_SRC_FILES :=  jconsole.c jeload.c linenoise.c

include $(BUILD_EXECUTABLE)

