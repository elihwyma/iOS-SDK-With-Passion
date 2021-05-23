/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSMutableSet, SBFluidSwitcherAnimationSettings;

@protocol SBHomeScreenBackdropViewBaseDelegate;

@interface SBHomeScreenBackdropViewBase : UIView

{
    NSMutableSet *_backdropViewRequiringReasons;
    NSMutableSet *_liveBackdropViewRequiringReasons;
    SBFluidSwitcherAnimationSettings *_animationSettings;
    id <SBHomeScreenBackdropViewBaseDelegate> _delegate;
}

@property (weak, nonatomic) id <SBHomeScreenBackdropViewBaseDelegate> delegate;

- (_Bool)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setBlurProgress:(double)arg1 behaviorMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginRequiringBackdropViewForReason:(id)arg1;
- (void)beginRequiringLiveBackdropViewForReason:(id)arg1;
- (void)endRequiringBackdropViewForReason:(id)arg1;
- (void)endRequiringLiveBackdropViewForReason:(id)arg1;
- (void)cancelInProcessAnimations;
- (_Bool)requiresBackdropView;
- (_Bool)requiresLiveBackdropView;
- (id)backdropBlurSettings;

@end
