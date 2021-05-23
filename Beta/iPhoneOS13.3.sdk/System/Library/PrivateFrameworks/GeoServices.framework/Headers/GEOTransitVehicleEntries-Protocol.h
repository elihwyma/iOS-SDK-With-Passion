/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <GeoServices/Swift-Protocol.h>

@class NSArray;

@protocol GEOTransitVehicleEntries <Swift>

@property (nonatomic, readonly) unsigned long long firstTripID;
@property (nonatomic, readonly) unsigned long long tripIDForNextUpcomingDeparture;
@property (copy, nonatomic, readonly) NSArray *tripIDs;
@property (copy, nonatomic, readonly) NSArray *upcomingTripIDs;

@end
