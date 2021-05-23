/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernVibrancyImpl : _UIVibrancyEffectImpl

{
    NSString *_filterType;
    UIColor *_inputColor1;
    UIColor *_inputColor2;
    UIColor *_compositingColor;
    _Bool _inputReversed;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (id)initWithFilter:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 compositingColor:(id)arg4 inputReversed:(_Bool)arg5;
- (id)implementationReplacingTintColor:(id)arg1;

@end
