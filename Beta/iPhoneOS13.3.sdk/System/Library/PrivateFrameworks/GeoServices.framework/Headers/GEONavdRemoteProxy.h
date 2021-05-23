/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/GEONavdServerProxy.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSXPCConnection;

@protocol GEONavdXPCInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONavdRemoteProxy : GEONavdServerProxy

{
    NSXPCConnection *_connection;
    NSMutableArray *_observers;
    NSMutableDictionary *_handlers;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, readonly) id <GEONavdXPCInterface> remoteObjectProxyThreadUnsafe;

- (id)init;
- (void)dealloc;
- (void)open;
- (void)close;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)statusWithCallback:(CDUnknownBlockType)arg1;
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)forceCacheRefresh;
- (void)_connectToDaemonIfNeededThreadUnsafe;
- (void)navdProxyReceivedData:(id)arg1 ofType:(id)arg2;
- (void)navdProxyReceivedHypothesis:(id)arg1 forClient:(id)arg2;

@end
