LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_PRELINK_MODULE := false
LOCAL_MODULE_SUFFIX := .a
LOCAL_MODULE := ia_ac3_dec_lib
LOCAL_SRC_FILES := $(LOCAL_MODULE)$(LOCAL_MODULE_SUFFIX)
LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE_TAGS := optional

include $(BUILD_PREBUILT)

include $(CLEAR_VARS)

LOCAL_PRELINK_MODULE := false

LOCAL_SRC_FILES:= \
	OMX_Ac3Dec_CompThread.c		\
	OMX_Ac3Dec_Utils.c		\
	OMX_Ac3Decoder.c

LOCAL_C_INCLUDES := $(TI_OMX_COMP_C_INCLUDES) \
	$(TI_OMX_SYSTEM)/common/inc		\
	$(TI_OMX_AUDIO)/ac3_dec_ittiam/inc

LOCAL_SHARED_LIBRARIES := $(TI_OMX_COMP_SHARED_LIBRARIES) \
        liblog
LOCAL_STATIC_LIBRARIES := ia_ac3_dec_lib

LOCAL_LDLIBS += \
	-lpthread \
	-ldl \
	-lsdl
	
LOCAL_CFLAGS := $(TI_OMX_CFLAGS) -DOMAP_2430 -DAC3DEC_DEBUG

LOCAL_MODULE:= libOMX.ITTIAM.AC3.decode
LOCAL_MODULE_TAGS:= optional

include $(BUILD_SHARED_LIBRARY)
#$(call add-prebuilt-files, STATIC_LIBRARIES, ia_ac3_dec_lib.a)


