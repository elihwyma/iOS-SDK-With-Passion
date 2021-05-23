/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIBlurEffectImpl.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectAverageImpl : _UIBlurEffectImpl

{
    double _scale;
}

+ (id)sharedInstance;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithScale:(double)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;

@end
