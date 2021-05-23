/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDDataAggregationState.h>

@class HDQuantityDatum;

@interface _HDSeriesQuantityDataAggregationState : HDDataAggregationState

{
    HDQuantityDatum *_lastDatum;
    long long _length;
}

@property (nonatomic, readonly) HDQuantityDatum *lastDatum;
@property (nonatomic) long long length;

- (id)initWithRemainingSensorData:(id)arg1 currentSeries:(id)arg2 lastDatum:(id)arg3 length:(long long)arg4;

@end
