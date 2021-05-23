/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity, HKQuantityType, NSDate, NSDateComponents;

@interface HKQuantityTypeDataSourceValue : NSObject

{
    HKQuantity *_sumQuantity;
    HKQuantity *_minQuantity;
    HKQuantity *_maxQuantity;
    HKQuantity *_averageQuantity;
    HKQuantity *_durationQuantity;
    HKQuantity *_mostRecentQuantity;
    HKQuantityType *_quantityType;
    long long _recordCount;
    NSDateComponents *_statisticsInterval;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (retain, nonatomic) HKQuantity *sumQuantity;
@property (retain, nonatomic) HKQuantity *minQuantity;
@property (retain, nonatomic) HKQuantity *maxQuantity;
@property (retain, nonatomic) HKQuantity *averageQuantity;
@property (retain, nonatomic) HKQuantity *durationQuantity;
@property (retain, nonatomic) HKQuantity *mostRecentQuantity;
@property (retain, nonatomic) HKQuantityType *quantityType;
@property (nonatomic) long long recordCount;
@property (retain, nonatomic) NSDateComponents *statisticsInterval;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;

@end
