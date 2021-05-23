/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIViewDeferredAnimation.h>

@class _UIViewAnimationFrame;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredBasicAnimation : _UIViewDeferredAnimation

{
    _UIViewAnimationFrame *_finalValue;
}

- (_Bool)isEmpty;
- (void)animateFrameAtIndex:(long long)arg1 animations:(CDUnknownBlockType)arg2;
- (void)addAnimationFrameForValue:(id)arg1;
- (id)_animationFrames;
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;

@end
