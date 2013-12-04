/*****************************************************************************/
/*                                                                           */
/*                        Ittiam Audio Standards                             */
/*                                                                           */
/*                   ITTIAM SYSTEMS PVT LTD, BANGALORE                       */
/*                          COPYRIGHT(C) 2004                                */
/*                                                                           */
/*  This program is proprietary to Ittiam Systems Pvt. Ltd. and is protected */
/*  under Indian Copyright Act as an unpublished work.Its use and disclosure */
/*  is  limited by  the terms and conditions of a license  agreement. It may */
/*  be copied or  otherwise reproduced or  disclosed  to persons outside the */
/*  licensee 's  organization  except  in  accordance  with  the  terms  and */
/*  conditions of  such an agreement. All  copies and reproductions shall be */
/*  the  property  of Ittiam Systems Pvt.  Ltd. and  must  bear  this notice */
/*  in its entirety.                                                         */
/*                                                                           */
/*****************************************************************************/

/*****************************************************************************/
/*                                                                           */
/*  File Name        : ia_ac3_dec_error_codes.h                              */
/*                                                                           */
/*  Description      : Module specific error codes definitions               */
/*                                                                           */
/*  List of Functions: None                                                  */
/*                                                                           */
/*  Issues / Problems: None                                                  */
/*                                                                           */
/*  Revision History :                                                       */
/*                                                                           */
/*        DD MM YYYY       Author                Changes                     */
/*        29 07 2005       Ittiam                Created                     */
/*                                                                           */
/*****************************************************************************/

#ifndef __IA_AC3DEC_ERROR_CODES_H__
#define __IA_AC3DEC_ERROR_CODES_H__

/*****************************************************************************/
/* Constant hashdefines                                                      */
/*****************************************************************************/

/*****************************************************************************/
/* Ittiam ac3_dec ErrorCode Definitions                                      */
/*****************************************************************************/

/*****************************************************************************/
/* Class 0: API Errors                                                       */
/*****************************************************************************/
/* Non Fatal Errors */
#define IA_AC3DEC_API_NONFATAL_NO_ERROR							0x00000000
#define IA_AC3DEC_API_NONFATAL_CMD_NOT_SUPPORTED				0x00000001
#define IA_AC3DEC_API_NONFATAL_CMD_TYPE_NOT_SUPPORTED			0x00000002
/* Fatal Errors */
#define IA_AC3DEC_API_FATAL_INVALID_MEMTAB_INDEX				0xFFFF8000
#define IA_AC3DEC_API_FATAL_INVALID_LIB_ID_STRINGS_IDX			0xFFFF8001
#define IA_AC3DEC_API_FATAL_MEM_ALLOC							0xFFFF8002
#define IA_AC3DEC_API_FATAL_INVALID_CONFIG_PARAM				0xFFFF8003
#define IA_AC3DEC_API_FATAL_INVALID_EXECUTE_TYPE				0xFFFF8004
#define IA_AC3DEC_API_FATAL_INVALID_CMD							0xFFFF8005
#define IA_AC3DEC_API_FATAL_MEM_ALIGN							0xFFFF8006
/*****************************************************************************/
/* Class 1: Configuration Errors                                             */
/*****************************************************************************/
/* Fatal Errors */
#define IA_AC3DEC_CONFIG_FATAL_PCM_WDSZ							0xFFFF8800
#define IA_AC3DEC_CONFIG_FATAL_KAR_REPRODN_MODE					0xFFFF8801
#define IA_AC3DEC_CONFIG_FATAL_DYNRNG_COMPMODE					0xFFFF8802
#define IA_AC3DEC_CONFIG_FATAL_OUT_LFE_CHAN						0xFFFF8803
#define IA_AC3DEC_CONFIG_FATAL_OUT_CHAN_CONFIG					0xFFFF8804
#define IA_AC3DEC_CONFIG_FATAL_NUM_OUT_CHANS					0xFFFF8805
#define IA_AC3DEC_CONFIG_FATAL_PCM_SCF							0xFFFF8806
#define IA_AC3DEC_CONFIG_FATAL_STEREO_OUT_MODE					0xFFFF8807
#define IA_AC3DEC_CONFIG_FATAL_2MONO_REPRODN_MODE				0xFFFF8808
#define IA_AC3DEC_CONFIG_FATAL_DYNAMIC_RANGE					0xFFFF8809
#define IA_AC3DEC_CONFIG_FATAL_CHAN_ROUT						0xFFFF880A

/*****************************************************************************/
/* Class 2: Frame_information Errors                                         */
/*****************************************************************************/
/* Fatal Errors */
#define IA_AC3DEC_FRAMEINFO_FATAL_INVALID_SAMPRATE				0xFFFF9001
#define IA_AC3DEC_FRAMEINFO_FATAL_INVALID_DATARATE				0xFFFF9002
#define IA_AC3DEC_FRAMEINFO_FATAL_INVALID_REV					0xFFFF9003
/*****************************************************************************/
/* Class 3: Execution Errors                                                 */
/*****************************************************************************/
/* Non Fatal Errors */
#define IA_AC3DEC_EXECUTE_NONFATAL_RPT							0x00001800
#define IA_AC3DEC_EXECUTE_NONFATAL_MUTE							0x00001801
#define IA_AC3DEC_EXECUTE_NONFATAL_CHANS						0x00001802
#define IA_AC3DEC_EXECUTE_NONFATAL_MISC							0x00001803
#define IA_AC3DEC_EXECUTE_NONFATAL_BLOCK5_EXCEEDS_3BY8			0x00001804
#define IA_AC3DEC_EXECUTE_NONFATAL_BLK01_EXCEEDS_5BY8			0x00001805
#define IA_AC3DEC_EXECUTE_NONFATAL_ADDL_BSI_SKIPPED				0x00001806
#define IA_AC3DEC_EXECUTE_NONFATAL_NEED_MORE_DATA				0x00001807
#define IA_AC3DEC_EXECUTE_NONFATAL_FRAME_INCOMPLETE				0x00001808
#define IA_AC3DEC_FRAMEINFO_NONFATAL_INVALID_SYNC				0x00001809
/* Fatal Errors */
#define IA_AC3DEC_EXECUTE_FATAL_EXPAND_DELTA_ERROR				0xFFFF9800
#define IA_AC3DEC_EXECUTE_FATAL_PHSCOR_INDEX_OUT				0xFFFF9801
#define IA_AC3DEC_EXECUTE_FATAL_CPLSTRAT_REUSE_BLK0				0xFFFF9802
#define IA_AC3DEC_EXECUTE_FATAL_CPL_DUAL_MONO					0xFFFF9803
#define IA_AC3DEC_EXECUTE_FATAL_REMAT_REUSE_BLK0				0xFFFF9804
#define IA_AC3DEC_EXECUTE_FATAL_CPLEXP_REUSE_BLK0				0xFFFF9805
#define IA_AC3DEC_EXECUTE_FATAL_EXPSTRAT_REUSE_BLK0				0xFFFF9806
#define IA_AC3DEC_EXECUTE_FATAL_LFEEXPST_REUSE_BLK0				0xFFFF9807
#define IA_AC3DEC_EXECUTE_FATAL_CHBWCOD_HIGH					0xFFFF9808
#define IA_AC3DEC_EXECUTE_FATAL_BITALLOC_RESUE_BLK0				0xFFFF9809
#define IA_AC3DEC_EXECUTE_FATAL_SNROFF_REUSE_BLK0				0xFFFF980A
#define IA_AC3DEC_EXECUTE_FATAL_CPLTERMS_REUSE_BLK0				0xFFFF980B
#define IA_AC3DEC_EXECUTE_FATAL_BITSKIP_LT0						0xFFFF980C
#define IA_AC3DEC_EXECUTE_FATAL_BITSKIP_LT0BSI_SKIPPED			0xFFFF980D
#define IA_AC3DEC_EXECUTE_FATAL_UNSUPPORTED_REV					0xFFFF980E


#endif /* __IA_AC3DEC_ERROR_CODES_H__ */
