/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIVisualEffect.h>

@class UIColor, _UIBlurEffectImpl;

@interface UIBlurEffect : UIVisualEffect

{
    _UIBlurEffectImpl *_impl;
}

@property (nonatomic, readonly) _Bool _canProvideVibrancyEffect;
@property (nonatomic, readonly) _Bool _canProvideCoreMaterialVibrancyEffect;
@property (nonatomic, readonly) long long _style;
@property (nonatomic, readonly) UIColor *_tintColor;
@property (nonatomic, readonly) _Bool _invertAutomaticStyle;

+ (_Bool)supportsSecureCoding;
+ (id)effectWithStyle:(long long)arg1;
+ (id)effectWithBlurRadius:(double)arg1;
+ (id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(_Bool)arg3;
+ (id)_effectWithTintColor:(id)arg1;
+ (id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(_Bool)arg2;
+ (id)_effectWithBlurRadius:(double)arg1 scale:(double)arg2;
+ (id)_effectForLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3;
+ (id)_effectWithInfiniteRadius;
+ (id)_effectWithInfiniteRadiusScale:(double)arg1;
+ (void)_addBlurToEffectDescriptor:(id)arg1 blurRadius:(double)arg2 scale:(double)arg3 environment:(id)arg4;
+ (id)_coreUIImplementationForStyle:(long long)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithImplementation:(id)arg1;
- (id)effectSettings;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (long long)_expectedUsage;
- (_Bool)_isATVStyle;
- (_Bool)_isAutomaticStyle;

@end
