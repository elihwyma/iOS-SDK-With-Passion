/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBAppStatusBarSettingsAssertion, SBDeviceApplicationSceneStatusBarStateProvider, SBScrollToTopSceneProxyView, UIGestureRecognizer, UIView, _UILegibilitySettings;

@protocol SPUIRemoteSearchViewDelegate;

@interface SBSpotlightMultiplexingViewController : UIViewController <Swift>

{
    _Bool _reachabilityEnabled;
    UIView *_reachabilityContainerView;
    UIGestureRecognizer *_dismissReachabilityGesture;
    SBDeviceApplicationSceneStatusBarStateProvider *_statusBarStateProvider;
    SBAppStatusBarSettingsAssertion *_statusBarAssertion;
    SBScrollToTopSceneProxyView *_scrollToTopView;
    _Bool _activeDelegate;
    _UILegibilitySettings *_legibilitySettings;
    unsigned long long _searchViewPresentationSourceForNextTransition;
    id <SPUIRemoteSearchViewDelegate> _spotlightDelegate;
}

@property (nonatomic, getter=isActiveDelegate) _Bool activeDelegate;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) unsigned long long searchViewPresentationSourceForNextTransition;
@property (nonatomic, readonly) unsigned long long level;
@property (weak, nonatomic) id <SPUIRemoteSearchViewDelegate> spotlightDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedRemoteSearchViewController;

- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)sceneManager:(id)arg1 didCreateScene:(id)arg2;
- (void)sceneManager:(id)arg1 didDestroyScene:(id)arg2;
- (void)dismissSearchView;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(_Bool)arg2 withAnimation:(long long)arg3;
- (void)scrollToTopSceneProxyViewWillExitViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2;
- (void)scrollToTopSceneProxyViewDidEnterViewHierarchy:(id)arg1 rootedAtWindow:(id)arg2;
- (unsigned long long)remoteSearchViewPresentationSource;
- (void)didBecomeActiveDelegate;
- (void)didResignActiveDelegate;
- (void)_acquireStatusBarAssertionIfNeeded;
- (void)_registerStatusBarScrollToTopView;
- (void)_invalidateStatusBarAssertionIfNeeded;
- (void)_unregisterStatusBarScrollToTopView;
- (void)_configureStatusBarStateProvider;
- (void)_configureStatusBarScrollToTopView;
- (id)_spotlightSceneIdentifier;
- (id)_currentStatusBarSettings;
- (void)_registerStatusBarScrollToTopViewWithWindow:(id)arg1;
- (void)_unregisterStatusBarScrollToTopViewWithWindow:(id)arg1;
- (double)_effectiveStatusBarAlpha;

@end
