/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class GEOComposedWaypoint, NSDate;

__attribute__((visibility("hidden")))
@interface _MNOffRouteInfo : NSObject

{
    NSDate *_date;
    NSDate *_lastUpddate;
    GEOComposedWaypoint *_destination;
    double _originalDistanceFromDestination;
    double _distancePenalty;
    double _throttledReroutesPenalty;
    double _penalty;
}

@property (nonatomic, readonly) double penalty;

- (id)description;
- (CDStruct_c3b9c2ee)_coordinateFromWaypoint:(id)arg1;
- (id)initWithCurrentDate:(id)arg1 location:(id)arg2 destination:(id)arg3;
- (void)updateWithCurrentDate:(id)arg1 location:(id)arg2 isMostRecentReroute:(_Bool)arg3 throttledReroutesCount:(unsigned long long)arg4;

@end
