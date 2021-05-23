/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIVisualEffect.h>

@class UIColor;

@interface _UIWallpaperEffect : UIVisualEffect

{
    UIColor *_color;
}

+ (id)wallpaperEffectWithStyle:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (long long)_expectedUsage;
- (id)_initWithStyle:(long long)arg1;

@end
