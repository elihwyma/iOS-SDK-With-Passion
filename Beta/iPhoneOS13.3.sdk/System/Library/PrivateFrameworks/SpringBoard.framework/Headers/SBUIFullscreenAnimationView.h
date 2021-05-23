/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@protocol SBUIFullscreenAnimationViewDelegate;

@interface SBUIFullscreenAnimationView : UIView

{
    id <SBUIFullscreenAnimationViewDelegate> _delegate;
    _Bool _animating;
}

@property (weak, nonatomic) id <SBUIFullscreenAnimationViewDelegate> delegate;
@property (nonatomic, readonly) _Bool animating;

- (void)beginTransition;
- (void)endTransition;
- (void)setToView:(id)arg1;
- (void)setFromView:(id)arg1;
- (void)_animationEnded;
- (void)_animationBegan;
- (void)_notifyDelegateAnimationBeganWithDuration:(double)arg1 delay:(double)arg2;
- (void)_notifyDelegateThatAnimationIsDone;

@end
