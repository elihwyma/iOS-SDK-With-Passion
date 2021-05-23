/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectVibrantColorMatrixImpl : _UIVibrancyEffectImpl

{
    long long _systemName;
    struct CAColorMatrix _lightVibrantColorMatrix;
    struct CAColorMatrix _darkVibrantColorMatrix;
    UIColor *_reducedTransperancyColor;
    double _alpha;
    _Bool _hasDarkVariant;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (id)initWithCAColorMatrix:(struct CAColorMatrix)arg1 alpha:(double)arg2;
- (id)initWithSystemName:(long long)arg1;
- (id)implementationReplacingTintColor:(id)arg1;
- (id)initWithLightCAColorMatrix:(struct CAColorMatrix)arg1 darkCAColorMatrix:(struct CAColorMatrix)arg2 alpha:(double)arg3;

@end
