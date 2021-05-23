/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIVisualEffect.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICompoundEffect : UIVisualEffect

{
    NSArray *_effects;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (long long)_expectedUsage;
- (id)initWithEffects:(id)arg1;
- (id)_allEffects;
- (void)_enumerateEffects:(CDUnknownBlockType)arg1;

@end
