/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIColor.h>

__attribute__((visibility("hidden")))
@interface UIDynamicColor : UIColor

- (void)set;
- (struct CGColor *)CGColor;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)setStroke;
- (double)alphaComponent;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (id)resolvedColorWithTraitCollection:(id)arg1;
- (void)setFill;
- (id)colorSpaceName;
- (_Bool)_isDeepColor;
- (_Bool)isPatternColor;
- (_Bool)_isDynamic;
- (id)_highContrastDynamicColor;
- (id)_backgroundColorIgnoringHighContrast;
- (id)_resolvedColorWithTraitCollection:(id)arg1;

@end
