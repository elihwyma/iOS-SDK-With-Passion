/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVRoute, MPAVRoutingControllerSelectionQueue, MPAVRoutingDataSource, NSArray, NSMutableArray, NSSet, NSString;

@protocol MPAVOutputDevicePlaybackDataSource, MPAVRoutingControllerDelegate;

@interface MPAVRoutingController : NSObject

{
    NSArray *_cachedRoutes;
    NSArray *_cachedPickedRoutes;
    NSMutableArray *_asyncFetchingCompletionHandlers;
    _Bool _asyncFetchingRoutes;
    long long _externalScreenType;
    _Bool _hasExternalScreenType;
    _Bool _scheduledSendDelegateRoutesChanged;
    long long _volumeControlStateForPickedRoute;
    MPAVRoutingControllerSelectionQueue *_routingControllerSelectionQueue;
    int _deviceAvailabilityNotifyToken;
    _Bool _deviceAvailabilityOverrideState;
    _Bool _fetchAvailableRoutesSynchronously;
    _Bool _representsLongFormVideoContent;
    id <MPAVRoutingControllerDelegate> _delegate;
    MPAVRoutingDataSource *_dataSource;
    NSString *_name;
    long long _discoveryMode;
    NSString *_category;
    long long _routeTypes;
    MPAVRoute *_legacyCachedRoute;
    id <MPAVOutputDevicePlaybackDataSource> _playbackDataSource;
    NSString *_presentedBundleID;
    NSString *_representedBundleID;
}

@property (retain, nonatomic) MPAVRoute *legacyCachedRoute;
@property (weak, nonatomic) id <MPAVOutputDevicePlaybackDataSource> playbackDataSource;
@property (copy, nonatomic) NSString *presentedBundleID;
@property (copy, nonatomic) NSString *representedBundleID;
@property (nonatomic, readonly) _Bool representsLongFormVideoContent;
@property (weak, nonatomic) id <MPAVRoutingControllerDelegate> delegate;
@property (nonatomic, readonly) MPAVRoutingDataSource *dataSource;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long discoveryMode;
@property (nonatomic) _Bool fetchAvailableRoutesSynchronously;
@property (nonatomic, readonly) long long externalScreenType;
@property (copy, nonatomic, readonly) NSArray *availableRoutes;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) long long routeTypes;
@property (nonatomic, readonly) MPAVRoute *pickedRoute;
@property (nonatomic, readonly) NSArray *pickedRoutes;
@property (nonatomic, readonly) NSSet *pendingPickedRoutes;
@property (nonatomic, readonly) MPAVRoute *pendingPickedRoute;
@property (nonatomic, readonly) _Bool hasPendingPickedRoutes;
@property (nonatomic, readonly) _Bool volumeControlIsAvailable;
@property (nonatomic, readonly) _Bool supportsMultipleSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_iconImageForRoute:(id)arg1;
+ (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)_sharedSerialQueue;
+ (void)_getActiveRouteWithTimeout:(double)arg1 discoveredRoutes:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (_Bool)bundleIdRepresentsLongFormVideoContent:(id)arg1;
+ (id)_iconImageForIdentifier:(id)arg1;
+ (id)_currentDeviceRoutingIconImage;
+ (void)getActiveRouteWithCompletion:(CDUnknownBlockType)arg1;
+ (void)setActiveRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)setActiveRoute:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)systemRoute;
+ (id)systemRouteWithContextUID:(id)arg1;
+ (id)_currentDeviceRoutingIconImageName;

- (id)init;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (id)_stateDumpObject;
- (long long)_volumeControlStateForPickedRoute;
- (_Bool)_deviceAvailabilityOverrideState;
- (id)initWithDataSource:(id)arg1 name:(id)arg2;
- (_Bool)routeIsLeaderOfEndpoint:(id)arg1;
- (_Bool)routeIsPendingPick:(id)arg1;
- (_Bool)airtunesRouteIsPicked;
- (void)fetchAvailableRoutesWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchAvailableRoutesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getActiveRouteWithTimeout:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handsetRouteIsPicked;
- (_Bool)pickBestDeviceRoute;
- (_Bool)pickHandsetRoute;
- (_Bool)pickSpeakerRoute;
- (void)selectRoute:(id)arg1 operation:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)speakerRouteIsPicked;
- (_Bool)receiverRouteIsPicked;
- (_Bool)routeOtherThanHandsetAndSpeakerAvailable;
- (_Bool)routeOtherThanHandsetAvailable;
- (void)unpickAirPlayScreenRouteWithCompletion:(CDUnknownBlockType)arg1;
- (id)videoRouteForRoute:(id)arg1;
- (_Bool)wirelessDisplayRouteIsPicked;
- (_Bool)wirelessDisplayRoutesAvailable;
- (void)clearCachedRoutes;
- (void)unpickTVRoutes;
- (void)_clearLegacyCachedRoute;
- (long long)_externalScreenType:(_Bool *)arg1;
- (void)_onQueue_clearCachedRoutes;
- (void)_onQueueSetExternalScreenType:(long long)arg1;
- (id)_pickedRouteInArray:(id)arg1;
- (id)_pickedRoutesInArray:(id)arg1;
- (void)_promptForHijackIfNeeded:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_scheduleSendDelegateRoutesChanged;
- (void)_sendDelegateFailedToPickRouteWithError:(id)arg1;
- (void)_sendDelegatePickedRoutesChanged;
- (void)_setExternalScreenType:(long long)arg1;
- (void)_setVolumeControlStateForPickedRoute:(long long)arg1;
- (void)_updateCachedRoutes;
- (void)_activeAudioRouteDidChangeNotification:(id)arg1;
- (void)_externalScreenTypeDidChangeNotification:(id)arg1;
- (void)_mediaServerDiedNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)_volumeControlAvailabilityDidChangeNotification:(id)arg1;
- (_Bool)pickRoute:(id)arg1;
- (_Bool)pickRoute:(id)arg1 withPassword:(id)arg2;
- (_Bool)pickRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_pickRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)addPickedRoute:(id)arg1;
- (_Bool)addPickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)removePickedRoute:(id)arg1;
- (_Bool)removePickedRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
