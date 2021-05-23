/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEONavdServerProxy, NSMutableArray;

@interface GEONavdManager : NSObject

{
    GEONavdServerProxy *_proxy;
    NSMutableArray *_openers;
    struct os_unfair_lock_s _openersLock;
}

+ (id)navdManagerClientIdentifier:(id)arg1;
+ (id)navdManager;
+ (void)setProxyClass:(Class)arg1;

- (id)init;
- (void)openForClient:(id)arg1;
- (void)closeForClient:(id)arg1;
- (void)statusWithCallback:(CDUnknownBlockType)arg1;
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)forceCacheRefresh;

@end
