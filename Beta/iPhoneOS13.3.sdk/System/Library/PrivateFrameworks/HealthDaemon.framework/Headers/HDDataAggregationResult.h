/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDataAggregationState, NSArray;

@interface HDDataAggregationResult : NSObject

{
    HDDataAggregationState *_aggregationState;
    NSArray *_consumedSensorData;
    CDUnknownBlockType _persistenceHandler;
}

@property (copy, nonatomic, readonly) HDDataAggregationState *aggregationState;
@property (copy, nonatomic, readonly) NSArray *consumedSensorData;
@property (copy, nonatomic, readonly) CDUnknownBlockType persistenceHandler;

- (id)initWithResultingAggregationState:(id)arg1 consumedSensorData:(id)arg2 persistenceHandler:(CDUnknownBlockType)arg3;

@end
