/*****************************************************************************/
/*                                                                           */
/*                        Ittiam Audio Standards                             */
/*                                                                           */
/*                   ITTIAM SYSTEMS PVT LTD, BANGALORE                       */
/*                          COPYRIGHT(C) 2009                                */
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
/*  File Name        : IttiamOMX.h		                             */
/*                                                                           */
/*  Description      : 											             */
/*                                                                           */
/*  List of Functions: None                                                  */
/*                                                                           */
/*  Issues / Problems: None                                                  */
/*                                                                           */
/*  Revision History :                                                       */
/*                                                                           */
/*        DD MM YYYY       Author                Changes                     */
/*        24 10 2009       Ittiam                Created                     */
/*                                                                           */
/*****************************************************************************/

typedef struct OMX_AUDIO_PARAM_AC3TYPE {
    OMX_U32 		nSize;                 /**< size of the structure in bytes */
	OMX_VERSIONTYPE nVersion;      /**< OMX specification version information */
    OMX_U32 		nPortIndex;            /**< port that this structure applies to */
    OMX_S32      	nSampleRate;
	OMX_S32      	nChannels;
	OMX_S32			eChannelMode;
	OMX_S32      lfeflag;
    OMX_S32      i_output_pcm_fmt;  /* Number of bits per output PCM Sample */
	OMX_S32      i_k_capable_mode;  /* Karaoke capable mode */
	OMX_S32      i_comp_mode;	   /* DRC comp mode */
	OMX_S32      i_pcm_scale_fac;   /* PCM scale factor To be converted to Q15 */
	OMX_S32      i_stereo_mode;	   /* Stereo mode */
	OMX_S32      i_dualmono_mode;   /* Dual mono mode */
	OMX_S32      i_dyn_rng_scale_hi; /* DRC scale hi in Q15 */
	OMX_S32      i_dyn_rng_scale_low; /* DRC scale low in Q15 */
    OMX_S8     chan_ptr[6];
 } OMX_AUDIO_PARAM_AC3TYPE;

#define OMX_AUDIO_CodingAC3 (OMX_AUDIO_CODINGTYPE)(OMX_AUDIO_CodingVendorStartUnused+1)        /**< Any variant of AC3 encoded data */

#define OMX_IndexParamAudioAc3		(OMX_INDEXTYPE)(OMX_IndexVendorStartUnused+1)
#define OMX_IndexCustomAc3CodingType (OMX_INDEXTYPE)(OMX_IndexVendorStartUnused+21)
#define OMX_IndexCustomAc3DecStereoMode (OMX_INDEXTYPE)(OMX_IndexVendorStartUnused+20)

