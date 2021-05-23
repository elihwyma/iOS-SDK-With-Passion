/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration, NSArray;

@interface FigCaptureSessionParsedMetadataSinkConfiguration : NSObject

{
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_sceneClassifierConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoPreviewSinkConnectionConfiguration;
    NSArray *_movieFileDetectedObjectMetadataConnectionConfigurations;
}

@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *sceneClassifierConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoPreviewSinkConnectionConfiguration;
@property (nonatomic, readonly) NSArray *movieFileDetectedObjectMetadataConnectionConfigurations;

- (void)dealloc;
- (id)initWithMetadataObjectConnectionConfiguration:(id)arg1 sceneClassifierConnectionConfiguration:(id)arg2 videoDataConnectionConfiguration:(id)arg3 videoPreviewSinkConnectionConfiguration:(id)arg4 movieFileDetectedObjectMetadataConnectionConfigurations:(id)arg5;

@end
