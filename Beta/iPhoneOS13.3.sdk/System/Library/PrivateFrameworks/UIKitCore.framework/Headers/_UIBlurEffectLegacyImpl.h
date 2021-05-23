/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBlurEffectImpl.h>

@class UIBlurEffect, UIColor;

__attribute__((visibility("hidden")))
@interface _UIBlurEffectLegacyImpl : _UIBlurEffectImpl

{
    long long _style;
    UIColor *_tintColor;
    _Bool _invertAutomaticStyle;
    UIBlurEffect *_effect;
}

@property (nonatomic) UIBlurEffect *effect;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (long long)style;
- (id)tintColor;
- (id)initWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(_Bool)arg3;
- (_Bool)invertAutomaticStyle;
- (_Bool)canProvideVibrancyEffect;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (void)appendDescriptionTo:(id)arg1;

@end
