/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@interface TAInterVisitMetricPerDevice : NSObject

{
    unsigned long long _numOfAssociatedLocs;
    double _duration;
    double _distance;
}

@property (nonatomic, readonly) unsigned long long numOfAssociatedLocs;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double distance;

- (id)description;
- (void)accumulate:(id)arg1;
- (id)descriptionDictionary;
- (void)accumulateNumOfAssociatedLocs:(unsigned long long)arg1;
- (void)accumulateDuration:(double)arg1;
- (void)accumulateDistance:(double)arg1;

@end
