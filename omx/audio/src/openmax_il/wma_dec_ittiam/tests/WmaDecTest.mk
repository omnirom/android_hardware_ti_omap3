TEST_COMPONENT = WmaDecTest_common
OBJ_FILES = WmaDecTest.o

# library files to link with when building
LIBRARIES += -ldl -lOMX_Core -lpthread -lOMX_WmaDecoder -lLCML

TOP_DIR = ../
include $(TOP_DIR)/include.mk
CFLAGS += -I$(ROOT_DIR)/system/src/openmax_il/omx_core/src -I$(TOP_DIR)/inc/


