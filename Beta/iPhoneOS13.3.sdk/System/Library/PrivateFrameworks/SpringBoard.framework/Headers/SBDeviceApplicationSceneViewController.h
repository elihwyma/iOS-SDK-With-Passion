/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBApplicationSceneViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class MTLumaDodgePillSettings, NSHashTable, NSMutableArray, NSString, SBDeviceApplicationSceneView, SBFHomeGrabberSettings, SBHomeGrabberView, SBSceneHandle, SBSceneViewStatusBarAssertion, UIApplicationSceneDeactivationAssertion, UIStatusBar, UIView;

@protocol BSInvalidatable, SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBDeviceApplicationSceneViewController : SBApplicationSceneViewController <Swift>

{
    UIApplicationSceneDeactivationAssertion *_resignActiveAssertion;
    NSMutableArray *_overlayViewProviders;
    NSMutableArray *_activeOverlayViewProviders;
    SBSceneViewStatusBarAssertion *_activeOverlayStatusBarAssertion;
    SBSceneViewStatusBarAssertion *_placeholderStatusBarAssertion;
    UIStatusBar *_fakeStatusBar;
    id <BSInvalidatable> _liveContentDisableAssertion;
    SBFHomeGrabberSettings *_homeGrabberSettings;
    _Bool _rendersWhileLocked;
    _Bool _shouldRasterizeSceneHostView;
    NSHashTable *_statusBarAssertions;
    NSString *_sceneHostViewMinificationFilter;
    long long _homeGrabberDisplayMode;
    MTLumaDodgePillSettings *_homeGrabberPillSettings;
}

@property (nonatomic, readonly, getter=_sceneView) SBDeviceApplicationSceneView *sceneView;
@property (nonatomic) long long homeGrabberDisplayMode;
@property (retain, nonatomic) MTLumaDodgePillSettings *homeGrabberPillSettings;
@property (retain, nonatomic, getter=_statusBarAssertions, setter=_setStatusBarAssertions:) NSHashTable *statusBarAssertions;
@property (nonatomic) _Bool rendersWhileLocked;
@property (nonatomic) _Bool shouldRasterizeSceneHostView;
@property (copy, nonatomic) NSString *sceneHostViewMinificationFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SBSceneHandle *sceneHandle;
@property (nonatomic, readonly) long long displayMode;
@property (retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property (retain, nonatomic) UIView *customContentView;
@property (nonatomic, readonly) struct CGSize contentReferenceSize;
@property (nonatomic, readonly) long long contentInterfaceOrientation;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly) long long overrideStatusBarStyle;
@property (weak, nonatomic) id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property (nonatomic, readonly) SBHomeGrabberView *homeGrabberView;

- (void)dealloc;
- (void)invalidate;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (_Bool)definesPresentationContext;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)sceneView:(id)arg1 changedPreferredStatusBarStyleTo:(long long)arg2;
- (id)animationFactoryForImplicitTransitionFromMode:(long long)arg1 toMode:(long long)arg2 defaultFactory:(id)arg3;
- (void)_removeFakeStatusBar;
- (void)_layoutFakeStatusBar;
- (void)sceneHandle:(id)arg1 didChangeStatusBarParts:(long long)arg2;
- (void)sceneHandle:(id)arg1 didChangeStatusBarAvoidanceFrame:(struct CGRect)arg2;
- (void)statusBarAssertionDidUpdate:(id)arg1;
- (void)statusBarAssertionDidInvalidate:(id)arg1;
- (id)initWithSceneHandle:(id)arg1;
- (void)_willEnableSecureDisplay;
- (void)_didDisableSecureDisplay;
- (void)_relinquishResignActiveAssertion;
- (void)_destroySceneOverlayViewProviders;
- (void)_configureForCurrentSecureDisplayState;
- (void)_statusBarAssertionsDidUpdate;
- (_Bool)_shouldSuppressHomeGrabber;
- (void)_createSceneOverlayViewProvidersIfNecessary;
- (id)statusBarAssertionWithStatusBarSettings:(id)arg1 atLevel:(unsigned long long)arg2;
- (_Bool)_configureFakeStatusBarWithCurrentStyleRequestCreatingIfNecessary;
- (_Bool)_isApplicationStatusBarHidden;
- (void)_recalculateResignActiveAssertionForActiveOverlays;
- (void)deactivateOverlayForViewProvider:(id)arg1;
- (void)_addFakeStatusBarWithStyleRequest:(id)arg1 enabledParts:(long long)arg2;
- (void)_configureForSecureDisplay:(_Bool)arg1;
- (void)activateOverlayForViewProvider:(id)arg1;
- (_Bool)overlayViewProviderRendersWhileLocked:(id)arg1;
- (id)statusBarAssertionWithStatusBarHidden:(_Bool)arg1 atLevel:(unsigned long long)arg2;

@end
