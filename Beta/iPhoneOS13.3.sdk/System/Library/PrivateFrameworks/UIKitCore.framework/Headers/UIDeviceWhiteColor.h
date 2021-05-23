/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIColor.h>

__attribute__((visibility("hidden")))
@interface UIDeviceWhiteColor : UIColor

{
    double whiteComponent;
    double alphaComponent;
    struct CGColor *_cachedColor;
}

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)set;
- (struct CGColor *)CGColor;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;
- (id)colorWithAlphaComponent:(double)arg1;
- (void)setStroke;
- (double)alphaComponent;
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;
- (void)setFill;
- (id)colorSpaceName;
- (_Bool)_isDeepColor;
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;

@end
