/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <MediaPlayer/MPAVRoutingDataSource.h>

@class AVRoutingSessionManager, MPAVEndpointRoute, MPMRAVOutputContextWrapper, NSArray, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _attemptedToInitializeAppOutputContext;
    void *_discoverySession;
    void *_callbackToken;
    _Bool _supportsMultipleSelection;
    _Bool _devicePresenceDetected;
    NSArray *_outputDeviceRoutes;
    _Bool _shouldSourceOutputDevicesFromAVODDS;
    AVRoutingSessionManager *_routingSessionManager;
    _Bool _supportsRoutePrediction;
    MPMRAVOutputContextWrapper *_applicationOutputContext;
    MPAVEndpointRoute *_endpointRoute;
    NSString *_initiator;
}

@property (retain, nonatomic) MPMRAVOutputContextWrapper *applicationOutputContext;
@property (copy, nonatomic) NSString *routingContextUID;
@property (nonatomic) _Bool supportsMultipleSelection;
@property (retain, nonatomic) MPAVEndpointRoute *endpointRoute;
@property (retain, nonatomic) NSString *initiator;
@property (nonatomic) _Bool supportsRoutePrediction;

+ (id)_globalAudioSessionLock;

- (id)init;
- (void)dealloc;
- (void)_registerNotifications;
- (void)_unregisterNotifications;
- (void)setDiscoveryMode:(long long)arg1;
- (long long)discoveryMode;
- (_Bool)devicePresenceDetected;
- (void)getRoutesForCategory:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)routeIsLeaderOfEndpoint:(id)arg1;
- (void)_routeStatusDidChangeNotification:(id)arg1;
- (void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)routingSessionManager;
- (void)addRouteToGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeRouteFromGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_endpointsDidChangeNotification:(id)arg1;
- (void)_outputDevicesDidChangeNotification:(id)arg1;
- (void)_outputDevicesDidChange:(id)arg1;
- (id)_outputDeviceRouteWithUID:(id)arg1;
- (void)_setShouldSourceOutputDevicesFromAVODDS:(_Bool)arg1;

@end
