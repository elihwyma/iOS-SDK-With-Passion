/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl

{
    long long _style;
    _Bool _invertAutomaticStyle;
    _Bool _ignoreSimpleVibrancy;
    UIVibrancyEffect *_effect;
}

@property (nonatomic) UIVibrancyEffect *effect;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (long long)style;
- (_Bool)invertAutomaticStyle;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (void)appendDescriptionTo:(id)arg1;
- (id)initWithStyle:(long long)arg1 invertAutomaticStyle:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 invertAutomaticStyle:(_Bool)arg2 ignoreSimpleVibrancy:(_Bool)arg3;

@end
