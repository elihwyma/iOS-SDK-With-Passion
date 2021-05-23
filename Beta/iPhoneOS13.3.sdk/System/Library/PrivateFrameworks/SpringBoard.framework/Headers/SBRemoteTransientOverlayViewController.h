/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransientOverlayViewController.h>

@class BSAnimationSettings, NSString, SBIdleTimerCoordinatorHelper, SBRemoteTransientOverlayHostViewController, SBTransientOverlayWallpaperEffectView, UIView;

@protocol SBRemoteTransientOverlayViewControllerDelegate;

@interface SBRemoteTransientOverlayViewController : SBTransientOverlayViewController

{
    SBRemoteTransientOverlayHostViewController *_contentViewController;
    UIView *_contentViewWrapperView;
    SBIdleTimerCoordinatorHelper *_idleTimerCoordinatorHelper;
    _Bool _isPresented;
    long long _lastWallpaperStyle;
    BSAnimationSettings *_pendingAnimationSettings;
    long long _wallpaperEffectAnimations;
    SBTransientOverlayWallpaperEffectView *_wallpaperEffectView;
    long long _preferredDismissalAnimationStyle;
    id <SBRemoteTransientOverlayViewControllerDelegate> _delegate;
    long long _wallpaperVariant;
}

@property (nonatomic, readonly, getter=isActivatingForSiri) _Bool activatingForSiri;
@property (nonatomic, readonly) _Bool isScreenshotMarkup;
@property (nonatomic, readonly) _Bool shouldInvalidateWhenDeactivated;
@property (nonatomic, readonly, getter=isSwitcherEligible) _Bool switcherEligible;
@property (nonatomic, readonly) long long preferredDismissalAnimationStyle;
@property (weak, nonatomic) id <SBRemoteTransientOverlayViewControllerDelegate> delegate;
@property (nonatomic) long long wallpaperVariant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)requestViewControllerForAlertDefinition:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (_Bool)becomeFirstResponder;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)resignFirstResponder;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isContentOpaque;
- (_Bool)canResignFirstResponder;
- (int)_preferredStatusBarVisibility;
- (long long)preferredStatusBarStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (int)serviceProcessIdentifier;
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleDoubleHeightStatusBarTap;
- (void)didInvalidate;
- (void)setContainerOrientation:(long long)arg1;
- (_Bool)handleHomeButtonPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (long long)preferredUnlockedGestureDismissalStyle;
- (void)beginIgnoringAppearanceUpdates;
- (void)beginIgnoringContentOverlayInsetUpdates;
- (void)endIgnoringAppearanceUpdates;
- (void)endIgnoringContentOverlayInsetUpdates;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (_Bool)shouldDisableBanners;
- (_Bool)shouldDisableControlCenter;
- (_Bool)shouldDisableSiri;
- (_Bool)shouldPendAlertItems;
- (void)setIdleTimerCoordinator:(id)arg1;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (id)idleTimerProvider:(id)arg1 didProposeBehavior:(id)arg2 forReason:(id)arg3;
- (_Bool)hasServiceProcessIdentifier:(int)arg1;
- (void)preserveInputViewsAnimated:(_Bool)arg1;
- (void)restoreInputViewsAnimated:(_Bool)arg1;
- (void)handlePictureInPictureDidBegin;
- (id)_initWithContentViewController:(id)arg1;
- (void)_configureWallpaperEffectViewWithAnimationSettings:(id)arg1;
- (_Bool)allowsStackingOverlayContentAbove;
- (long long)preferredLockedGestureDismissalStyle;
- (id)preferredSceneDeactivationReasonValue;
- (_Bool)_needsWallpaperEffectView;
- (int)preferredStatusBarStyleOverridesToCancel;
- (id)preferredStatusBarLegibilitySettings;
- (_Bool)shouldDisableReachability;
- (_Bool)shouldDisableOrientationUpdates;
- (_Bool)shouldDisableInteractiveScreenshotGesture;
- (void)remoteTransientOverlayHostViewControllerDidChangeContentOpaque:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeGestureDismissalStyles:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeFeaturePolicy:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangePreferredSceneDeactivationReasonValue:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerDidChangeShouldDisableOrientationUpdates:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerRequestsDeactivation:(id)arg1;
- (void)remoteTransientOverlayHostViewControllerRequestsInvalidation:(id)arg1;
- (void)remoteTransientOverlayHostViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteTransientOverlayHostViewController:(id)arg1 requestsWallpaperEffectUpdateWithAnimationSettings:(id)arg2;
- (long long)defaultPreferredInterfaceOrientationForPresentationForRemoteTransientOverlayHostViewController:(id)arg1;
- (id)remoteTransientOverlayHostViewController:(id)arg1 requestsActionForHandlingButtonEvents:(unsigned long long)arg2;
- (id)serviceEventDeferringToken;
- (int)pictureInPictureProcessIdentifier;
- (id)preferredDisplayLayoutElementIdentifier;
- (_Bool)prefersStatusBarActivityItemVisible;
- (id)representedDisplayItem;

@end
