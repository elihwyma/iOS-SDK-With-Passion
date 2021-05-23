/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface HDQuantityAggregationResult : NSObject

{
    NSArray *_aggregatedSamples;
    NSArray *_consumedSensorData;
    NSMutableArray *_remainingSensorData;
}

@property (copy, nonatomic, readonly) NSArray *aggregatedSamples;
@property (copy, nonatomic, readonly) NSArray *consumedSensorData;
@property (copy, nonatomic, readonly) NSMutableArray *remainingSensorData;

- (id)initWithAggregatedSamples:(id)arg1 consumedData:(id)arg2 remainingData:(id)arg3;

@end
