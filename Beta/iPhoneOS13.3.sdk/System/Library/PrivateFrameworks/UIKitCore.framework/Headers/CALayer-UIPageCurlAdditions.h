/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <QuartzCore/CALayer.h>

@protocol _UIVectorTextLayoutRun;

@interface CALayer (UIPageCurlAdditions)

@property (retain, nonatomic, setter=_ui_setLayoutRun:) id <_UIVectorTextLayoutRun> _ui_layoutRun;
@property (nonatomic, readonly) CALayer *_labelLayerToClipDuringBoundsSizeAnimation;

- (_Bool)uiHasFilterWithName:(id)arg1;
- (void)setPerspectiveDistance:(double)arg1;
- (void)_ui_animateKeyPath:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 usingSpringWithStiffnessFactor:(double)arg4 initialVelocity:(double)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_ui_removeAnimationForKeyPath:(id)arg1;
- (long long)compareTextEffectsOrdering:(id)arg1;
- (void)_setLabelMasksToBoundsForAnimation:(_Bool)arg1;

@end
