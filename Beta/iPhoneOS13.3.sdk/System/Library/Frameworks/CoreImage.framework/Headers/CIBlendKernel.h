/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <CoreImage/CIColorKernel.h>

@interface CIBlendKernel : CIColorKernel

+ (id)clear;
+ (id)source;
+ (id)kernelWithString:(id)arg1;
+ (id)kernelWithString:(id)arg1 extentType:(int)arg2;
+ (id)componentAdd;
+ (id)componentMultiply;
+ (id)componentMin;
+ (id)componentMax;
+ (id)destination;
+ (id)sourceOver;
+ (id)destinationOver;
+ (id)sourceIn;
+ (id)destinationIn;
+ (id)sourceOut;
+ (id)destinationOut;
+ (id)sourceAtop;
+ (id)destinationAtop;
+ (id)exclusiveOr;
+ (id)multiply;
+ (id)screen;
+ (id)overlay;
+ (id)darken;
+ (id)lighten;
+ (id)colorDodge;
+ (id)colorBurn;
+ (id)hardLight;
+ (id)softLight;
+ (id)difference;
+ (id)exclusion;
+ (id)hue;
+ (id)saturation;
+ (id)color;
+ (id)luminosity;
+ (id)subtract;
+ (id)divide;
+ (id)linearBurn;
+ (id)linearDodge;
+ (id)vividLight;
+ (id)linearLight;
+ (id)pinLight;
+ (id)hardMix;
+ (id)darkerColor;
+ (id)lighterColor;
+ (id)plusDarker;
+ (id)plusLighter;

- (id)initWithString:(id)arg1;
- (void)setIsForeIfBackIsClear:(_Bool)arg1;
- (void)setIsClearIfForeIsClear:(_Bool)arg1;
- (void)setIsClearIfBackIsClear:(_Bool)arg1;
- (void)setIsBackIfForeIsClear:(_Bool)arg1;
- (id)applyWithForeground:(id)arg1 background:(id)arg2;
- (id)initWithString:(id)arg1 extentType:(int)arg2;
- (_Bool)getBlendBehaviorBit:(int)arg1;
- (void)setBlendBehaviorBit:(int)arg1 value:(_Bool)arg2;
- (_Bool)isBackIfForeIsClear;
- (_Bool)isForeIfBackIsClear;
- (_Bool)isClearIfForeIsClear;
- (_Bool)isClearIfBackIsClear;
- (id)applyWithForeground:(id)arg1 background:(id)arg2 colorSpace:(struct CGColorSpace *)arg3;

@end
