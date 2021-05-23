/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCaptureSourceConfiguration, FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureCameraSourcePipelineConfiguration : NSObject

{
    int _motionAttachmentsSource;
    int _videoStabilizationType;
    int _depthType;
    CDStruct_1b6d18a9 _maxExposureDurationClientOverride;
    CDStruct_1b6d18a9 _maxExposureDurationFrameworkOverride;
    _Bool _forceCNRDisabled;
    _Bool _coreMediaFaceTrackingEnabled;
    _Bool _ispFaceTrackingEnabled;
    _Bool _offlineVISEnabled;
    _Bool _zeroShutterLagEnabled;
    _Bool _configureForZeroShutterLagSupport;
    float _overCapturePercentage;
    _Bool _stillImageOverCaptureEnabled;
    _Bool _configureForSpatialOverCaptureSupport;
    _Bool _configureForSpatialStillImageOverCaptureSupport;
    _Bool _clockSynchronizationEnabled;
    _Bool _depthConversionEnabled;
    int _preferredCompressionTypeOnPreviewOutput;
    int _preferredCompressionTypeOnVideoCaptureOutputs;
    int _stillImageFocusPixelDataRetainedBufferCount;
    int _stillImageSashimiRawRetainedBufferCount;
    _Bool _streamingForegroundSegmentationEnabled;
    _Bool _RGBIRStereoFusionEnabled;
    int _autoImageControlMode;
    FigCaptureSourceConfiguration *_cameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    NSArray *_previewDerivedVideoConnectionConfigurations;
    NSArray *_videoCaptureConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    NSArray *_visionDataConnectionConfigurations;
    NSArray *_metadataObjectConnectionConfigurations;
    NSArray *_movieFileDetectedObjectMetadataConnectionConfigurations;
    int _originalVideoStabilizationTypeForOfflineVIS;
}

@property (nonatomic) int motionAttachmentsSource;
@property (nonatomic) int videoStabilizationType;
@property (nonatomic) int originalVideoStabilizationTypeForOfflineVIS;
@property (nonatomic) int depthType;
@property (nonatomic) CDStruct_1b6d18a9 maxExposureDurationClientOverride;
@property (nonatomic) CDStruct_1b6d18a9 maxExposureDurationFrameworkOverride;
@property (nonatomic) _Bool forceCNRDisabled;
@property (nonatomic) _Bool coreMediaFaceTrackingEnabled;
@property (nonatomic) _Bool ispFaceTrackingEnabled;
@property (nonatomic) _Bool offlineVISEnabled;
@property (nonatomic) _Bool zeroShutterLagEnabled;
@property (nonatomic) _Bool configureForZeroShutterLagSupport;
@property (nonatomic) float overCapturePercentage;
@property (nonatomic) _Bool stillImageOverCaptureEnabled;
@property (nonatomic) _Bool configureForSpatialOverCaptureSupport;
@property (nonatomic) _Bool configureForSpatialStillImageOverCaptureSupport;
@property (nonatomic) _Bool clockSynchronizationEnabled;
@property (nonatomic) _Bool depthConversionEnabled;
@property (nonatomic) int preferredCompressionTypeOnPreviewOutput;
@property (nonatomic) int preferredCompressionTypeOnVideoCaptureOutputs;
@property (nonatomic) int stillImageFocusPixelDataRetainedBufferCount;
@property (nonatomic) int stillImageSashimiRawRetainedBufferCount;
@property (nonatomic) _Bool streamingForegroundSegmentationEnabled;
@property (nonatomic) _Bool RGBIRStereoFusionEnabled;
@property (nonatomic) int autoImageControlMode;
@property (retain, nonatomic) FigCaptureSourceConfiguration *cameraConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (retain, nonatomic) NSArray *previewDerivedVideoConnectionConfigurations;
@property (retain, nonatomic) NSArray *videoCaptureConnectionConfigurations;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (retain, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (retain, nonatomic) NSArray *visionDataConnectionConfigurations;
@property (retain, nonatomic) NSArray *metadataObjectConnectionConfigurations;
@property (retain, nonatomic) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;

- (void)dealloc;

@end
