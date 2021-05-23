/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIViewController.h>

@class CARSessionStatus, MPAVClippingTableView, MPAVEndpointRoute, MPAVRoute, MPAVRoutingController, MPAVRoutingViewControllerUpdate, MPSectionedCollection, MPVolumeGroupSliderCoordinator, MPWeakTimer, NSArray, NSMapTable, NSNumber, NSString, UIColor, UITableView;

@protocol MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate;

@interface MPAVRoutingViewController : UIViewController

{
    MPAVClippingTableView *_tableView;
    MPAVRoutingViewControllerUpdate *_pendingUpdate;
    _Bool _isAnimatingUpdate;
    MPAVRoute *_displayedEndpointRoute;
    MPSectionedCollection *_routingViewItems;
    NSArray *_cachedPickedRoutes;
    NSArray *_cachedDisplayableAvailableRoutes;
    NSArray *_cachedPendingPickedRoutes;
    NSArray *_cachedDisplayAsPickedRoutes;
    NSArray *_cachedVolumeCapableRoutes;
    MPWeakTimer *_updateTimer;
    MPAVRoutingController *_routingController;
    long long _routeDiscoveryMode;
    UIColor *_tableCellsBackgroundColor;
    UIColor *_tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;
    _Bool _needsDisplayedRoutesUpdate;
    _Bool _suspendedDiscoveryModeDueToApplicationState;
    _Bool _shouldAutomaticallyUpdateRoutesList;
    _Bool _shouldPickRouteOnSelection;
    _Bool _onScreen;
    _Bool _hasUserSelections;
    CARSessionStatus *_carPlayStatus;
    unsigned long long _updatesSincePresentation;
    long long _discoveryModeBeforeEnteringBackground;
    _Bool _sortByIsVideoRoute;
    unsigned long long _style;
    id <MPAVRoutingViewControllerDelegate> _delegate;
    long long _avItemType;
    unsigned long long _mirroringStyle;
    unsigned long long _iconStyle;
    NSNumber *_discoveryModeOverride;
    id <MPAVRoutingViewControllerThemeDelegate> _themeDelegate;
    MPAVEndpointRoute *_endpointRoute;
    NSMapTable *_outputDeviceVolumeSliders;
    MPVolumeGroupSliderCoordinator *_groupSliderCoordinator;
}

@property (nonatomic, readonly, getter=isInCarPlay) _Bool inCarPlay;
@property (weak, nonatomic) id <MPAVRoutingViewControllerThemeDelegate> themeDelegate;
@property (nonatomic, readonly) MPAVRoutingController *_routingController;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute;
@property (nonatomic, readonly) UITableView *_tableView;
@property (nonatomic, readonly) double _normalCellHeight;
@property (nonatomic, readonly) double _expandedCellHeight;
@property (retain, nonatomic, setter=_setTableCellsBackgroundColor:) UIColor *_tableCellsBackgroundColor;
@property (retain, nonatomic, setter=_setTableCellsContentColor:) UIColor *_tableCellsContentColor;
@property (nonatomic, setter=_setShouldAutomaticallyUpdateRoutesList:) _Bool _shouldAutomaticallyUpdateRoutesList;
@property (nonatomic, setter=_setShouldPickRouteOnSelection:) _Bool _shouldPickRouteOnSelection;
@property (retain, nonatomic) NSMapTable *outputDeviceVolumeSliders;
@property (retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator;
@property (nonatomic) _Bool sortByIsVideoRoute;
@property (nonatomic, readonly) unsigned long long style;
@property (weak, nonatomic) id <MPAVRoutingViewControllerDelegate> delegate;
@property (nonatomic, setter=setAVItemType:) long long avItemType;
@property (nonatomic) unsigned long long mirroringStyle;
@property (nonatomic) unsigned long long iconStyle;
@property (nonatomic) _Bool allowMirroring;
@property (copy, nonatomic) NSNumber *discoveryModeOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize)preferredContentSize;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (id)_stateDumpObject;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;
- (void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1;
- (void)sessionDidConnect:(id)arg1;
- (void)sessionDidDisconnect:(id)arg1;
- (id)_generatePropertyListFromUpdateDisplayedRoutesState:(id)arg1 exception:(id)arg2;
- (id)_writeToDiskWithUpdateDisplayedRoutesStatePropertyList:(id)arg1 error:(id *)arg2;
- (id)_alertControllerForUpdateDisplayedRoutesCrashWithLogFileURL:(id)arg1 exception:(id)arg2;
- (id)_crashLogDateFormatter;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(_Bool)arg2;
- (void)_initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;
- (_Bool)hasCarKitRoute;
- (_Bool)isInVehicle;
- (void)resetDisplayedRoutes;
- (void)resetScrollPosition;
- (_Bool)shouldOverrideContentSizeCategory:(id)arg1;
- (void)enqueueRefreshUpdate;
- (_Bool)_wouldShareAudioForPickedRoute:(id)arg1 operation:(long long)arg2 pickedRoutes:(id)arg3;
- (void)_diplayShareAudioDisabledAlertForReason:(id)arg1;
- (double)_tableViewHeightAccordingToDataSource;
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)_registerCarPlayObserver;
- (void)_beginRouteDiscovery;
- (void)_endRouteDiscovery;
- (void)_setupUpdateTimerIfNecessary;
- (void)_setRouteDiscoveryMode:(long long)arg1;
- (void)_setNeedsRouteDiscoveryModeUpdate;
- (void)_setNeedsDisplayedRoutesUpdate;
- (id)_displayableRoutesInRoutes:(id)arg1;
- (id)_displayAsPickedRoutesInRoutes:(id)arg1;
- (id)_volumeCapableRoutesInRoutes:(id)arg1;
- (void)_updateDisplayedRoutes;
- (void)_enqueueUpdate:(id)arg1;
- (id)_createReloadUpdate;
- (void)_applyUpdate:(id)arg1;
- (double)_tableViewHeaderViewHeight;
- (double)_tableViewFooterViewHeight;
- (_Bool)_shouldDisplayRouteAsPicked:(id)arg1;
- (id)_createVolumeSlider;
- (void)_endUpdates;
- (id)_createSectionedCollection:(id)arg1 withPickedRoutes:(id)arg2;

@end
