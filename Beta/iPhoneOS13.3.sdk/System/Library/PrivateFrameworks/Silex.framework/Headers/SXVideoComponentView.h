/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaComponentView.h>

@class ADBannerView, NSString, SVVolumeProvider, SXAdController, SXPosterFrameView, SXVideoAnalyticsRouter, SXVideoComponentAnalyticsReporting, SXVideoPlayerViewController, SXVideoPlayerViewControllerManager;

@protocol SWReachabilityProvider, SXAppStateMonitor, SXBookmarkManager, SXResourceDataSource, SXScrollObserverManager;

@interface SXVideoComponentView : SXMediaComponentView

{
    _Bool _isReceivingViewportDynamicBoundsChanges;
    SXVideoPlayerViewController *_videoPlayerViewController;
    SXAdController *_adController;
    id <SXResourceDataSource> _resourceDataSource;
    id <SWReachabilityProvider> _reachabilityProvider;
    id <SXAppStateMonitor> _appStateMonitor;
    SXPosterFrameView *_posterFrame;
    CDUnknownBlockType _thumbnailRequestCancelHandler;
    SXVideoAnalyticsRouter *_analyticsRouter;
    SXVideoComponentAnalyticsReporting *_videoComponentAnalyticsReporter;
    id <SXScrollObserverManager> _scrollObserverManager;
    SVVolumeProvider *_volumeProvider;
    SXVideoPlayerViewControllerManager *_videoPlayerViewControllerManager;
    id <SXBookmarkManager> _bookmarkManager;
    ADBannerView *_bannerView;
    CDUnknownBlockType _presentationBlock;
}

@property (nonatomic, readonly) SXAdController *adController;
@property (nonatomic, readonly) id <SXResourceDataSource> resourceDataSource;
@property (nonatomic, readonly) id <SWReachabilityProvider> reachabilityProvider;
@property (nonatomic, readonly) id <SXAppStateMonitor> appStateMonitor;
@property (nonatomic) _Bool isReceivingViewportDynamicBoundsChanges;
@property (retain, nonatomic) SXPosterFrameView *posterFrame;
@property (retain, nonatomic) SXVideoPlayerViewController *videoPlayerViewController;
@property (copy, nonatomic) CDUnknownBlockType thumbnailRequestCancelHandler;
@property (retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter;
@property (retain, nonatomic) SXVideoComponentAnalyticsReporting *videoComponentAnalyticsReporter;
@property (nonatomic, readonly) id <SXScrollObserverManager> scrollObserverManager;
@property (nonatomic, readonly) SVVolumeProvider *volumeProvider;
@property (nonatomic, readonly) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager;
@property (nonatomic, readonly) id <SXBookmarkManager> bookmarkManager;
@property (weak, nonatomic) ADBannerView *bannerView;
@property (copy, nonatomic) CDUnknownBlockType presentationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)reachabilityChanged:(_Bool)arg1;
- (void)discardContents;
- (_Bool)canEnterFullscreen;
- (void)enterFullscreen;
- (void)viewport:(id)arg1 dynamicBoundsDidChangeFromBounds:(struct CGRect)arg2;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)viewport:(id)arg1 interfaceOrientationChangedFromOrientation:(long long)arg2;
- (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (void)renderContents;
- (_Bool)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (void)loadComponent:(id)arg1;
- (void)visibilityStateDidChangeFromState:(long long)arg1;
- (id)transitionContentView;
- (struct CGRect)transitionContentFrame;
- (void)prepareForTransitionType:(unsigned long long)arg1;
- (_Bool)usesThumbnailWithImageIdentifier:(id)arg1;
- (unsigned long long)analyticsVideoType;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 resourceDataSource:(id)arg7 reachabilityProvider:(id)arg8 adController:(id)arg9 scrollObserverManager:(id)arg10 volumeProvider:(id)arg11 videoPlayerViewControllerManager:(id)arg12 bookmarkManager:(id)arg13;
- (void)pauseMediaPlayback;
- (void)setupVideoPlayerViewController:(id)arg1;
- (void)unloadVideoPlayerIfShowingAd;
- (void)showPosterFrame;
- (void)loadPosterFrameImage;
- (void)playButtonTapped;
- (void)registerAsMediaPlaybackDelegate;
- (void)pausePrerollIfNeeded;
- (_Bool)videoPlayerIsMoreThan50PercentVisible;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;
- (void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
- (void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
- (_Bool)videoPlayerViewControllerShouldStartPlayback:(id)arg1;
- (id)videoForVideoPlayerViewController:(id)arg1;
- (id)videoAdForVideoPlayerViewController:(id)arg1;
- (CDUnknownBlockType)videoAdWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)registerForViewportDynamicBoundsChanges;
- (void)unregisterForViewportDynamicBoundsChanges;

@end
