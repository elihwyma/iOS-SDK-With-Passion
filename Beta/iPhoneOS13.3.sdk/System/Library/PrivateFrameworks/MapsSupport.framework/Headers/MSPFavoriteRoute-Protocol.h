/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/Swift-Protocol.h>

@class GEOComposedWaypoint;

@protocol MSPFavoriteRoute <Swift>

@property (nonatomic, readonly) GEOComposedWaypoint *startWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, readonly) int transportType;

@end
