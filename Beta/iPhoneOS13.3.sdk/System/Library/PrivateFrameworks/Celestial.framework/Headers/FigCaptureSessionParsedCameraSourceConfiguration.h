/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigCaptureSourceConfiguration, FigDepthDataCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureSessionParsedCameraSourceConfiguration : NSObject

{
    FigCaptureSourceConfiguration *_cameraConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    NSArray *_previewDerivedVideoConnectionConfigurations;
    NSArray *_videoCaptureConnectionConfigurations;
    NSArray *_videoDataConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigDepthDataCaptureConnectionConfiguration *_depthDataConnectionConfiguration;
    NSArray *_visionDataConnectionConfigurations;
    NSArray *_metadataObjectConnectionConfigurations;
    NSArray *_movieFileDetectedObjectMetadataConnectionConfigurations;
}

@property (nonatomic, readonly) FigCaptureSourceConfiguration *cameraConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (nonatomic, readonly) NSArray *previewDerivedVideoConnectionConfigurations;
@property (nonatomic, readonly) NSArray *videoCaptureConnectionConfigurations;
@property (nonatomic, readonly) NSArray *videoDataConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) FigDepthDataCaptureConnectionConfiguration *depthDataConnectionConfiguration;
@property (nonatomic, readonly) NSArray *visionDataConnectionConfigurations;
@property (nonatomic, readonly) NSArray *metadataObjectConnectionConfigurations;
@property (nonatomic, readonly) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;

- (void)dealloc;
- (id)initWithConnectionConfigurations:(id)arg1 clientSetsUserInitiatedCaptureRequestTime:(_Bool)arg2 sceneClassifierConnectionConfigurationOut:(id *)arg3;
- (id)initWithCameraConfiguration:(id)arg1 videoPreviewSinkConnectionConfiguration:(id)arg2 previewDerivedVideoConnectionConfigurations:(id)arg3 videoCaptureConnectionConfigurations:(id)arg4 videoDataConnectionConfiguration:(id)arg5 stillImageConnectionConfiguration:(id)arg6 depthDataConnectionConfiguration:(id)arg7 visionDataConnectionConfiguration:(id)arg8 metadataObjectConnectionConfiguration:(id)arg9 movieFileDetectedObjectMetadataConnectionConfigurations:(id)arg10;

@end
