/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDateInterval;

@interface HKQuantityWrapper : NSObject

{
    HKQuantity *_quantity;
    NSDateInterval *_dateInterval;
}

@property (retain) HKQuantity *quantity;
@property (retain) NSDateInterval *dateInterval;

- (id)initWithQuantity:(id)arg1 dateInterval:(id)arg2;

@end
