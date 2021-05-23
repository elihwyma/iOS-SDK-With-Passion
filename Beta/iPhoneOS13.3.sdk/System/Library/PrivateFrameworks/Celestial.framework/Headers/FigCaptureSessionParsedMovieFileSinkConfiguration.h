/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigAudioCaptureConnectionConfiguration, FigMetadataItemCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureSessionParsedMovieFileSinkConfiguration : NSObject

{
    FigVideoCaptureConnectionConfiguration *_videoConnectionConfiguration;
    FigAudioCaptureConnectionConfiguration *_audioConnectionConfiguration;
    FigMetadataItemCaptureConnectionConfiguration *_cameraDebugInfoMetadataConnectionConfiguration;
    NSArray *_detectedObjectMetadataConnectionConfigurations;
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
}

@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoConnectionConfiguration;
@property (nonatomic, readonly) FigAudioCaptureConnectionConfiguration *audioConnectionConfiguration;
@property (nonatomic, readonly) FigMetadataItemCaptureConnectionConfiguration *cameraDebugInfoMetadataConnectionConfiguration;
@property (nonatomic, readonly) NSArray *detectedObjectMetadataConnectionConfigurations;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;

- (void)dealloc;
- (id)initWithCaptureConnectionConfigurations:(id)arg1 stillImageConnectionConfiguration:(id)arg2 sceneClassifierConnectionConfigurationsBySourceID:(id)arg3;
- (id)initWithVideoConnectionConfiguration:(id)arg1 audioConnectionConfiguration:(id)arg2 cameraDebugInfoMetadataConnectionConfiguration:(id)arg3 detectedObjectMetadataConnectionConfigurations:(id)arg4 stillImageConnectionConfiguration:(id)arg5 sceneClassifierConnectionConfiguration:(id)arg6;

@end
