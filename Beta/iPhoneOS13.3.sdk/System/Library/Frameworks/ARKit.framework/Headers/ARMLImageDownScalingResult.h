/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARMLImageDownScalingResult : NSObject

{
    struct __CVBuffer *_pixelBuffer;
    struct CGSize _regionOfInterest;
    struct CGRect _cropRegion;
}

@property (nonatomic, readonly) struct __CVBuffer *pixelBuffer;
@property (nonatomic, readonly) struct CGSize imageResolution;
@property (nonatomic, readonly) struct CGSize regionOfInterest;
@property (nonatomic, readonly) struct CGRect cropRegion;

- (void)dealloc;
- (void)setPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 regionOfInterest:(struct CGSize)arg2 cropRegion:(struct CGRect)arg3;

@end
