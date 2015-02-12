/******************************************************************************
// (C) Copyright 2007 Marvell International Ltd.
// All Rights Reserved
******************************************************************************/

/** @file OMX_IppDef.h
 *  The structures needed by IppDef components to exchange
 *  parameters and configuration data with the componenmilts.
 */

#ifndef OMX_IppDef_h
#define OMX_IppDef_h

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Each OMX header must include all required header files to allow the
 *  header to compile without errors.  The includes below are required
 *  for this header file to compile successfully 
 */
#include <OMX_Types.h>
#include <OMX_Core.h>
#include <OMX_Video.h>
#include <OMX_Audio.h>

// method
#define MARCO_MAX(_a_,_b_) (_a_>_b_)?_a_:_b_

//vendor extention for OMX_VIDEO_CODINGTYPE
typedef enum OMX_VIDEO_CODING_VENDOR_TYPE{
    OMX_VIDEO_CodingVendorDIVX3 = OMX_VIDEO_CodingVendorStartUnused + 100,
    OMX_VIDEO_CodingVendorDIVX = OMX_VIDEO_CodingVendorStartUnused + 101,
    OMX_VIDEO_CodingVendorSORENSON = OMX_VIDEO_CodingVendorStartUnused + 102,
	OMX_VIDEO_CodingVendorHEVC = OMX_VIDEO_CodingVendorStartUnused + 103,
} OMX_VIDEO_CODING_VENDOR_TYPE;

typedef enum OMX_AUDIO_CODING_VENDOR_TYPE{
    OMX_AUDIO_CodingVendorAC3 = OMX_AUDIO_CodingVendorStartUnused + 100,
} OMX_AUDIO_CODING_VENDOR_TYPE;

typedef enum OMX_AUDIO_CHANNEL_VENDOR_TYPE{
    OMX_AUDIO_ChannelVendorLC = OMX_AUDIO_ChannelVendorStartUnused + 100,
    OMX_AUDIO_ChannelVendorRC,
    OMX_AUDIO_ChannelVendorTS,
    OMX_AUDIO_ChannelVendorLSD,
    OMX_AUDIO_ChannelVendorRSD,
    OMX_AUDIO_ChannelVendorLW,
    OMX_AUDIO_ChannelVendorRW,
    OMX_AUDIO_ChannelVendorLVH,
    OMX_AUDIO_ChannelVendorRVH,    
    OMX_AUDIO_ChannelVendorCVH,
    OMX_AUDIO_ChannelVendorLFE2,
} OMX_AUDIO_CHANNEL_VENDOR_TYPE;

typedef enum OMX_OTHER_VENDOR_POWERMODE_TYPE {
    OMX_OTHER_VendorPowerModeUnused,
    OMX_OTHER_VendorPowerModeLow, // force to use low power setting
    OMX_OTHER_VendorPowerModeNormal, 
    OMX_OTHER_VendorPowerModeMax = 0x7FFFFFFF
} OMX_OTHER_VENDOR_POWERMODE_TYPE;

typedef enum OMX_VIDEO_VENDOR_SCENARIO_TYPE {
    OMX_VIDEO_VendorScenarioAuto,
    OMX_VIDEO_VendorScenarioNormal,
    OMX_VIDEO_VendorScenarioThumbnails,
    OMX_VIDEO_VendorScenarioCamcorder,
    OMX_VIDEO_VendorScenarioVideoEditor,
    OMX_VIDEO_VendorScenarioMax = 0x7FFFFFFF
} OMX_VIDEO_VENDOR_SCENARIO_TYPE;

// Indexes
#define		OMX_IndexIndexMarvellStartUnused		0xFF000000
#define		OMX_IndexParamMarvellH264Enc			0xFF000005	/**< reference: OMX_VIDEO_PARAM_MARVELL_H264ENC */
#define     OMX_IndexParamMarvellH264Dec			0xFF000006  /**< reference: OMX_VIDEO_PARAM_MARVELL_H264DEC */
#define		OMX_IndexParamMarvellH263Enc			0xFF000007	/**< reference: OMX_VIDEO_PARAM_MARVELL_H263ENC */
#define		OMX_IndexParamMarvellWMVDec			    0xFF00000F /**< reference: OMX_VIDEO_PARAM_MARVELL_WMVDEC */
#define		OMX_IndexParamMarvellWMADec			    0xFF000010 /**< reference: OMX_VIDEO_PARAM_MARVELL_WMADEC */
#define     OMX_IndexParamMarvellCodaDx8Dec         0xFF000011 /**< reference: OMX_VIDEO_PARAM_MARVELL_CODADX8DEC */
#define     OMX_IndexParamMarvellVmetaDec           0xFF000012  /**< reference: OMX_VIDEO_PARAM_MARVELL_VMETADEC */
#define     OMX_IndexParamMarvellVmetaEnc           0xFF000013  /**< reference: OMX_VIDEO_PARAM_MARVELL_VMETAENC */
#define     OMX_IndexParamMarvellCodaDx8Enc         0xFF000014 /**< reference: OMX_VIDEO_PARAM_MARVELL_CODADX8ENC */
#define     OMX_IndexParamMarvellAACDec             0xFF000015 /**< reference: OMX_VIDEO_PARAM_MARVELL_AACENC */
#define     OMX_IndexParamMarvellAACEnc             0xFF000016 /**< reference: OMX_VIDEO_PARAM_MARVELL_AACENC */
#define     OMX_IndexParamMarvellCoda7542Dec        0xFF000017 /**< reference: OMX_VIDEO_PARAM_MARVELL_CODA7542DEC */
#define     OMX_IndexParamMarvellCoda7542Enc        0xFF000018 /**< reference: OMX_VIDEO_PARAM_MARVELL_CODA7542ENC */
#define     OMX_IndexParamMarvellHantroDec          0xFF000019 /**< reference: OMX_VIDEO_PARAM_MARVELL_HANTRODEC */
#define     OMX_IndexParamMarvellHantroEnc          0xFF000020 /**< reference: OMX_VIDEO_PARAM_MARVELL_HANTROENC */
#define     OMX_IndexConfigMarvellHantroEnc         0xFF000021 /**< reference: OMX_VIDEO_CONFIG_MARVELL_HANTROENC */
#define     OMX_IndexConfigMarvellAC3Dec            0xFF000022 /**< reference: OMX_VIDEO_CONFIG_MARVELL_AC3DEC */
#define     OMX_IndexParamMarvellAdaptivePlayback   0xFF000023
#define     OMX_IndexParamMarvellStoreMetaData      0xFF000024 /**< reference: OMX_VIDEO_PARAM_MARVELL_STORE_METADATA */
#define     OMX_IndexConfigMarvellStoreMetaData     0xFF000025 /**< reference: OMX_VIDEO_CONFIG_MARVELL_STORE_META_DATA */
#define     OMX_IndexParamMarvellH265Dec			0xFF000030  /**< reference: OMX_VIDEO_PARAM_MARVELL_H265DEC */

#define		OMX_IndexParamMarvellInputMode			0xFF100000	/**< reference: OMX_OTHER_PARAM_MARVELL_INPUTMODETYPE */
#define		OMX_IndexParamMarvellUseSourceBuffer	0xFF100001/**< reference: OMX_OTHER_PARAM_MARVELL_USESOURCEBUFFERTYPE */
#define     OMX_IndexParamMarvellCapabilty          0xFF100002 /**< reference: OMX_OTHER_PARAM_MARVELL_CAPABILITYTYPE */
#define     OMX_IndexParamMarvellVmetaDRM           0xFF100003 /**< reference: OMX_VIDEO_PARAM_MARVELL_VMETADRM */

#define		OMX_IndexConfigTimeDuration				0x09FFFFFF  /**< reference: OMX_TIME_CONFIG_TIMESTAMPTYPE */


// define for WMA
#define WMA_DECOPT_CHANNEL_DOWNMIXING	            0x00000001
#define WMA_DECOPT_REQUANTTO16			            0x00000040
#define WMA_DECOPT_DOWNSAMPLETO44OR48	            0x00000080

#define IPP_WMA_MAX_CBSIZE 32


// Extension index parameter structure


typedef enum IPPOMX_INPUTMODE
{
	ONE_ENTIRE_FRAME				= 0,
	PARTIAL_END_OF_FRAME	= 1,
	STREAM_IN								= 2,
	INPUT_MODE_MAX		= 0x7FFFFFFF
}IPPOMX_INPUTMODE;

/* Input Mode Parameter Structure Name is "OMX.Marvell.index.param.inputMode" */
/*	Input Mode  Specific Parameter Structure	*/
typedef struct OMX_OTHER_PARAM_MARVELL_INPUTMODETYPE {
	OMX_U32				nSize;
	OMX_VERSIONTYPE		nVersion;
	OMX_U32				nPortIndex;
	IPPOMX_INPUTMODE	inputMode;
}OMX_OTHER_PARAM_MARVELL_INPUTMODETYPE;


/* Whether iv Render To Use Source Buffer Parameter Structure Name is "OMX.Marvell.index.param.useSourceBuffer" */
/*	Use Source Buffer Specific Parameter Structure	*/
typedef struct OMX_OTHER_PARAM_MARVELL_USESOURCEBUFFERTYPE {
	OMX_U32				nSize;
	OMX_VERSIONTYPE		nVersion;
	OMX_U32				nPortIndex;
	OMX_BOOL			bUseSrcBuf;
}OMX_OTHER_PARAM_MARVELL_USESOURCEBUFFERTYPE;


/* H.264 Encoder Parameter Structure Name is "OMX.Marvell.index.param.H264Encoder" */
/*	H.264 Encoder Specific Parameter Structure	*/
typedef struct OMX_VIDEO_PARAM_MARVELL_H264ENC{
    OMX_U32			nSize;
    OMX_VERSIONTYPE	nVersion;
    OMX_U32			nPortIndex;
    //expose
    int           iQpFirstFrame;
}OMX_VIDEO_PARAM_MARVELL_H264ENC;

/* H.264 Decoder Parameter Structure Name is "OMX.Marvell.index.param.H264Decoder" */
/* H.264 Decoder Specific Parameter Structure	*/
typedef struct OMX_VIDEO_PARAM_MARVELL_H264DEC{
	OMX_U32			nSize;
	OMX_VERSIONTYPE nVersion;
	OMX_U32			nPortIndex;
	OMX_BOOL		bReorder;
	OMX_BOOL		bSmartSkip;
}OMX_VIDEO_PARAM_MARVELL_H264DEC;

/* H.263 Encoder Parameter Structure Name is "OMX.Marvell.index.param.H263Encoder" */
/*	H.263 Encoder Specific Parameter Structure	*/
typedef struct OMX_VIDEO_PARAM_MARVELL_H263ENC {
    OMX_U32			nSize;
    OMX_VERSIONTYPE	nVersion;
    OMX_U32			nPortIndex;
    int             iIntraQuant;
    int             iInterQuant;
    int				optDF;
    int				optSS;
    int				BitsPerSlice;
    int             iRCType;
}OMX_VIDEO_PARAM_MARVELL_H263ENC;

/* WMV Decoder Parameter Structure Name is "OMX.Marvell.index.param.WMVDecoder" */
/*	WMV Decoder Specific Parameter Structure	*/
typedef struct OMX_VIDEO_PARAM_MARVELL_WMVDEC{
	OMX_U32			nSize;
	OMX_VERSIONTYPE	nVersion;
	OMX_U32			nPortIndex;
	//expose
	int           codec_version;
}OMX_VIDEO_PARAM_MARVELL_WMVDEC;

/* WMA Decoder Parameter Structure Name is "OMX.Marvell.index.param.WMADecoder" */
/*	WMA Decoder Specific Parameter Structure	*/
typedef struct OMX_AUDIO_PARAM_MARVELL_WMADEC{
	OMX_U32			nSize;
	OMX_VERSIONTYPE	nVersion;
	OMX_U32			nPortIndex;
	//expose
	OMX_U16 wFormatTag;			/* format type */
//	OMX_S16 nChannels;			/* number of channels (i.e. mono, stereo...) */
//	OMX_S32 nSamplesPerSec;		/* sample rate */
	OMX_S32 nAvgBytesPerSec;		/* for buffer estimation */
	OMX_S16 nBlockAlign;			/* block size of data */
	OMX_S16 wBitsPerSample;		/* number of bits per sample of mono data */
	OMX_S16 cbSize;				/* the count in bytes of the size of */
	/* extra information (after cbSize) */
	OMX_U8 pData[IPP_WMA_MAX_CBSIZE];
	/* extra information data */
	OMX_S16 iRmsAmplitudeRef;
	OMX_S16 iRmsAmplitudeTarget;
	OMX_S16 iPeakAmplitudeRef;
	OMX_S16 iPeakAmplitudeTarget;

	/* Additional parameters set by user */
	OMX_U32 iDecoderFlags;			/* Flag for decoding, could be multiple set:
								IPP_DECOPT_CHANNEL_DOWNMIXING, downmixing to two channels
								IPP_DECOPT_REQUANTTO16, requant to 16 bit
								IPP_DECOPT_DOWNSAMPLETO44OR48, downsample to 44.1 or 48 kHz
								*/
}OMX_AUDIO_PARAM_MARVELL_WMADEC;

/*ChipMedia Codadx8 Decoder Parameter Structure Name is "OMX.Marvell.index.param.CodaDx8Decoder"*/
/*ChipMedia Codadx8 Decoder Specific Parameter*/
typedef struct OMX_VIDEO_PARAM_MARVELL_CODADX8DEC{
	OMX_U32			nSize;
	OMX_VERSIONTYPE	nVersion;
	OMX_U32			nPortIndex;
	
	OMX_BOOL bRotation;
	OMX_U32  nRotationAngle; /*0,90,180,270*/
	OMX_BOOL bMirror;
	OMX_U32  nMirrorDir; /*0, 1(VER), 2(HOR), 3(VER_HOR)*/
	OMX_BOOL bEnableMultiInstances;
	OMX_U32  nMinUndequeuedBuffers; /*the count of buffers held by renderer*/

}OMX_VIDEO_PARAM_MARVELL_CODADX8DEC;
/*ChipMedia Codadx8 Encoder Parameter Structure Name is "OMX.Marvell.index.param.CodaDx8Encoder"*/
typedef struct OMX_VIDEO_PARAM_MARVELL_CODADX8ENC{
	OMX_U32			nSize;
	OMX_VERSIONTYPE	nVersion;
	OMX_U32			nPortIndex;
	
	OMX_BOOL bEnableMultiInstances;
	OMX_BOOL bShareInputBuffer;
}OMX_VIDEO_PARAM_MARVELL_CODADX8ENC;

/*ChipMedia Coda7542 Decoder Parameter Structure Name is "OMX.Marvell.index.param.Coda7542Decoder"*/
/*ChipMedia Coda7542 Decoder Specific Parameter*/
typedef struct OMX_VIDEO_PARAM_MARVELL_CODA7542DEC{
	OMX_U32			nSize;
	OMX_VERSIONTYPE	nVersion;
	OMX_U32			nPortIndex;
	
    OMX_VIDEO_VENDOR_SCENARIO_TYPE nScenario;
    OMX_OTHER_VENDOR_POWERMODE_TYPE nPowerMode;
    OMX_S32         nFieldStream;
	OMX_S8   nReserved[52]; 

}OMX_VIDEO_PARAM_MARVELL_CODA7542DEC;
typedef struct OMX_VIDEO_PARAM_MARVELL_CODA7542ENC{
	OMX_U32			nSize;
	OMX_VERSIONTYPE	nVersion;
	OMX_U32			nPortIndex;
	
    OMX_VIDEO_VENDOR_SCENARIO_TYPE nScenario;
    OMX_OTHER_VENDOR_POWERMODE_TYPE nPowerMode;
    OMX_U32   nIntraRefreshMbs;
	OMX_S8   nReserved[48]; 

}OMX_VIDEO_PARAM_MARVELL_CODA7542ENC;

typedef struct OMX_VIDEO_PARAM_MARVELL_HANTROENC{
    OMX_U32         nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32         nPortIndex;
    OMX_VIDEO_VENDOR_SCENARIO_TYPE nScenario;
    OMX_OTHER_VENDOR_POWERMODE_TYPE nPowerMode;
    OMX_BOOL        bEnableVideoStab;
    OMX_U32         nRotationAngle;     //0, 90, 270, clockwise
    OMX_U32         nCirInterval;

    OMX_U32         nReserved[16];
}OMX_VIDEO_PARAM_MARVELL_HANTROENC;

typedef struct OMX_VIDEO_CONFIG_MARVELL_HANTROENC{
    OMX_U32         nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32         nPortIndex;

    OMX_U32         nPhyLumaStab;       //physical address of next frame luma, for video stabilizer
    OMX_U32         nSliceSize;         //unit is macroblock rows
    OMX_U32         nXOffset;
    OMX_U32         nYOffset;

    OMX_S32         iRoiQpDelta;        //[-15,0]
    //the unit of following 4 parameters is macroblock
    OMX_U32         nRoiXOffset;
    OMX_U32         nRoiYOffset;
    OMX_U32         nRoiWidth;
    OMX_U32         nRoiHeight;

    OMX_U32         nCirInterval;
    OMX_COLOR_FORMATTYPE eInputColorFormat;

    OMX_U32         nReserved[16];
}OMX_VIDEO_CONFIG_MARVELL_HANTROENC;

#define INPUT_BUFFER_SIZE_STORE_META_DATA 4096

typedef struct OMX_VIDEO_CONFIG_MARVELL_STORE_META_DATA{
    OMX_U32         nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32         nPortIndex;

    OMX_U32         nXOffset;
    OMX_U32         nYOffset;
    OMX_U32         nXStride;
    OMX_U32         nYStride;
    
    OMX_COLOR_FORMATTYPE eInputColorFormat;
    // when bRequireAlignmentPerPlane is true, means that U/V planar layout need specified alignment
    OMX_BOOL        bRequireAlignmentPerPlane;
    OMX_U32         nAlignment;

    OMX_U32         nReserved[32];
}OMX_VIDEO_CONFIG_MARVELL_STORE_META_DATA;

/* H.265 Decoder Parameter Structure Name is "OMX.Marvell.index.param.H265Decoder" */
/* H.265 Decoder Specific Parameter Structure	*/
typedef struct OMX_VIDEO_PARAM_MARVELL_H265DEC{
	OMX_U32			nSize;
	OMX_VERSIONTYPE nVersion;
	OMX_U32			nPortIndex;
	OMX_BOOL		bReorder;
	OMX_BOOL		bSmartSkip;
}OMX_VIDEO_PARAM_MARVELL_H265DEC;

/* Capability Parameter Structure Name is "OMX.Marvell.index.param.capability" */
/*	Capability  Specific Parameter Structure	*/
typedef struct OMX_OTHER_PARAM_MARVELL_CAPABILITYTYPE {
	OMX_U32				nSize;
	OMX_VERSIONTYPE		nVersion;

	OMX_BOOL bComponentMultiThreaded;
    OMX_BOOL bSupportsEntireFrames;
    OMX_BOOL bSupportsPartialFrames;
    OMX_BOOL bSupportsStreamIn;
	
}OMX_OTHER_PARAM_MARVELL_CAPABILITYTYPE;

/* Hantro Decoder Parameter Structure Name is "OMX.Marvell.index.param.HantroDecoder" */
/* HantroDecoder post-processor Parameter Structure */
typedef struct OMXHantroPpCSCParSet{
    OMX_U32                 iVideoRange; /*0 [0,255] for Y, Cb, Cr; ,1 [16,235] for Y, [16,240] for Cb, Cr, default is 0 */
    OMX_U32                 iBrightness; /* Adjusts the brightness of the RGB image, default is 0 */
    OMX_U32                 iContrast;   /* Adjusts the contrast of the RGB image, default is 0  */
    OMX_U32                 iSaturation; /* Adjusts the color saturation of the RGB image, default is 0 */

    OMX_U32                 iRgbTransform; /* 0: BT.601; 1: BT.709; 2: custom values can be also used, default is 0 
                                            when custom mode, below value is valid*/
    OMX_U32                 a;           /* Conversion coefficient. Scaled by 256. */
    OMX_U32                 b;           /* Conversion coefficient. Scaled by 256. */
    OMX_U32                 c;           /* Conversion coefficient. Scaled by 256. */
    OMX_U32                 d;           /* Conversion coefficient. Scaled by 256. */
    OMX_U32                 e;           /* Conversion coefficient. Scaled by 256. */

    OMX_U32                 reserved[8];    /*keep reserved member as 0 currently*/
}OMXHantroPpCSCParSet;

typedef enum{
    PP_USAGE_COPY           = 0,            // 0: PP is used to copy frame buffer from decoder, when iPPCombinedMode = 1.
    PP_USAGE_SCALE          = (1<<0),       // 1: PP is used to scale frame buffer from decoder to a special size, when iPPCombinedMode = 2.
    PP_USAGE_CSC            = (1<<1),       // 2: PP is used to do csc to the frame buffer from decoder, when iPPCombinedMode = 2.
}OMX_HantroPpUsage;

typedef struct OMX_HantroPpParSet{
    OMX_U32                 iPPCombinedMode;        /*  0: PP disabled; 
                                                    1: PP is used to copy internal outpu buffer to outside provide buffer.
                                                    2: Outside determine the output resolution and format */
    /*below paramters (except bPostDBKEnable and bDeInterlaceEnable) are valid only when iPPCombinedMode is 2  */
    OMX_COLOR_FORMATTYPE    eOutputFormat;          //output format: NV12, UYVY, RGB32(rgba8888), RGB16(rgb565)
    OMX_U32                 iOutputStrideX;         //horizontal stride of output frame buffer, in pixel
    OMX_U32                 iOutputStrideY;         //vertical stride of output frame buffer height, in pixel
    OMX_U32                 iDisplayOffsetX;
    OMX_U32                 iDisplayOffsetY;
    OMX_U32                 iDisplayWidth;          //width of display area in output frame buffer in pixel
    OMX_U32                 iDisplayHeight;         //height of display area in output frame buffer
    OMX_BOOL                bPostDBKEnable;         //0: not-enable h263/mpeg4 post-processing de-blocking. 1: enable h263/mpeg4 post-processing de-blocking. only valid for h263 and mpeg4.
    OMX_BOOL                bDeInterlaceEnable;     //0: disable deinterlace; 1:enable interlace for interlaced sequence

    OMXHantroPpCSCParSet    PpCscParSet;
    OMX_HantroPpUsage       ePpUsage;
    
    OMX_U32                 reserved[7];           /*keep reserved member as 0 currently*/
}OMX_HantroPpParSet;

/* HantroDecoder Specific Parameter Structure */
typedef struct OMX_VIDEO_PARAM_MARVELL_HANTRODEC{
    OMX_U32             nSize;
    OMX_VERSIONTYPE     nVersion;
    OMX_U32             nPortIndex;
    OMX_BOOL            bReorderEnable;         /*OMX_TRUE: enable reorder; OMX_FALSE: disable reorder*/
    OMX_U32             nSmoothMode;            /*0: no smooth; 1: normal smooth; 2: hack smooth*/
    OMX_BOOL            bMVCEnable;             /*OMX_TRUE: enable MVC decoding; OMX_FALSE: disable MVC decoding, only output base view*/
    OMX_BOOL            bDynamicClkEnable;      /*OMX_TRUE: enable VPU clock gated by hantro internal gating module; OMX_FALSE: disable*/ 
    OMX_U32             nDrmMode;               /*specify special memory usage of DRM mode*/
    OMX_BOOL            bSetMinDisBufNum;       /*OMX_TRUE or OMX_FALSE. OMX client set this flag to TRUE to make OMX IL alloc minimum pic buffer*/
    OMX_S32             nFieldStrm;             /*0, 1, -1. 0 means is not an interlace stream; 1 means is an interlace stream; -1 means not avalible */
    OMX_HantroPpParSet  PpParSet;               /*post-processor parameter settings*/
    OMX_U32             reserved[16];           /*keep reserved member as 0 currently*/
} OMX_VIDEO_PARAM_MARVELL_HANTRODEC;

/* Vmeta Decoder Parameter Structure Name is "OMX.Marvell.index.param.VmetaDecoder" */
/*Vmeta Decoder Specific Parameter Structure*/
#define VC1_SIMPLE_PROFILE                  0
#define VC1_MAIN_PROFILE                    4
#define VC1_ADVANCED_PROFILE                12
#define ENABLE_ADVANAVSYNC_1080P            0x1
#define ENABLE_ADVANAVSYNC_720P             0x2
#define ENABLE_POWEROPT                     (1<<31)
#define VMETA_CHECK_SUM_SIZE                65
typedef struct OMX_VIDEO_PARAM_MARVELL_VMETADEC{
    OMX_U32         nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32         nPortIndex;
    OMX_BOOL        bReorder;       /*OMX_TRUE or OMX_FALSE*/
    OMX_U32         nVC1Profile;    /*VC1_SIMPLE_PROFILE, or VC1_MAIN_PROFILE, or VC1_ADVANCED_PROFILE*/
    OMX_BOOL        bMultiIns;      /*OMX_TRUE or OMX_FALSE*/
    OMX_U32         nAdvanAVSync;   /*0x1: enable advanced av sync only for 1080p, 0x3 enable for 1080p&720p*/
    OMX_S32         nThreOffset;    /*advanced av sync parameter, [-3, 0], nThreOffset+FrameRate is target fps*/
    OMX_BOOL        bSetMinDisBufNum;  /*OMX_TRUE or OMX_FALSE. OMX client set this flag to TRUE to make Vmeta IL alloc minimum pic buffer*/
    OMX_S32         nFieldStrm;     /*0, 1, -1. 0 means is not an interlace stream; 1 means is an interlace stream; -1 means not avalible */
} OMX_VIDEO_PARAM_MARVELL_VMETADEC;

/* Vmeta Decoder DRM Parameter Structure Name is "OMX.Marvell.index.param.VmetaDRM" */
typedef OMX_S32 (*OMX_DescrambleCallback)(OMX_U32 nSeed0, OMX_U32 nSeed1, OMX_U8 *pSrc, OMX_U8 *pDst, OMX_S32 nSize, OMX_S32 bResume);
typedef struct OMX_VIDEO_PARAM_MARVELL_VMETADRM{
    OMX_U32                 nSize;
    OMX_VERSIONTYPE         nVersion;
    OMX_U32                 nPortIndex;
    OMX_BOOL                bEnableDrmDec;       /*OMX_TRUE or OMX_FALSE*/
    OMX_DescrambleCallback  fDescramble;
} OMX_VIDEO_PARAM_MARVELL_VMETADRM;

/* Vmeta Encoder Parameter Structure Name is "OMX.Marvell.index.param.VmetaEncoder" */
/*Vmeta Encoder Specific Parameter Structure*/
typedef struct OMX_VIDEO_PARAM_MARVELL_VMETAENC{
    OMX_U32         nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32         nPortIndex;
    OMX_BOOL        bMultiIns;      /*OMX_TRUE or OMX_FALSE*/
    OMX_S32         nRCType;        /* valid when rc enable
                                    // 0: Best visual quality
                                    // 1: Median visual quality, median bit-rate control
                                    // 2: Best bit-rate control*/
    OMX_S32         nMaxBitRate;    /* (b/s), valid when rc enable and nRCType=2*/
    OMX_U32         nAdvanFeature;  /* advanced features control, like power opt, etc. */
    OMX_U32         reserved[8];    /* for future using */
} OMX_VIDEO_PARAM_MARVELL_VMETAENC;

/* AAC Encoder Parameter Structure Name is "OMX.Marvell.index.param.AACEncoder" */
/*AAC Encoder Specific Parameter Structure*/
typedef struct _OMX_AUDIO_PARAM_MARVELL_AACENC{
    OMX_U32         nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32         nPortIndex;
    OMX_BOOL        bOutputSpecificData;      /*OMX_TRUE or OMX_FALSE*/
} OMX_AUDIO_PARAM_MARVELL_AACENC;

/* AC3 Decoder Parameter Structure Name is "OMX.Marvell.index.param.AC3Dcoder" */
/*AC3 Decoder Specific Parameter Structure*/
typedef struct OMX_VIDEO_CONFIG_MARVELL_AC3DEC {
	OMX_U32			nSize;
	OMX_VERSIONTYPE	nVersion;
	OMX_U32			nPortIndex;
	//expose
	OMX_BOOL        bStereoModeOn;      /* Perform downmix to 2 channel or not */
	OMX_BOOL        bAndroidLayoutOn;   /* Output according to Android's layout or the original layout */
	OMX_U32         reserved[16];       /* keep reserved member as 0 currently */
} OMX_VIDEO_PARAM_MARVELL_AC3DEC;

typedef struct OMX_VIDEO_PARAM_MARVELL_ADAPTIVE_PLAYBACK {
    OMX_U32 nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32 nPortIndex;
    OMX_BOOL bEnable;
    OMX_U32 nMaxFrameWidth;
    OMX_U32 nMaxFrameHeight;
}OMX_VIDEO_PARAM_MARVELL_ADAPTIVE_PLAYBACK;

// A pointer to this struct is passed to OMX_SetParameter() when the extension
// index "OMX.google.android.index.storeMetaDataInBuffers" is given.
typedef struct OMX_VIDEO_PARAM_MARVELL_STORE_METADATA {
    OMX_U32 nSize;
    OMX_VERSIONTYPE nVersion;
    OMX_U32 nPortIndex;
    OMX_BOOL bStoreMetaData;
}OMX_VIDEO_PARAM_MARVELL_STORE_METADATA;

// Color formats
#define		OMX_COLOR_FormatMarvellStartUnused	0x7f000000
#define		OMX_COLOR_FormatYV12				( (OMX_COLOR_FORMATTYPE)(OMX_COLOR_FormatMarvellStartUnused + 1) )
#define		OMX_COLOR_Format15bitRGB555			( (OMX_COLOR_FORMATTYPE)(OMX_COLOR_FormatMarvellStartUnused + 2) )
#define		OMX_COLOR_Format16bitBGR555			( (OMX_COLOR_FORMATTYPE)(OMX_COLOR_FormatMarvellStartUnused + 3) )
#define		OMX_COLOR_FormatGRAY8		        ( (OMX_COLOR_FORMATTYPE)(OMX_COLOR_FormatMarvellStartUnused + 4) )
#define		OMX_COLOR_FormatYUV444Planar		( (OMX_COLOR_FORMATTYPE)(OMX_COLOR_FormatMarvellStartUnused + 5) )
#define		OMX_COLOR_FormatIppPicture			( (OMX_COLOR_FORMATTYPE)(OMX_COLOR_FormatMarvellStartUnused + 6) )

// Google extention color format. Need to sync the value in /frameworks/native/include/media/openmax/OMX_IVCommon.h.
#define     OMX_COLOR_FormatAndroidOpaque       0x7F000789


// Flag
#define OMX_BUFFERFLAG_NEWSEGMENT 0x7F000000
/** 
 * Rotation
 *
 * ENUMS
 * 
 */

typedef enum OMX_IMAGE_INTERPOLATIONTYPE {
    OMX_IMAGE_InterpolationNearest = 0,
    OMX_IMAGE_InterpolationBilinear = 1,
    OMX_IMAGE_InterpolationCubical = 2,
    OMX_IMAGE_InterpolationMedian = 3,
    OMX_IMAGE_InterpolationNearlinear = 4,
    OMX_IMAGE_InterpolationMax = 0x7FFFFFFF
} OMX_IMAGE_INTERPOLATIONTYPE;


// video define
#define     VIDEO_CIF_SIZE		(352*288*3/2)     
#define     VIDEO_QCIF_SIZE		(176*144*3/2)     
#define     MAX_VIDEOSTREAM_LEN_QCIF		(64*1024/8)     
#define		MAX_VIDEOSTREAM_LEN_CIF			(1024*1024/8)
#define		VIDEOSTREAM_BUFFER_SIZE			(MAX_VIDEOSTREAM_LEN_CIF)


#define IPP_OMX_BUFFERFLAG_INTERLACEFRAME        0x00000001
#define IPP_OMX_BUFFERFLAG_OWN_BY_COMPONENT      0x00000002
typedef struct _OMX_BUFFERHEADERTYPE_IPPEXT {
    OMX_BUFFERHEADERTYPE    bufheader;
    OMX_U32                 nPhyAddr;
    OMX_BOOL                bAllocBufInternal;      /*to differentiate internally or externally allocating buffer*/
    OMX_U32                 nExtFlags;              /*extension flags*/
}OMX_BUFFERHEADERTYPE_IPPEXT;

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif
/* File EOF */
