/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigMetadataObjectCaptureConnectionConfiguration, FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedVideoDataSinkConfiguration : NSObject

{
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
    FigMetadataObjectCaptureConnectionConfiguration *_metadataObjectConnectionConfiguration;
}

@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;
@property (nonatomic, readonly) FigMetadataObjectCaptureConnectionConfiguration *metadataObjectConnectionConfiguration;

- (void)dealloc;
- (id)initWithVideoDataConnectionConfiguration:(id)arg1 metadataObjectConnectionConfiguration:(id)arg2;

@end
