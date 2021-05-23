/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDSwatchRenderingResult : NSObject

{
    struct CGImage *foreground;
    struct CGImage *background;
}

@property (nonatomic, readonly) struct CGImage *foreground;
@property (nonatomic, readonly) struct CGImage *background;

+ (id)renderingResultWithForeground:(struct CGImage *)arg1 background:(struct CGImage *)arg2;

- (void)dealloc;

@end
