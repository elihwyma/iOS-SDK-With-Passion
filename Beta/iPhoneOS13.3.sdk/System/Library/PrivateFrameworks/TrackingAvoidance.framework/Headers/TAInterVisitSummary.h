/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateInterval, TASPAdvertisement;

@interface TAInterVisitSummary : NSObject

{
    NSDateInterval *_deviceObservationInterval;
    NSArray *_deviceLocationHistory;
    TASPAdvertisement *_latestObservation;
}

@property (nonatomic, readonly) NSDateInterval *deviceObservationInterval;
@property (nonatomic, readonly) NSArray *deviceLocationHistory;
@property (nonatomic, readonly) TASPAdvertisement *latestObservation;

- (id)initWithObservationInterval:(id)arg1 andLocationHistory:(id)arg2 andLastObservation:(id)arg3;

@end
