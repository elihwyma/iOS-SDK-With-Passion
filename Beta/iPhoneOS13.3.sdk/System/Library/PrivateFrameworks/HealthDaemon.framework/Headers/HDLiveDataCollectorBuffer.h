/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol HDSensorDatum;

@interface HDLiveDataCollectorBuffer : NSObject

{
    NSMutableArray *_buffer;
    id <HDSensorDatum> _lastProcessedDatum;
    CDUnknownBlockType _objectCreationBlock;
    CDUnknownBlockType _sensorDatumComparisonBlock;
    double _bufferAggregationInterval;
}

@property (copy, nonatomic) CDUnknownBlockType objectCreationBlock;
@property (copy, nonatomic) CDUnknownBlockType sensorDatumComparisonBlock;
@property (nonatomic) double bufferAggregationInterval;

- (id)init;
- (id)_processBufferIfSensorDatumInvalid:(id)arg1;
- (_Bool)_bufferLengthAchieved:(double)arg1 buffer:(id)arg2 lastProcessedDatum:(id)arg3;
- (id)_createObjectsFromBuffer:(id)arg1 lastProcessedDatum:(id)arg2;
- (void)_resetBuffer;
- (long long)_bufferStateForSensorDatum:(id)arg1;
- (id)addSensorDatum:(id)arg1;

@end
