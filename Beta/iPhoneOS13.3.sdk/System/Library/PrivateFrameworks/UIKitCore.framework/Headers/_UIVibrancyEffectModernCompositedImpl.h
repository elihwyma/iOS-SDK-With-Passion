/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernCompositedImpl : _UIVibrancyEffectImpl

{
    long long _compositingMode;
    NSString *_filterType;
    UIColor *_compositingColor;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (id)initWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;
- (id)implementationReplacingTintColor:(id)arg1;

@end
