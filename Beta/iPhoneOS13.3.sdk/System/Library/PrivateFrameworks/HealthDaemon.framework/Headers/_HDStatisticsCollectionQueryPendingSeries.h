/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKQuantitySample, NSMutableArray, NSNumber;

@interface _HDStatisticsCollectionQueryPendingSeries : NSObject

{
    HKQuantitySample *_series;
    NSNumber *_anchor;
    NSMutableArray *_quantities;
}

@property (nonatomic, readonly) HKQuantitySample *series;
@property (copy, nonatomic, readonly) NSNumber *anchor;
@property (nonatomic, readonly) NSMutableArray *quantities;

- (id)initWithSeries:(id)arg1 anchor:(id)arg2;
- (void)addQuantity:(id)arg1 dateInterval:(id)arg2;

@end
