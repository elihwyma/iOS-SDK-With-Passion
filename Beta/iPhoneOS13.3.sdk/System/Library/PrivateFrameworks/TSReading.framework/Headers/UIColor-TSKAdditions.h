/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <UIKit/UIColor.h>

@class NSString;

@interface UIColor (TSKAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)tsk_segmentedControlTintColor;
+ (id)tsk_sheetBackgroundColor;
+ (id)colorInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)randomColor;

- (_Bool)isOpaque;
- (double)luminance;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (id)initInDeviceRGBColorSpaceWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)grayscaleColor;
- (id)invertedColor;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;

@end
