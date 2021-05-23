/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransientOverlayViewController.h>

@class NSArray, NSString, SBVoiceControlViewController, _UIBackdropView;

@protocol SBVoiceControlTransientOverlayViewControllerDelegate;

@interface SBVoiceControlTransientOverlayViewController : SBTransientOverlayViewController

{
    _UIBackdropView *_backdropView;
    SBVoiceControlViewController *_contentViewController;
    id <SBVoiceControlTransientOverlayViewControllerDelegate> _voiceControlDelegate;
}

@property (copy, nonatomic) NSArray *nextRecognitionAudioInputPaths;
@property (nonatomic) _Bool shouldAllowSensitiveActions;
@property (nonatomic) _Bool shouldDisableHandlerActions;
@property (nonatomic) _Bool shouldDisableVoiceControlForBluetoothRequests;
@property (nonatomic, getter=isVoiceControlLoggingEnabled) _Bool voiceControlLoggingEnabled;
@property (weak, nonatomic) id <SBVoiceControlTransientOverlayViewControllerDelegate> voiceControlDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;

- (void)dealloc;
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
- (_Bool)canResignFirstResponder;
- (int)_preferredStatusBarVisibility;
- (long long)preferredStatusBarStyle;
- (long long)preferredWhitePointAdaptivityStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (id)initWithSource:(id)arg1;
- (long long)idleTimerMode;
- (void)setContainerOrientation:(long long)arg1;
- (long long)idleTimerDuration;
- (long long)idleWarnMode;
- (_Bool)handleHomeButtonPress;
- (long long)preferredUnlockedGestureDismissalStyle;
- (void)beginIgnoringAppearanceUpdates;
- (void)endIgnoringAppearanceUpdates;
- (id)newTransientOverlayDismissalTransitionCoordinator;
- (id)newTransientOverlayPresentationTransitionCoordinator;
- (long long)preferredLockedGestureDismissalStyle;
- (_Bool)shouldDisableOrientationUpdates;
- (_Bool)prefersProximityDetectionEnabled;
- (void)resetSessionWithSource:(id)arg1;
- (void)handleHeadsetButtonUpFromButtonDownSource:(_Bool)arg1;
- (void)voiceControlViewControllerPrefersProximityDetectionEnabledDidChange:(id)arg1;
- (void)voiceControlViewControllerRequestsDismissal:(id)arg1;

@end
