/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBlurEffectImpl.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectModernImpl : _UIBlurEffectImpl

{
    double _blurRadius;
    double _blurScale;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBlurRadius:(double)arg1 scale:(double)arg2;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;

@end
