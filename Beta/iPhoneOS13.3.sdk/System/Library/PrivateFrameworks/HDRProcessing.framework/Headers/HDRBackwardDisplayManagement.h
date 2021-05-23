/*
 Image: /System/Library/PrivateFrameworks/HDRProcessing.framework/HDRProcessing
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@protocol MTLBuffer, MTLDeviceSPI, MTLLibrary, MTLRenderPipelineState, MTLSamplerState, MTLTexture;

@interface HDRBackwardDisplayManagement : NSObject

{
    unsigned long long _frameIndex;
    id <MTLDeviceSPI> _device;
    id <MTLLibrary> _defaultLibrary;
    id <MTLRenderPipelineState> _BKDM_ARGB_Linear;
    id <MTLRenderPipelineState> _BKDM_3Plane_2Pixel_Linear[12];
    id <MTLRenderPipelineState> _BKDM_3Plane_1Pixel_Linear[12];
    id <MTLRenderPipelineState> _BKDM_3Plane_1Pixel_Gamma[12];
    id <MTLRenderPipelineState> _BKDM_3Plane_1Pixel_Gamma_Scaled[12];
    id <MTLRenderPipelineState> _BKDM_3Plane_1Pixel_Video_Scaled[12];
    id <MTLRenderPipelineState> _BKDM_3Plane_2Pixel_Gamma_Scaled[12];
    id <MTLRenderPipelineState> _BKDM_3Plane_2Pixel_Video_Scaled[12];
    id <MTLRenderPipelineState> _BKDM_SDRUIOnly_ShaderDegamma[12];
    id <MTLRenderPipelineState> _BKDM_SDRUIOnly[12];
    id <MTLRenderPipelineState> _BKDM_SDRVideoOnly[12];
    id <MTLRenderPipelineState> _BKDM_SDRVideoUIBlending[12];
    id <MTLRenderPipelineState> _BKDM_SDRUIBlending[12];
    id <MTLRenderPipelineState> _colorfill1[12];
    id <MTLRenderPipelineState> _colorfill2[12];
    id <MTLRenderPipelineState> _fillUI1ForHDR[12];
    id <MTLRenderPipelineState> _fillUI1SDR24[12];
    id <MTLRenderPipelineState> _fillUI2ForHDR[12];
    id <MTLRenderPipelineState> _metadataKernel;
    id <MTLRenderPipelineState> _metadataKernel2Pixel;
    id <MTLSamplerState> _inputSampler;
    id <MTLTexture> _pq2LTable;
    id <MTLTexture> _l2PQTable;
    id <MTLTexture> _inverseScalingFactorTableTexture;
    id <MTLTexture> _inverseScalingFactorTableTextures[3];
    NSMutableData *_inverseScalingTable;
    id <MTLTexture> _sdrScalingFactorTableTexture;
    id <MTLTexture> _yuvScalingFactorTableTexture;
    id <MTLTexture> _yuvScalingFactorTableTextures[3];
    unsigned int _indexOfyuvScalingFactorTableTexture;
    NSMutableData *_sdrScalingTable;
    NSMutableData *_yuvScalingTable;
    float _cached_target_white;
    float _cached_target_black;
    float _cached_source_white;
    float _cached_source_black;
    float _prev_SlopeScaled;
    float _prev_c1;
    float _prev_c2;
    float _prev_c3;
    id <MTLBuffer> _uniformBuffer;
    id <MTLBuffer> _uniformBuffers[3];
    id <MTLBuffer> _vertsBuffer;
    id <MTLBuffer> _vertsBuf;
    id <MTLBuffer> _vertsBufs[3];
    int _num_Blend_Rects[3];
    int _num_Video_Rects[3];
    int _num_UI_Rects[3];
    int _num_ColorFill_Rects[3];
    CDStruct_8e61eb45 _cachedFullRegion;
    CDStruct_8e61eb45 _cachedVideoDstRegion[3];
    CDStruct_8e61eb45 _cachedVideoSrcRegion[3];
    CDStruct_8e61eb45 _cachedUIDstRegion[3];
    CDStruct_8e61eb45 _cachedUISrcRegion[3];
    unsigned int _cached_videoInputFormat;
    unsigned int _cached_uiInputFormat;
    id <MTLBuffer> _metadataVertexBuffer;
    int _metadataSpanCount[2];
    int _width;
    int _height;
    int _targetWidth;
    int _targetHeight;
    id <MTLTexture> _metadataTexture[2];
    id <MTLTexture> _metadataTextures[3][2];
    id <MTLTexture> _inputTexture[3];
    id <MTLTexture> _outputTexture;
    id <MTLTexture> _outputTextureMetadata;
    id <MTLTexture> _intermediateTexture;
    id <MTLTexture> _uiTexture;
    float _uiEDRFactor;
    float _inputScaleFactor;
    unsigned int _displayMaxBrightnessInNits;
    unsigned int _displayMaxBrightnessInNitsForSDR;
    float _displayMinBrightnessInNits;
    _Bool _hasDisplayBrightnessFromEDID;
    unsigned int _displayType;
    unsigned int _outputPackingColorFormat;
    unsigned int _inverseScalingTableIndex;
    _Bool _useAccessibilityMatrix;
    CDStruct_e50908d0 _cachedHDRMatrix;
    float _709toPanelPrimaryMatrix[9];
}

- (void)initWithDevice:(id)arg1;
- (long long)encodeToCommandBuffer:(id)arg1 video:(struct __IOSurface *)arg2 videoSrcRegion:(CDStruct_8e61eb45)arg3 videoDstRegion:(CDStruct_8e61eb45)arg4 ui:(struct __IOSurface *)arg5 uiSrcRegion:(CDStruct_8e61eb45)arg6 uiDstRegion:(CDStruct_8e61eb45)arg7 backgroundColor:(CDStruct_d2b197d1 *)arg8 output:(struct __IOSurface *)arg9 frameProperties:(id)arg10;
- (long long)setAccessibilityMatrix:(CDStruct_e50908d0 *)arg1;
- (id)initWithDevice:(id)arg1 displayProperties:(id)arg2;
- (void)initDisplayAttributes:(id)arg1;
- (void)setupMetal;
- (void)createKernels;
- (void)createSamplers;
- (void)createPQ2LTable;
- (void)createL2PQTable;
- (void)createInverseScalingFactorTable;
- (void)createSDRScalingFactorTable;
- (void)createYUVScalingFactorTable;
- (void)createBuffers;
- (void)createMetadataTexture;
- (unsigned int)getPackagingColorFormatFromDictionary:(id)arg1 withDefaultValue:(unsigned int)arg2;
- (id)createRenderPipeLineWithVertexName:(id)arg1 fragmentName:(id)arg2 colorFormat:(unsigned long long)arg3 useCustomMatrix:(_Bool)arg4 p3CSC:(_Bool)arg5 applyYGamma:(_Bool)arg6;
- (_Bool)inputIsSDRVideoFormat:(struct __IOSurface *)arg1;
- (void)attatchInfoFrame:(CDStruct_0319101c *)arg1 toOutputSurface:(struct __IOSurface *)arg2;
- (void)drawMetaWithEncoder:(id)arg1 widthScale:(int)arg2 dmPayLoadLength:(int)arg3;
- (long long)encodeToCommandBuffer:(id)arg1 video:(struct __IOSurface *)arg2 ui:(struct __IOSurface *)arg3 output:(struct __IOSurface *)arg4 frameProperties:(id)arg5;
- (void)createMetadataVertexBuffer;
- (void)generateMetaAndConfig:(id)arg1 inputSurface:(struct __IOSurface *)arg2 outputSurface:(struct __IOSurface *)arg3 payLoad:(struct **)arg4 dmCfg:(struct **)arg5;
- (void)fillScalingTable_SDR2HDR:(CDStruct_0319101c *)arg1 target_White:(float)arg2 target_Black:(float)arg3;
- (_Bool)updateConfigFromMetadata:(CDStruct_0319101c *)arg1 uiScaleFactor:(float)arg2 width:(int)arg3 background:(CDStruct_d2b197d1 *)arg4 hdrVideoOnly:(_Bool)arg5 hdr10TV:(_Bool)arg6 sdrOnly:(_Bool)arg7;
- (void)fillScalingTable_YUVTM:(CDStruct_0319101c *)arg1 targetwhite:(float)arg2 targetblack:(float)arg3 satBoost:(float)arg4 scalingFactor:(_Bool)arg5 sdrOnly:(_Bool)arg6;
- (void)fillInverseScalingFactorTableFromDMConfig:(CDStruct_0319101c *)arg1;
- (int)adjustMetaData:(CDStruct_2130949e *)arg1 HDRUIBlending:(_Bool)arg2 hasLetterbox:(_Bool)arg3;
- (void)packetizeMetadata:(CDStruct_2130949e *)arg1 length:(int)arg2 into:(int)arg3 onSurface:(struct __IOSurface *)arg4;
- (int)pixelNumPerThreadFullScreen:(_Bool)arg1 videoInput:(struct __IOSurface *)arg2 UI:(struct __IOSurface *)arg3 Output:(struct __IOSurface *)arg4 widthScaling:(_Bool)arg5;
- (void)setupTexturesWithInput:(struct __IOSurface *)arg1 VideoSRGB:(_Bool)arg2 UI:(struct __IOSurface *)arg3 UISRGB:(_Bool)arg4 Output:(struct __IOSurface *)arg5 PixelPerThread:(int)arg6;
- (id)createRenderCommandEncoderWithCommandBuffer:(id)arg1 texture:(id)arg2 widthScale:(unsigned int)arg3 loadAction:(unsigned long long)arg4;
- (int)getTVIndex:(_Bool)arg1;
- (void)updateUniformUIScaleForVideo:(_Bool)arg1 forTV:(_Bool)arg2 videoPeakBrightnessInNits:(int)arg3 uiHWDegamma:(_Bool)arg4;
- (void)handleMetaInsertion:(_Bool)arg1 encoder:(id)arg2 widthScale:(int)arg3 payloadLength:(unsigned int)arg4;
- (long long)EncodeToCommandBuffer:(id)arg1 inputSurface:(struct __IOSurface *)arg2 uiSurface:(struct __IOSurface *)arg3 outputSurface:(struct __IOSurface *)arg4 frameProperties:(id)arg5;
- (void)updateVertices:(CDStruct_8e61eb45)arg1 videoInput:(struct __IOSurface *)arg2 videoDstRegion:(CDStruct_8e61eb45)arg3 videoSrcRegion:(CDStruct_8e61eb45)arg4 uiInput:(struct __IOSurface *)arg5 uiDstRegion:(CDStruct_8e61eb45)arg6 uiSrcRegion:(CDStruct_8e61eb45)arg7 dstWidth:(int)arg8 dstHeight:(int)arg9 videoSrcWidth:(int)arg10 videoSrcHeight:(int)arg11 index:(int)arg12 scale:(int)arg13;
- (unsigned long long)getPixelFormatFromSurface:(struct __IOSurface *)arg1 DeGamma:(_Bool)arg2 forceUseOnePlane:(_Bool)arg3 default:(unsigned long long)arg4;
- (_Bool)inputIsVideoOnly:(struct __IOSurface *)arg1 inputUI:(struct __IOSurface *)arg2;
- (long long)encodeToCommandBuffer:(id)arg1 inputSurface:(struct __IOSurface *)arg2 outputSurface:(struct __IOSurface *)arg3 frameProperties:(id)arg4;
- (long long)encodeToCommandBuffer:(id)arg1 video:(struct __IOSurface *)arg2 videoSrcRegion:(CDStruct_8e61eb45)arg3 videoDstRegion:(CDStruct_8e61eb45)arg4 ui:(struct __IOSurface *)arg5 output:(struct __IOSurface *)arg6 frameProperties:(id)arg7;
- (void)setupMetadataTextureWithOutput:(struct __IOSurface *)arg1;

@end
