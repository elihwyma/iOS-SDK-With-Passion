/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@protocol GEONavdXPCInterface <Swift>

- (unsigned short)statusWithCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)requestRefreshForPlannedDestination:client: /* Error: Ran out of types for this method. */;
- (unsigned short)onlyPerformLocalUpdatesForPlannedDestination:client: /* Error: Ran out of types for this method. */;
- (unsigned short)stopMonitoringDestination:forClient:uuid: /* Error: Ran out of types for this method. */;
- (unsigned short)didPostUINotification:forDestination:fromClient: /* Error: Ran out of types for this method. */;
- (unsigned short)forceCacheRefresh;
- (unsigned short)startMonitoringDestination:forClient:uuid: /* Error: Ran out of types for this method. */;

@end
