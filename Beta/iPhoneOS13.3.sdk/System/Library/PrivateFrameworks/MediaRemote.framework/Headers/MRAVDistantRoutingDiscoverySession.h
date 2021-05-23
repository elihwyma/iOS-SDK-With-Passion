/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <MediaRemote/MRAVRoutingDiscoverySession.h>

@class NSArray, NSMutableDictionary, NSObject, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface MRAVDistantRoutingDiscoverySession : MRAVRoutingDiscoverySession

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned int _endpointFeatures;
    unsigned int _discoveryMode;
    _Bool _enableThrottling;
    NSArray *_distantEndpoints;
    NSArray *_distantOutputDevices;
    NSString *_routingContextUID;
    int _serviceResetNotifyToken;
    _Bool _hostedRoutingConnectionDidInitialize;
    NSXPCConnection *_hostedRoutingSessionConnection;
    NSMutableDictionary *_distantExternalDevices;
}

@property (retain, nonatomic) NSXPCConnection *hostedRoutingSessionConnection;
@property (retain, nonatomic) NSArray *distantEndpoints;
@property (retain, nonatomic) NSArray *distantOutputDevices;
@property (retain, nonatomic) NSMutableDictionary *distantExternalDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientInterface;
+ (id)serviceInterface;

- (void)dealloc;
- (void)setDiscoveryMode:(unsigned int)arg1;
- (id)routingContextUID;
- (unsigned int)discoveryMode;
- (_Bool)devicePresenceDetected;
- (id)availableOutputDevices;
- (void)setRoutingContextUID:(id)arg1;
- (void)availableEndpointsDidChange:(id)arg1;
- (void)availableOutputDevicesDidChange:(id)arg1;
- (void)_initializeHostedRoutingConnectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reloadHostedRoutingServiceDiscoveryMode;
- (id)_hostedRoutingConnection;
- (void)_reloadAvailableDistantEndpoints;
- (void)_reloadAvailableDistantOutputDevices;
- (void)_reloadAvailableDistantEndpointsWithEndpoints:(id)arg1;
- (void)_reloadAvailableDistantOutputDevicesWithOutputDevices:(id)arg1;
- (id)initWithEndpointFeatures:(unsigned int)arg1 enableThrottling:(_Bool)arg2;
- (unsigned int)endpointFeatures;
- (id)availableEndpoints;

@end
