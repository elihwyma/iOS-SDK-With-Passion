/*
 Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@class AVExternalPlaybackMonitor, MPAVEndpointRoute, MPAVOutputDeviceRoutingDataSource, MPAVRoutingViewController, MPMediaControlsConfiguration, MediaControlsEndpointsManager, NSString, UIViewPropertyAnimator;

@interface MediaControlsEndpointsViewController

{
    MPAVOutputDeviceRoutingDataSource *_outputDeviceRoutingDataSource;
    long long _lastSelectedModeForActivePlatterViewController;
    _Bool _didRetrieveActiveSystemRouteOnce;
    _Bool _shouldReselectActiveSystemRoute;
    _Bool _prewarming;
    _Bool _shouldTransitionToVisibleWhenReady;
    _Bool _didTransitionToVisible;
    _Bool _shouldPresentUsingViewService;
    _Bool _dismissing;
    _Bool _onScreen;
    MPMediaControlsConfiguration *_configuration;
    CDUnknownBlockType _routingCornerViewTappedBlock;
    CDUnknownBlockType _homeGestureDismissalAllowedBlock;
    MediaControlsEndpointsManager *_endpointsManager;
    MPAVRoutingViewController *_routingViewController;
    MPAVEndpointRoute *_selectedRoute;
    NSString *_routingContextUID;
    AVExternalPlaybackMonitor *_externalPlaybackMonitor;
}

@property (nonatomic, getter=isDismissing) _Bool dismissing;
@property (nonatomic, getter=isOnScreen) _Bool onScreen;
@property (retain, nonatomic) MediaControlsEndpointsManager *endpointsManager;
@property (retain, nonatomic) MPAVRoutingViewController *routingViewController;
@property (retain, nonatomic) MPAVEndpointRoute *selectedRoute;
@property (copy, nonatomic) NSString *routingContextUID;
@property (retain, nonatomic) AVExternalPlaybackMonitor *externalPlaybackMonitor;
@property (retain, nonatomic) MPMediaControlsConfiguration *configuration;
@property (copy, nonatomic) CDUnknownBlockType routingCornerViewTappedBlock;
@property (copy, nonatomic) CDUnknownBlockType homeGestureDismissalAllowedBlock;
@property (nonatomic) _Bool shouldPresentUsingViewService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) double preferredExpandedContinuousCornerRadius;
@property (nonatomic, readonly) _Bool providesOwnPlatter;
@property (nonatomic, readonly) UIViewPropertyAnimator *customAnimator;

+ (_Bool)_shouldTransitionEarlyOnSystemRoute;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)reloadData;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)endUpdates;
- (void)updateContentInsets;
- (void)setDisplayMode:(long long)arg1;
- (void)startPrewarming;
- (void)stopPrewarming;
- (void)_routeDidChangeNotification:(id)arg1;
- (_Bool)canDismissPresentedContent;
- (void)dismissPresentedContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)platterViewController:(id)arg1 didToggleRoutingPicker:(_Bool)arg2;
- (void)platterViewController:(id)arg1 willToggleRoutingPicker:(_Bool)arg2;
- (void)dismissPlatterViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)platterViewController:(id)arg1 presentingViewForPresentedViewController:(id)arg2;
- (void)platterViewController:(id)arg1 homeGestureDismisalAllowedDidChange:(_Bool)arg2;
- (_Bool)shouldPresentUsingViewServicePlatterViewController:(id)arg1;
- (void)platterViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)_setupEndpointsManager;
- (void)_setupRoutingViewController;
- (void)_setSelectedRoute:(id)arg1 isUserSelected:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_updateDiscoveryMode;
- (void)_transitionToVisibleIfNeeded;
- (void)_transitionToVisible:(_Bool)arg1;
- (_Bool)_isReadyForAppearanceTransition;
- (double)preferredItemHeightGivenWidth:(double)arg1;
- (void)_assignRouteViewControllerToSelectedPanelViewController;
- (void)_updateSupportedModesForSelectedPlatterViewController;
- (void)didSelectEndpoint:(id)arg1;
- (void)_selectActiveSystemRouteIfNeeded;
- (void)_updateEndpointRouteForOutputDeviceDataSource:(id)arg1;
- (void)_supportedModesForSelectedRoute:(unsigned long long *)arg1 selectedMode:(long long *)arg2;
- (void)_updateModesForSelectedPlatterViewController;
- (_Bool)_isSelectedRouteInRoutes;
- (long long)numberOfItemsInCollectionViewController:(id)arg1;
- (id)mediaControlsCollectionViewController:(id)arg1 viewControllerForItemAtIndex:(long long)arg2;
- (long long)defaultSelectedItemIndexForCollectionViewController:(id)arg1;
- (void)mediaControlsCollectionViewController:(id)arg1 willDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 didDisplayViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 didEndDisplayingViewController:(id)arg2 forItemAtIndex:(long long)arg3;
- (_Bool)mediaControlsCollectionViewController:(id)arg1 canSelectItemAtIndex:(long long)arg2;
- (void)mediaControlsCollectionViewController:(id)arg1 willSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (void)mediaControlsCollectionViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 withReason:(long long)arg3;
- (void)endpointsManager:(id)arg1 activeSystemRouteDidChange:(id)arg2;
- (void)endpointsManager:(id)arg1 defersRoutesReplacement:(CDUnknownBlockType)arg2;
- (double)preferredItemHeight;
- (void)homeObserverDidUpdateKnownUIDs:(id)arg1;

@end
