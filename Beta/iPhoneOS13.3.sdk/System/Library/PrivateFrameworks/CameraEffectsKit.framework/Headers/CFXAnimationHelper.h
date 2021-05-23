/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@interface CFXAnimationHelper : NSObject

+ (void)animateLayer:(id)arg1 forButtonHighlighted:(_Bool)arg2 layoutStyle:(long long)arg3;
+ (void)configurePowerSensitiveAnimation:(id)arg1;
+ (void)animateLayer:(id)arg1 toFrame:(struct CGRect)arg2 fromCurrentState:(_Bool)arg3;
+ (id)_animationWithKeyPath:(id)arg1;
+ (double)_highlightScaleForLayoutStyle:(long long)arg1;

@end
