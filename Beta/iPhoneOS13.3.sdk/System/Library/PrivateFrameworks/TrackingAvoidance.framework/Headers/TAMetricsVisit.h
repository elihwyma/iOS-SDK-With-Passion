/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@class NSData, NSDateInterval, NSNumber, NSString;

@interface TAMetricsVisit : NSObject

{
    NSData *_address;
    unsigned long long _totalVisitCount;
    unsigned long long _totalDistinctVisitCount;
    unsigned long long _consecutiveVisitCount;
    unsigned long long _consecutiveAndDistinctFromPrevVisitCount;
    double _durationOfVisitEntryConsideration;
    double _durationOfVisitExitConsideration;
    NSDateInterval *_visitEntryDelay;
    NSDateInterval *_visitExitDelay;
    double _latitude;
    double _longitude;
    NSNumber *_distanceToPreviousSeenVisit;
}

@property (nonatomic, readonly) NSData *address;
@property (nonatomic, readonly) unsigned long long totalVisitCount;
@property (nonatomic, readonly) unsigned long long totalDistinctVisitCount;
@property (nonatomic, readonly) unsigned long long consecutiveVisitCount;
@property (nonatomic, readonly) unsigned long long consecutiveAndDistinctFromPrevVisitCount;
@property (nonatomic, readonly) double durationOfVisitEntryConsideration;
@property (nonatomic, readonly) double durationOfVisitExitConsideration;
@property (nonatomic, readonly) NSDateInterval *visitEntryDelay;
@property (nonatomic, readonly) NSDateInterval *visitExitDelay;
@property (nonatomic, readonly) double latitude;
@property (nonatomic, readonly) double longitude;
@property (nonatomic, readonly) NSNumber *distanceToPreviousSeenVisit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)descriptionDictionary;
- (unsigned long long)getMetricsCollectionType;
- (id)initWithSnapshotHistory:(id)arg1 andAddress:(id)arg2 andVisitFilterSettings:(id)arg3;

@end
