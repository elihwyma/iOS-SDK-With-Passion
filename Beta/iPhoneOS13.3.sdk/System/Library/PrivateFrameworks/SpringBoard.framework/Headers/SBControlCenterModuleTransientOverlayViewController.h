/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransientOverlayViewController.h>

@class CCSModulePresentationOptions, CCUIModuleAlertViewController, NSString;

@protocol SBControlCenterModuleTransientOverlayViewControllerDelegate;

@interface SBControlCenterModuleTransientOverlayViewController : SBTransientOverlayViewController

{
    CCUIModuleAlertViewController *_moduleOverlayViewController;
    id <SBControlCenterModuleTransientOverlayViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBControlCenterModuleTransientOverlayViewControllerDelegate> delegate;
@property (copy, nonatomic, readonly) CCSModulePresentationOptions *presentationOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)_dismiss;
- (_Bool)_shouldBlurBackground;
- (_Bool)handleHomeButtonPress;
- (void)contentModuleAlertViewControllerNeedsDismissal:(id)arg1;
- (id)initWithModuleIdentifier:(id)arg1 presentationOptions:(id)arg2;
- (long long)preferredUnlockedGestureDismissalStyle;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (_Bool)shouldDisableControlCenter;
- (long long)preferredLockedGestureDismissalStyle;
- (_Bool)shouldDisableOrientationUpdates;
- (void)_animateTransitionFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 isAnimated:(_Bool)arg4 otherAnimations:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;

@end
