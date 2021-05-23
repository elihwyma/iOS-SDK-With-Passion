/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject

{
    TSDImageAdjustments *mImageAdjustments;
}

- (id)init;
- (void)dealloc;
- (id)initWithImageAdjustments:(id)arg1;
- (struct CGImage *)newFilteredImageForImage:(struct CGImage *)arg1 enhancedImage:(struct CGImage **)arg2;
- (struct CGImage *)p_newImageFromCIImage:(id)arg1 underlyingImage:(struct CGImage *)arg2;

@end
