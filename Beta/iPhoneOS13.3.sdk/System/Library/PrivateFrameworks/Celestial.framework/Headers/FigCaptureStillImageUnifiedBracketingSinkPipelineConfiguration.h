/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/FigCaptureBaseStillImageSinkPipelineConfiguration.h>

@class NSDictionary;

@interface FigCaptureStillImageUnifiedBracketingSinkPipelineConfiguration : FigCaptureBaseStillImageSinkPipelineConfiguration

{
    unsigned int _pipelineStagePriority;
    unsigned int _inferencePriority;
    int _deviceType;
    NSDictionary *_sensorIDStringsByPortType;
    NSDictionary *_baseZoomFactorsByPortType;
    int _redEyeReductionVersion;
    float _overCapturePercentage;
    CDStruct_79c71658 _overCaptureImageDimensions;
    _Bool _deferredProcessingSupported;
    _Bool _deferredPhotoProcessorEnabled;
    _Bool _adjustablePortraitLightingEffectStrengthSupported;
    _Bool _deepFusionSupported;
    _Bool _captureTimePhotosCurationSupported;
    _Bool _supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
    NSDictionary *_cameraInfoByPortType;
}

@property (nonatomic) unsigned int pipelineStagePriority;
@property (nonatomic) unsigned int inferencePriority;
@property (nonatomic) int deviceType;
@property (retain, nonatomic) NSDictionary *sensorIDStringsByPortType;
@property (retain, nonatomic) NSDictionary *baseZoomFactorsByPortType;
@property (nonatomic) int redEyeReductionVersion;
@property (nonatomic) float overCapturePercentage;
@property (nonatomic) CDStruct_79c71658 overCaptureImageDimensions;
@property (nonatomic) _Bool deferredProcessingSupported;
@property (nonatomic) _Bool deferredPhotoProcessorEnabled;
@property (nonatomic) _Bool adjustablePortraitLightingEffectStrengthSupported;
@property (nonatomic) _Bool deepFusionSupported;
@property (nonatomic) _Bool captureTimePhotosCurationSupported;
@property (nonatomic) _Bool supportsCameraCalibrationDataWithoutDepthForBravoConstituentPhoto;
@property (retain, nonatomic) NSDictionary *cameraInfoByPortType;

- (void)dealloc;

@end
