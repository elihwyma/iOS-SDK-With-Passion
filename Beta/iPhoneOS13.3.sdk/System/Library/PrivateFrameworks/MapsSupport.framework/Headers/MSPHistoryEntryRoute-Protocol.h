/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class GEOComposedWaypoint, GEOURLRouteHandle;

@protocol MSPHistoryEntryRoute <Swift>

@property (nonatomic, readonly) long long transportType;
@property (nonatomic, readonly) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, readonly) GEOURLRouteHandle *routeHandle;
@property (nonatomic, readonly) _Bool navigationWasInterrupted;

@end
