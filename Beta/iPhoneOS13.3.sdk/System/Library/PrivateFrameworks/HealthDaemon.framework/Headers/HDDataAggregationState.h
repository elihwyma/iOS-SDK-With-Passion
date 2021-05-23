/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKSample, NSMutableArray;

@interface HDDataAggregationState : NSObject

{
    NSMutableArray *_unaggregatedSensorData;
    HKSample *_openSeries;
}

@property (nonatomic, readonly) NSMutableArray *unaggregatedSensorData;
@property (nonatomic, readonly) HKSample *openSeries;

- (id)init;
- (id)initWithRemainingSensorData:(id)arg1;
- (id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2;

@end
