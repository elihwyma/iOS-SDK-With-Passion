/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBDashBoardHostedAppViewController, SBHomeGestureParticipant;

@protocol BSInvalidatable, SBCoverSheetSecureAppEnvironmentViewControllerDelegate;

@interface SBCoverSheetSecureAppEnvironmentViewController : UIViewController <Swift>

{
    id <BSInvalidatable> _biometricMatchingAssertion;
    unsigned long long _currentOrientationMask;
    SBDashBoardHostedAppViewController *_secureAppViewController;
    id <SBCoverSheetSecureAppEnvironmentViewControllerDelegate> _delegate;
    SBHomeGestureParticipant *_homeGestureParticipant;
}

@property (nonatomic, readonly) SBDashBoardHostedAppViewController *secureAppViewController;
@property (weak, nonatomic) id <SBCoverSheetSecureAppEnvironmentViewControllerDelegate> delegate;
@property (retain, nonatomic) SBHomeGestureParticipant *homeGestureParticipant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool contentOccludesBackground;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (_Bool)isHostingAnApp;
- (id)hostedAppSceneHandle;
- (_Bool)canHostAnApp;
- (id)hostedAppSceneHandles;
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (_Bool)handlesRotationIndependentOfCoverSheet;
- (id)initWithSecureAppViewController:(id)arg1;
- (void)requestHomeGestureOwnership;
- (void)relinquishHomeGesture;
- (void)secureAppOfTypeDidBegin:(unsigned long long)arg1;
- (void)secureAppOfTypeDidTakeNewAssertion:(unsigned long long)arg1;
- (void)_updateSupportedOrientationsMaskForSecureAppAction;
- (void)updateHomeGrabberHiddenAssertion:(_Bool)arg1;
- (id)_currentSecureAppAction;
- (void)relinquishHiddenAssertionForHomeGrabber:(id)arg1 animated:(_Bool)arg2;
- (void)takeHiddenAssertionForHomeGrabber:(id)arg1 animated:(_Bool)arg2;

@end
