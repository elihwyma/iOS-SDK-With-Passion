/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class FigVideoCaptureConnectionConfiguration;

@interface FigCaptureSessionParsedStillImageSinkConfiguration : NSObject

{
    FigVideoCaptureConnectionConfiguration *_stillImageConnectionConfiguration;
    FigVideoCaptureConnectionConfiguration *_movieFileVideoConnectionConfiguration;
}

@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *stillImageConnectionConfiguration;
@property (nonatomic, readonly) FigVideoCaptureConnectionConfiguration *movieFileVideoConnectionConfiguration;

- (void)dealloc;
- (id)initWithStillImageConnectionConfiguration:(id)arg1 movieFileVideoConnectionConfiguration:(id)arg2;

@end
