/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <UIKit/UIViewController.h>

@class NSString, NSTimer, PNPChargingStatusView, PNPDeviceState, PNPPairingView, PNPPencilHorizontalPresentationContainerView, PNPPencilView, PNPPlatterContainerView, PNPPlatterTransitioningDelegate, UIAlertController, UIPanGestureRecognizer;

@protocol PNPPairingViewControllerDelegate, PNPPlatterViewControllerPlatterDelegate, PNPViewControllerAppearanceDelegate;

@interface PNPPairingViewController : UIViewController

{
    PNPPlatterContainerView *_wizardPlatterContainerView;
    PNPPairingView *_pairingView;
    PNPChargingStatusView *_pairingChargingStatusView;
    PNPPlatterContainerView *_horizontalPencilPlatterContainerView;
    PNPPencilHorizontalPresentationContainerView *_horizontalPresentationPencilContainerView;
    PNPPencilView *_horizontalPencilView;
    PNPChargingStatusView *_horizontalChargingStatusView;
    _Bool _showingChargingUI;
    PNPPlatterTransitioningDelegate *_platterTransitioningDelegate;
    _Bool _inWizard;
    UIAlertController *_alertVC;
    NSTimer *_initialTimer;
    double _spinnerElapsedTime;
    NSTimer *_timeoutTimer;
    PNPDeviceState *_deviceState;
    _Bool _viewDidAppearCalled;
    _Bool _viewRequestsDismissCalled;
    UIPanGestureRecognizer *_panGestureRecognizer;
    struct CGPoint _animationTranslation;
    id <PNPPlatterViewControllerPlatterDelegate> platterDelegate;
    id <PNPViewControllerAppearanceDelegate> appearanceDelegate;
    id <PNPPairingViewControllerDelegate> _delegate;
    long long _pairingViewControllerState;
}

@property (nonatomic) long long pairingViewControllerState;
@property (weak, nonatomic) id <PNPPairingViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long preferredEdge;
@property (weak, nonatomic) id <PNPPlatterViewControllerPlatterDelegate> platterDelegate;
@property (nonatomic, readonly) double preferredCornerRadius;
@property (copy, nonatomic) PNPDeviceState *deviceState;
@property (weak, nonatomic) id <PNPViewControllerAppearanceDelegate> appearanceDelegate;

- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_updatePreferredContentSize;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)_handlePanGesture:(id)arg1;
- (void)_orientationChanged:(double)arg1;
- (void)_cancelTimeoutTimer;
- (long long)_dimmingState;
- (void)didCompleteOneRevolution;
- (void)_performAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didTapOnConnectButton;
- (void)_offsetContainerViewsIfNecessary;
- (unsigned long long)_edgeToStickToPort;
- (void)_chargingStatusViewSetNeedsLayout;
- (id)_currentPlatterContainerView;
- (void)_updatePlatterContainerView:(id)arg1 toPreferredCornerRadius:(double)arg2 edge:(unsigned long long)arg3;
- (void)_wizardViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_chargingUIViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_spinningPencilViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateSubviewDeviceStateForContainerView:(id)arg1;
- (void)_updateForSize:(struct CGSize)arg1;
- (void)_startConnectingUITimer;
- (void)_showConnectingAnimationUI;
- (void)_centerContainerViews;
- (void)_transitionToWizardBySlideOutAndPresent;
- (void)_transitionPairingViewToWizardByMovingPlatter;
- (void)_actuallyTransitionToChargingBySlideOutAndPresent;
- (void)_actuallyTransitionToChargingByMovingPlatter;
- (void)_chargingStatusViewSetIsTransitioningToBatteryUI:(_Bool)arg1;
- (void)_chargingStatusViewUpdateConstraints;
- (void)viewRequestsDismiss:(id)arg1;
- (void)_chargingStatusViewHostsSetupChargingViews;
- (void)_chargingStatusViewHostsSetShowsChargingStatusView:(_Bool)arg1;
- (void)_chargingStatusViewHostsLayoutIfNeeded;
- (void)_chargingStatusViewSetShowCharging:(_Bool)arg1;
- (void)_chargingStatusViewSetChargingState:(long long)arg1;
- (void)_dismissChargingAndPresentSpinningPencilWithDimmingState:(long long)arg1;
- (void)_morphToSpinningPencilWithDimmingState:(long long)arg1;
- (void)_chargingStatusViewHostsTeardownChargingViews;
- (void)_hideOrShowAllContainerViewsIfNeeded;
- (void)_actuallyTransitionToWizard;
- (void)_actuallyTransitionToCharging;
- (void)_transitionToChargingFromSpinner;
- (void)_chargingStatusViewSetDeviceState:(id)arg1;
- (void)_hideOrShowContainerViewIfNeeded:(id)arg1;
- (void)_chargingStatusViewLayoutIfNeeded;
- (void)pairingFailed;
- (void)_updatePillUIAnimated:(_Bool)arg1;
- (void)_resetTimeoutTimer;
- (void)pairingStartedWithDimmingState:(long long)arg1;
- (void)didTapOnCancelButton;
- (void)_actuallyTransitionToSpinningPlatterWithDimmingState:(long long)arg1;
- (void)_transitionToWizard;
- (void)_resetTimerForWizard;
- (void)_transitionToChargingFrom:(long long)arg1;
- (double)_translationAmountForDismiss;
- (void)_updateAnimationTranslation;
- (void)intrinsicContentSizeDidChangeForView:(id)arg1;
- (id)_effectivePencilView;
- (void)showPairingPrompt;
- (void)showGenericBatteryUI;
- (void)pairingStarted;
- (void)showPairingPromptAlert;
- (void)pairingStartedWithDimming:(_Bool)arg1;
- (void)pairingSucceeded;
- (void)pairingSucceededSubsequently;

@end
