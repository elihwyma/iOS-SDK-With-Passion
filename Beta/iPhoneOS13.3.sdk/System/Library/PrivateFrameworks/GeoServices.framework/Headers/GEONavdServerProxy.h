/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@interface GEONavdServerProxy : NSObject

- (id)init;
- (void)open;
- (void)close;
- (void)statusWithCallback:(CDUnknownBlockType)arg1;
- (void)getDirectionsForClient:(id)arg1 withRouteHypothesisRequest:(id)arg2 andCallback:(CDUnknownBlockType)arg3;
- (void)shouldPostDarwinNotificationForNextUpdate:(_Bool)arg1;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)forceCacheRefresh;

@end
