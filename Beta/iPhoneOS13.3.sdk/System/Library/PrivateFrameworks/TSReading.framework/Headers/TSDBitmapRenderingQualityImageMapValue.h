/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDBitmapRenderingQualityImageMapValue : NSObject

{
    struct CGSize mMaxSize;
    struct CGImage *mDegradedImageRef;
}

- (void)dealloc;
- (void)addSize:(struct CGSize)arg1;
- (struct CGImage *)degradedImageRefForForProvider:(id)arg1 quality:(int)arg2 canvasScale:(float)arg3;

@end
