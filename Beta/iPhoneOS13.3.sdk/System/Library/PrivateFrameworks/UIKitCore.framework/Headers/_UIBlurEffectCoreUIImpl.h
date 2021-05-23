/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBlurEffectImpl.h>

#import <UIKitCore/Swift-Protocol.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface _UIBlurEffectCoreUIImpl : _UIBlurEffectImpl <Swift>

{
    long long _blurStyle;
    NSString *_materialName;
    CALayer *_activeMaterialLayer;
    CALayer *_inactiveMaterialLayer;
}

@property (nonatomic) long long blurStyle;
@property (copy, nonatomic) NSString *materialName;
@property (retain, nonatomic) CALayer *activeMaterialLayer;
@property (retain, nonatomic) CALayer *inactiveMaterialLayer;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)style;
- (_Bool)canProvideVibrancyEffect;
- (_Bool)canProvideCoreMaterialVibrancyEffect;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)requiresCopying;
- (void)appendDescriptionTo:(id)arg1;
- (id)initWithMaterial:(id)arg1 style:(long long)arg2;

@end
