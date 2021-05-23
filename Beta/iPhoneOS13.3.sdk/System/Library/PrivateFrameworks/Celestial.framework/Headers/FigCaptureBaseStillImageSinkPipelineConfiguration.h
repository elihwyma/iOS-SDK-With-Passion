/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCaptureSinkConfiguration;

@interface FigCaptureBaseStillImageSinkPipelineConfiguration : NSObject

{
    _Bool _allowsMultipleInflightCaptures;
    _Bool _clientIsCameraOrDerivative;
    _Bool _allowedToModifyInputBuffers;
    unsigned int _inputPixelFormat;
    int _horizontalSensorBinningFactor;
    int _verticalSensorBinningFactor;
    float _maxSupportedFrameRate;
    int _motionAttachmentsSource;
    _Bool _stillImageOutputDerivesFromVideoCaptureOutput;
    FigCaptureSinkConfiguration *_sinkConfiguration;
    _Bool _usesHighEncodingPriority;
    unsigned int _outputPixelFormat;
    _Bool _stillImageStabilizationSupported;
    int _noiseReductionAndStabilizationScheme;
    CDStruct_79c71658 _depthDataDimensions;
    float _portraitEffectsMatteMainImageDownscalingFactor;
}

@property (nonatomic) _Bool allowsMultipleInflightCaptures;
@property (nonatomic) _Bool clientIsCameraOrDerivative;
@property (nonatomic) _Bool allowedToModifyInputBuffers;
@property (nonatomic) unsigned int inputPixelFormat;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;
@property (nonatomic) float maxSupportedFrameRate;
@property (nonatomic) int motionAttachmentsSource;
@property (retain, nonatomic) FigCaptureSinkConfiguration *sinkConfiguration;
@property (nonatomic) _Bool usesHighEncodingPriority;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) _Bool stillImageStabilizationSupported;
@property (nonatomic) int noiseReductionAndStabilizationScheme;
@property (nonatomic) CDStruct_79c71658 depthDataDimensions;
@property (nonatomic) float portraitEffectsMatteMainImageDownscalingFactor;

- (void)dealloc;

@end
