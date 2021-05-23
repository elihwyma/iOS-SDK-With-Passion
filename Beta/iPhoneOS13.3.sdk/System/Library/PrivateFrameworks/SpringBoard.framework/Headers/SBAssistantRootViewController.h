/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class NSString, SBFHomeGrabberSettings, SBFluidDismissalState, SBHomeGrabberView, SBKeyboardHomeAffordanceAssertion, SiriPresentationSpringBoardMainScreenViewController, UIScreen, UIView;

@interface SBAssistantRootViewController : UIViewController

{
    SiriPresentationSpringBoardMainScreenViewController *_assistantViewController;
    UIView *_contentView;
    UIView *_clippingView;
    SBFluidDismissalState *_fluidDismissalState;
    UIScreen *_screen;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    SBFHomeGrabberSettings *_grabberSettings;
    _Bool _keyboardPresented;
    _Bool _keyboardStashed;
    _Bool _ownsHomeGesture;
    SBHomeGrabberView *_homeAffordanceView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SBFluidDismissalState *fluidDismissalState;
@property (retain, nonatomic) UIScreen *screen;
@property (retain, nonatomic) SBHomeGrabberView *homeAffordanceView;
@property (nonatomic, readonly) UIView *clippingView;
@property (nonatomic, readonly) UIView *contentView;
@property (retain, nonatomic) SiriPresentationSpringBoardMainScreenViewController *assistantController;
@property (nonatomic) _Bool ownsHomeGesture;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (_Bool)shouldAutomaticallyForwardRotationMethods;
- (_Bool)wantsFullScreenLayout;
- (id)initWithScreen:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_updateHomeAffordance;
- (void)_updateKeyboardForHomeGesture;

@end
