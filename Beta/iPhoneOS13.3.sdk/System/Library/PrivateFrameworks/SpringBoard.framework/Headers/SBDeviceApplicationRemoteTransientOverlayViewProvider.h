/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDeviceApplicationSceneOverlayViewProvider.h>

@class NSMapTable, NSMutableArray, NSString, SBDeviceApplicationRemoteTransientOverlayContainerViewController;

@interface SBDeviceApplicationRemoteTransientOverlayViewProvider : SBDeviceApplicationSceneOverlayViewProvider

{
    NSMutableArray *_activePresentationContexts;
    SBDeviceApplicationRemoteTransientOverlayContainerViewController *_containerVC;
    NSMapTable *_keyboardFocusRedirectionsByRemoteVC;
    _Bool _needsDeactivationWithNoActiveTransientOverlays;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)isPresentingTransientOverlay:(id)arg1;
- (void)dismissRemoteTransientOverlayViewController:(id)arg1;
- (void)presentRemoteTransientOverlayViewController:(id)arg1 presentationTarget:(id)arg2;
- (id)initWithSceneHandle:(id)arg1 delegate:(id)arg2;
- (void)_activateIfPossible;
- (void)_deactivateIfPossible;
- (id)_realOverlayViewController;
- (_Bool)shouldFollowSceneOrientation;
- (unsigned long long)defaultSupportedInterfaceOrientationsForTransientOverlayViewController:(id)arg1;
- (long long)defaultPreferredInterfaceOrientationForPresentationForTransientOverlayViewController:(id)arg1;
- (_Bool)defaultShouldAutorotateForTransientOverlayViewController:(id)arg1;
- (void)transientOverlayViewControllerNeedsContentOpaqueUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsFeaturePolicyUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsGestureDismissalStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsOrientationUpdatesDisabledUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsProximityDetectionUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsSceneDeactivationUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsStatusBarAppearanceUpdate:(id)arg1;
- (void)transientOverlayViewControllerNeedsWhitePointAdaptivityStyleUpdate:(id)arg1;
- (void)transientOverlayViewControllerWillBeginRotation:(id)arg1 toInterfaceOrientation:(long long)arg2;
- (void)transientOverlayViewControllerDidEndRotation:(id)arg1;
- (void)_handleCoverSheetDidPresent:(id)arg1;
- (void)_handleAppSwitcherWillPresent:(id)arg1;
- (void)_dismissRemoteOverlayVC:(id)arg1;

@end
