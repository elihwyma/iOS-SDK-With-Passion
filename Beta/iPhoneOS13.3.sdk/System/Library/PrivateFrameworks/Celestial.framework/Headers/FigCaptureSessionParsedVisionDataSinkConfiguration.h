/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigVideoCaptureConnectionConfiguration, FigVisionDataCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedVisionDataSinkConfiguration : NSObject

{
    FigVisionDataCaptureConnectionConfiguration *_visionDataConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_videoDataConnectionConfiguration;
}

@property (nonatomic, readonly) FigVisionDataCaptureConnectionConfiguration *visionDataConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *videoDataConnectionConfiguration;

- (void)dealloc;
- (id)initWithVisionDataConnectionConfiguration:(id)arg1 videoDataConnectionConfiguration:(id)arg2;

@end
