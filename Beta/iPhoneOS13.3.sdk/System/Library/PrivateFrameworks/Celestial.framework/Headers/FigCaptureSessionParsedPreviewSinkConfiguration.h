/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCaptureSourceConfiguration, FigDepthDataCaptureConnectionConfiguration, FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedPreviewSinkConfiguration : NSObject

{
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoThumbnailConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_previewTimeMachineConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigCaptureSourceConfiguration *_cameraConfiguration;
    int _sourceDeviceType;
}

@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoThumbnailConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *previewTimeMachineConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfiguration;
@property (nonatomic, readonly) int sourceDeviceType;

- (void)dealloc;
- (id)initWithParsedCameraSourceConfiguration:(id)arg1 sourceDeviceType:(int)arg2;
- (id)initWithVideoPreviewSinkConnectionConfiguration:(id)arg1 videoThumbnailConnectionConfiguration:(id)arg2 videoDataConnectionConfiguration:(id)arg3 depthDataConnectionConfiguration:(id)arg4 previewTimeMachineConnectionConfiguration:(id)arg5 sceneClassifierConnectionConfiguration:(id)arg6 metadataObjectConnectionConfiguration:(id)arg7 stillImageConnectionConfiguration:(id)arg8;

@end
