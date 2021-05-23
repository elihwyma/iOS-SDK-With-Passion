/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicColor.h>

__attribute__((visibility("hidden")))
@interface UIDynamicModifiedColor : UIDynamicColor

{
    UIDynamicColor *_baseColor;
    double _alphaComponent;
    long long _contrast;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)_highContrastDynamicColor;
- (id)initWithBaseColor:(id)arg1 alphaComponent:(double)arg2 contrast:(long long)arg3;
- (id)_backgroundColorIgnoringHighContrast;
- (id)_resolvedColorWithTraitCollection:(id)arg1;

@end
