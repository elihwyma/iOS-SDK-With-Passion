/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class MNRouteRefreshPolicyScheduler, MNTimeballCache, MNTimeballLocationManager, MNTimeballRoutingProvider, NSLock, NSMutableSet, NSString, NSXPCListener;

@protocol OS_dispatch_queue;

@interface MNTimeballServer : NSObject

{
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_xpcQueue;
    MNTimeballCache *_cache;
    MNRouteRefreshPolicyScheduler *_scheduler;
    MNTimeballRoutingProvider *_routingProvider;
    MNTimeballLocationManager *_locationManager;
    NSLock *_proxyLock;
    NSMutableSet *_proxies;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultServer;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)_cache;
- (id)_scheduler;
- (id)_routingProvider;
- (id)_navd_localProxyForClient:(id)arg1;
- (void)_navd_addProxy:(id)arg1;
- (void)_navd_removeProxy:(id)arg1;
- (id)_localProxyForPeer:(id)arg1;
- (void)_peerDidConnectWithProxy:(id)arg1;
- (void)_peerDidDisconnectWithProxy:(id)arg1;

@end
