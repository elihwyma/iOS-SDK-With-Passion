/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectCoreMaterialImpl : _UIVibrancyEffectImpl

{
    long long _blurStyle;
    long long _vibrancyStyle;
    NSString *_lightMaterial;
    NSString *_darkMaterial;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (long long)style;
- (_Bool)invertAutomaticStyle;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (id)initWithStyle:(long long)arg1 vibrancyStyle:(long long)arg2;
- (id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 vibrancyStyle:(long long)arg3;
- (long long)vibrancyStyle;

@end
