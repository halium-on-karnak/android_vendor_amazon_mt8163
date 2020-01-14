LOCAL_PATH := $(call my-dir)

# ========================================================
# for LD_PRELOAD
# ========================================================
ifeq ($(MTK_USER_SPACE_DEBUG_FW),yes)
include $(CLEAR_VARS)
LOCAL_SRC_FILES := init.preload.eng.rc
LOCAL_MODULE := init.preload.rc
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH := $(TARGET_ROOT_OUT)
LOCAL_MODULE_TAGS := eng
include $(BUILD_PREBUILT)
endif

ifeq ($(MTK_USER_SPACE_DEBUG_FW),yes)
include $(CLEAR_VARS)
LOCAL_SRC_FILES := malloc_debug_option.eng.rc
LOCAL_MODULE := malloc_debug_option.rc
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk
LOCAL_MODULE_CLASS := ETC
LOCAL_MODULE_PATH := $(TARGET_OUT_ETC)/init
LOCAL_MODULE_TAGS := eng
include $(BUILD_PREBUILT)
endif
