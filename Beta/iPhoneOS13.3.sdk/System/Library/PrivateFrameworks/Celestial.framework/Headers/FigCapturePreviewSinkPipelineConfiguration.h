/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCapturePreviewSinkPipelineConfiguration : NSObject

{
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoThumbnailConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_previewTimeMachineConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    _Bool _doingFaceTracking;
    CDStruct_08002bce _sceneClassifierPipelineVersion;
    int _sourceColorSpaceProperties;
    _Bool _sourcePixelFormatIsFullRange;
    _Bool _sourceIsBravoDevice;
    _Bool _clientIsCameraOrDerivative;
    _Bool _vitalityScoringEnabled;
    _Bool _displayPipeRequiresPacked10BitPixelFormatForP3Input;
    _Bool _deferredPrepareEnabled;
    _Bool _remoteVideoPreview;
    _Bool _overCaptureEnabled;
    _Bool _primaryCaptureRectModificationEnabled;
    double _videoStabilizationOverscan;
}

@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoThumbnailConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (retain, nonatomic) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *previewTimeMachineConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (retain, nonatomic) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (retain, nonatomic) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic) _Bool doingFaceTracking;
@property (nonatomic) CDStruct_08002bce sceneClassifierPipelineVersion;
@property (nonatomic) int sourceColorSpaceProperties;
@property (nonatomic) _Bool sourcePixelFormatIsFullRange;
@property (nonatomic) _Bool sourceIsBravoDevice;
@property (nonatomic) _Bool clientIsCameraOrDerivative;
@property (nonatomic) _Bool vitalityScoringEnabled;
@property (nonatomic) _Bool displayPipeRequiresPacked10BitPixelFormatForP3Input;
@property (nonatomic) _Bool deferredPrepareEnabled;
@property (nonatomic) _Bool remoteVideoPreview;
@property (nonatomic) _Bool overCaptureEnabled;
@property (nonatomic) _Bool primaryCaptureRectModificationEnabled;
@property (nonatomic) double videoStabilizationOverscan;

- (void)dealloc;

@end
