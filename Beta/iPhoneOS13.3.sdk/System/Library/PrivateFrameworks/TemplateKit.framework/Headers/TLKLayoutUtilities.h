/*
 Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

#import <Foundation/NSObject.h>

@interface TLKLayoutUtilities : NSObject

+ (void)requireIntrinsicSizeForView:(id)arg1;
+ (_Bool)isWideScreen;
+ (_Bool)isSuperLargeAccessibilitySize;
+ (double)deviceScaledRoundedValue:(double)arg1;
+ (struct CGSize)idealImageSizeWithSize:(struct CGSize)arg1 fittingSize:(struct CGSize)arg2;
+ (void)setDynamicBaselineAlignmentsForLabel:(id)arg1 top:(double)arg2 bottom:(double)arg3;
+ (double)scaledValueForValue:(double)arg1 withFont:(id)arg2;
+ (void)requireIntrinsicSizeForView:(id)arg1 withPriority:(float)arg2;
+ (double)bestScaleForView:(id)arg1;
+ (struct CGSize)maxThumbnailSize;
+ (double)ceilingValue:(double)arg1 inView:(id)arg2;
+ (double)flooredValue:(double)arg1 inView:(id)arg2;
+ (double)roundedValue:(double)arg1 inView:(id)arg2;
+ (struct CGRect)deviceScaledRoundedRect:(struct CGRect)arg1;
+ (double)deviceScaledFlooredValue:(double)arg1;
+ (void)applyRowBoundedSizingToImageView:(id)arg1;

@end
