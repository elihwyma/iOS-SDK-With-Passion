/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIVisualEffect.h>

@class _UICoreUIEffect;

@interface _UIBlurThroughEffect : UIVisualEffect

{
    long long _style;
    _UICoreUIEffect *_reducedTransparencyEffect;
}

+ (id)_blurThroughWithStyle:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;

@end
