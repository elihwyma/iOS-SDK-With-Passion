/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@interface CIImageAccumulator : NSObject

{
    void *_state;
}

@property (readonly) struct CGRect extent;
@property (readonly) int format;

+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2 options:(id)arg3;
+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2;
+ (id)imageAccumulatorWithExtent:(struct CGRect)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)clear;
- (id)image;
- (void)setImage:(id)arg1;
- (struct CGColorSpace *)colorSpace;
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2 options:(id)arg3;
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2;
- (id)initWithExtent:(struct CGRect)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3;
- (void)setImage:(id)arg1 dirtyRect:(struct CGRect)arg2;
- (void)commitUpdates:(id)arg1;

@end
