TEST_COMPONENT = WmaProDecTest_common
OBJ_FILES = AacDecTest.o

# library files to link with when building
LIBRARIES += -ldl -lOMX_Core -lpthread -lOMX_AacDecoder -lLCML

TOP_DIR = ../
include $(TOP_DIR)/include.mk
CFLAGS += -I$(ROOT_DIR)/system/src/openmax_il/omx_core/src -I$(TOP_DIR)/inc/


