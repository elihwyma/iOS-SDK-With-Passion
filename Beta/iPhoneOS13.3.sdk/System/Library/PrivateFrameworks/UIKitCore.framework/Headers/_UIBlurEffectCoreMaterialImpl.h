/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBlurEffectImpl.h>

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface _UIBlurEffectCoreMaterialImpl : _UIBlurEffectImpl

{
    long long _style;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
    NSBundle *_bundle;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (long long)style;
- (id)tintColor;
- (id)initWithStyle:(long long)arg1;
- (id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3;
- (_Bool)invertAutomaticStyle;
- (_Bool)canProvideVibrancyEffect;
- (_Bool)canProvideCoreMaterialVibrancyEffect;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (id)implementationForUserInterfaceStyle:(long long)arg1;
- (void)appendDescriptionTo:(id)arg1;

@end
