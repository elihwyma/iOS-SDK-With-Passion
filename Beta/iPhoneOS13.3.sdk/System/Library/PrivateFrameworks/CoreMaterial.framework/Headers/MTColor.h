/*
 Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

#import <Foundation/NSObject.h>

@interface MTColor : NSObject

{
    struct CGColor *_cachedColor;
}

+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)pinkColor;
+ (id)colorWithDescription:(id)arg1;

- (void)dealloc;
- (struct CGColor *)CGColor;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)_rgbColor;
- (id)_initWithCGColor:(struct CGColor *)arg1;
- (id)_initWithDescription:(id)arg1;
- (id)colorDescription;
- (id)colorWithAdditionalAlphaComponent:(double)arg1;
- (id)colorBlendedWithColor:(id)arg1;
- (struct CAColorMatrix)sourceOverColorMatrix;

@end
