/*
 Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AirPlayImage : NSObject

{
    struct CGSize _unadjustedSize;
    struct CGImage *_image;
    void *_ioSurface;
    int _imageOrientation;
    struct CGSize _scale;
}

@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) id layerContents;
@property (nonatomic, readonly) void *ioSurface;
@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) int imageOrientation;
@property (nonatomic) struct CGSize scale;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1 decode:(_Bool)arg2;
- (id)initWithData:(id)arg1 decode:(_Bool)arg2;
- (struct CGAffineTransform)contentsTransformForLayer:(id)arg1;
- (void)_setImageOrientation:(int)arg1;
- (void)_setIOSurface:(void *)arg1;
- (void)_setCGImage:(struct CGImage *)arg1;
- (struct CGSize)_unadjustedContentSize;

@end
