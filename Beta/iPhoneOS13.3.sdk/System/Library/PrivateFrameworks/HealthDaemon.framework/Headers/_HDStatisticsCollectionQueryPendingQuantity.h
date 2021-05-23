/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDateInterval;

@interface _HDStatisticsCollectionQueryPendingQuantity : NSObject

{
    HKQuantity *_quantity;
    NSDateInterval *_dateInterval;
}

@property (copy, nonatomic, readonly) HKQuantity *quantity;
@property (copy, nonatomic, readonly) NSDateInterval *dateInterval;

- (id)initWithQuantity:(id)arg1 dateInterval:(id)arg2;

@end
