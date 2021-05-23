/*
 Image: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
 */

#import <Foundation/NSObject.h>

@class ARUICountdownTimeline, ARUICountdownView;

@protocol ARUICountdownAnimation, ARUICountdownAnimatorDelegate;

@interface ARUICountdownAnimator : NSObject

{
    struct {
        unsigned int willBeginAnimating:1;
        unsigned int willBeginAnimation:1;
        unsigned int performingAnimation:1;
        unsigned int completedAnimation:1;
        unsigned int didFinishAnimating:1;
    } _delegateFlags;
    _Bool _animating;
    _Bool _canceled;
    id <ARUICountdownAnimation> _currentAnimation;
    ARUICountdownTimeline *_timeline;
    ARUICountdownView *_countdownView;
    id <ARUICountdownAnimatorDelegate> _delegate;
}

@property (retain, nonatomic) ARUICountdownTimeline *timeline;
@property (weak, nonatomic) ARUICountdownView *countdownView;
@property (weak, nonatomic) id <ARUICountdownAnimatorDelegate> delegate;

- (_Bool)canceled;
- (_Bool)isAnimating;
- (id)initWithTimeline:(id)arg1;
- (void)prepareToAnimate;
- (void)_delegate_willBeginAnimating;
- (void)_applyAnimationAtIndex:(unsigned long long)arg1;
- (void)_delegate_didFinishAnimating;
- (void)_delegate_willBeginAnimation:(id)arg1 afterDelay:(double)arg2;
- (void)_delegate_performingAnimation:(id)arg1 withDuration:(double)arg2;
- (void)_delegate_completedAnimation:(id)arg1;
- (void)_applyCancelAnimationAtIndex:(unsigned long long)arg1;
- (void)cancelAnimations;
- (void)beginAnimations;

@end
