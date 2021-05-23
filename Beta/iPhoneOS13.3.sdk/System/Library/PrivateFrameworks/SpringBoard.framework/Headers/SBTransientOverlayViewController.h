/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBDisplayLayoutElement, NSNumber, NSString, SBDisplayItem, SBFHomeGrabberSettings, SBHomeGrabberView, SBKeyboardHomeAffordanceAssertion, UIStatusBar, UIStatusBarStyleRequest, UIView, UIWindow, _UILegibilitySettings;

@protocol SBIdleTimerCoordinating, SBTransientOverlayViewControllerDelegate;

@interface SBTransientOverlayViewController : UIViewController <Swift>

{
    long long _appearanceUpdateIgnoreCount;
    UIView *_contentContainerView;
    long long _contentOverlayInsetUpdateIgnoreCount;
    SBHomeGrabberView *_grabberView;
    SBFHomeGrabberSettings *_grabberSettings;
    _Bool _hasPreservedInputViews;
    _Bool _isDisplayLayoutElementActive;
    SBKeyboardHomeAffordanceAssertion *_keyboardHomeAffordanceAssertion;
    UIWindow *_keyboardHomeAffordanceAssertionWindow;
    UIView *_presentationBackgroundView;
    long long _presentationPrefersHomeGrabberHidden;
    UIStatusBar *_statusBar;
    long long _keyboardVisible;
    _Bool _allowsStackingOverlayContentAbove;
    _Bool _contentOpaque;
    _Bool _prefersProximityDetectionEnabled;
    _Bool _prefersStatusBarActivityItemVisible;
    _Bool _shouldDisableBanners;
    _Bool _shouldDisableControlCenter;
    _Bool _shouldDisableReachability;
    _Bool _shouldDisableInteractiveScreenshotGesture;
    _Bool _shouldDisableSiri;
    _Bool _shouldPendAlertItems;
    _Bool _shouldDisableOrientationUpdates;
    _Bool _presentationAllowsHomeGrabberAutoHide;
    _Bool _presentationPrefersStatusBarHidden;
    int _preferredStatusBarStyleOverridesToCancel;
    int _pictureInPictureProcessIdentifier;
    UIView *_contentView;
    UIView *_backgroundView;
    _UILegibilitySettings *_preferredStatusBarLegibilitySettings;
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;
    long long _containerOrientation;
    long long _preferredLockedGestureDismissalStyle;
    long long _preferredUnlockedGestureDismissalStyle;
    SBDisplayItem *_representedDisplayItem;
    FBDisplayLayoutElement *_displayLayoutElement;
    id <SBTransientOverlayViewControllerDelegate> _transientOverlayDelegate;
    UIStatusBarStyleRequest *_currentStatusBarStyleRequest;
    double _presentationContentCornerRadius;
    double _presentationHomeGrabberAlpha;
    double _presentationHomeGrabberAdditionalEdgeSpacing;
    struct CGAffineTransform _presentationContentTransform;
}

@property (weak, nonatomic) id <SBTransientOverlayViewControllerDelegate> transientOverlayDelegate;
@property (copy, nonatomic, readonly) UIStatusBarStyleRequest *currentStatusBarStyleRequest;
@property (nonatomic, readonly) _Bool hasVisibleStatusBar;
@property (nonatomic) _Bool presentationAllowsHomeGrabberAutoHide;
@property (nonatomic) double presentationContentCornerRadius;
@property (nonatomic) struct CGAffineTransform presentationContentTransform;
@property (nonatomic) double presentationHomeGrabberAlpha;
@property (nonatomic) double presentationHomeGrabberAdditionalEdgeSpacing;
@property (nonatomic, readonly) _Bool presentationPrefersStatusBarHidden;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) _Bool allowsStackingOverlayContentAbove;
@property (copy, nonatomic, readonly) NSNumber *preferredSceneDeactivationReasonValue;
@property (copy, nonatomic, readonly) CDUnknownBlockType sceneDeactivationPredicate;
@property (nonatomic, readonly, getter=isContentOpaque) _Bool contentOpaque;
@property (nonatomic, readonly) _Bool prefersProximityDetectionEnabled;
@property (copy, nonatomic, readonly) _UILegibilitySettings *preferredStatusBarLegibilitySettings;
@property (nonatomic, readonly) int preferredStatusBarStyleOverridesToCancel;
@property (nonatomic, readonly) _Bool prefersStatusBarActivityItemVisible;
@property (nonatomic, readonly) _Bool shouldDisableBanners;
@property (nonatomic, readonly) _Bool shouldDisableControlCenter;
@property (nonatomic, readonly) _Bool shouldDisableReachability;
@property (nonatomic, readonly) _Bool shouldDisableInteractiveScreenshotGesture;
@property (nonatomic, readonly) _Bool shouldDisableSiri;
@property (nonatomic, readonly) _Bool shouldPendAlertItems;
@property (weak, nonatomic) id <SBIdleTimerCoordinating> idleTimerCoordinator;
@property (nonatomic) long long containerOrientation;
@property (nonatomic, readonly) _Bool shouldDisableOrientationUpdates;
@property (nonatomic, readonly) _Bool isIgnoringAppearanceUpdates;
@property (nonatomic, readonly) _Bool isIgnoringContentOverlayInsetUpdates;
@property (nonatomic, readonly) long long preferredLockedGestureDismissalStyle;
@property (nonatomic, readonly) long long preferredUnlockedGestureDismissalStyle;
@property (copy, nonatomic, readonly) SBDisplayItem *representedDisplayItem;
@property (copy, nonatomic, readonly) NSString *preferredDisplayLayoutElementIdentifier;
@property (retain, nonatomic) FBDisplayLayoutElement *displayLayoutElement;
@property (nonatomic, readonly) int pictureInPictureProcessIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;

- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)setNeedsStatusBarAppearanceUpdate;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)setNeedsWhitePointAdaptivityStyleUpdate;
- (void)setNeedsUpdateOfScreenEdgesDeferringSystemGestures;
- (void)setNeedsUpdateOfHomeIndicatorAutoHidden;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (_Bool)handleDoubleHeightStatusBarTap;
- (_Bool)handleHomeButtonPress;
- (_Bool)handleHomeButtonDoublePress;
- (_Bool)handleHomeButtonLongPress;
- (_Bool)handleLockButtonPress;
- (_Bool)handleVolumeUpButtonPress;
- (_Bool)handleVolumeDownButtonPress;
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;
- (void)beginIgnoringAppearanceUpdates;
- (void)beginIgnoringContentOverlayInsetUpdates;
- (void)endIgnoringAppearanceUpdates;
- (void)endIgnoringContentOverlayInsetUpdates;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;
- (void)setPresentationPrefersStatusBarHidden:(_Bool)arg1 initialStatusBarSettings:(id)arg2;
- (void)setPresentationPrefersHomeGrabberHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)preserveInputViewsAnimated:(_Bool)arg1;
- (void)restoreInputViewsAnimated:(_Bool)arg1;
- (void)handlePictureInPictureDidBegin;
- (double)additionalEdgeSpacingForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowThinStyleForHomeGrabberView:(id)arg1;
- (_Bool)shouldAllowAutoHideForHomeGrabberView:(id)arg1;
- (void)setNeedsContentOpaqueUpdate;
- (void)setNeedsGestureDismissalStyleUpdate;
- (void)setNeedsFeaturePolicyUpdate;
- (void)setNeedsSceneDeactivationUpdate;
- (void)setNeedsOrientationUpdatesDisabledUpdate;
- (void)addPresentationBackgroundView:(id)arg1;
- (void)removePresentationBackgroundView:(id)arg1;
- (void)setNeedsIdleTimerReset;
- (void)_setDisplayLayoutElementActive:(_Bool)arg1;
- (void)setNeedsProximityDetectionUpdate;
- (void)_invalidateKeyboardHomeAffordanceAssertion;
- (void)_applyStatusBarStyleRequestWithInitialStatusBarSettings:(id)arg1;
- (void)_updateGrabberViewConfiguration;
- (struct CGRect)_currentStatusBarFrameForStyle:(long long)arg1;
- (id)_newHomeGrabberViewWithFrame:(struct CGRect)arg1;
- (void)_updateGrabberViewHiddenConfigurationAnimated:(_Bool)arg1;

@end
