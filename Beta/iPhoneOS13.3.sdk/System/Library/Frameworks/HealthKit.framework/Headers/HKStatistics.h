/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKObjectType, HKQuantity, HKQuantityType, NSArray, NSDate, NSDateInterval, NSDictionary;

@interface HKStatistics : NSObject <Swift>

{
    HKObjectType *_dataType;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_sources;
    unsigned long long _dataCount;
    HKQuantity *_averageQuantity;
    HKQuantity *_minimumQuantity;
    HKQuantity *_maximumQuantity;
    HKQuantity *_mostRecentQuantity;
    NSDateInterval *_mostRecentQuantityDateInterval;
    HKQuantity *_duration;
    NSDictionary *_averageQuantityBySource;
    NSDictionary *_minimumQuantityBySource;
    NSDictionary *_maximumQuantityBySource;
    NSDictionary *_mostRecentQuantityBySource;
    NSDictionary *_mostRecentQuantityDateIntervalBySource;
    NSDictionary *_dataCountBySource;
    NSDictionary *_durationBySource;
    HKQuantity *_sumQuantity;
    NSDictionary *_sumQuantityBySource;
    NSDictionary *_sumQuantityBySourceID;
}

@property (nonatomic) unsigned long long dataCount;
@property (copy, nonatomic) HKQuantity *averageQuantity;
@property (copy, nonatomic) HKQuantity *minimumQuantity;
@property (copy, nonatomic) HKQuantity *maximumQuantity;
@property (copy, nonatomic) HKQuantity *mostRecentQuantity;
@property (copy, nonatomic) NSDateInterval *mostRecentQuantityDateInterval;
@property (copy, nonatomic) HKQuantity *duration;
@property (copy, nonatomic) NSDictionary *averageQuantityBySource;
@property (copy, nonatomic) NSDictionary *minimumQuantityBySource;
@property (copy, nonatomic) NSDictionary *maximumQuantityBySource;
@property (copy, nonatomic) NSDictionary *mostRecentQuantityBySource;
@property (copy, nonatomic) NSDictionary *mostRecentQuantityDateIntervalBySource;
@property (copy, nonatomic) NSDictionary *dataCountBySource;
@property (copy, nonatomic) NSDictionary *durationBySource;
@property (copy, nonatomic) HKQuantity *sumQuantity;
@property (copy, nonatomic) NSDictionary *sumQuantityBySource;
@property (copy, nonatomic) NSDictionary *sumQuantityBySourceID;
@property (readonly) HKQuantityType *quantityType;
@property (readonly) NSDate *startDate;
@property (readonly) NSDate *endDate;
@property (readonly) NSArray *sources;

+ (_Bool)supportsSecureCoding;
+ (void)_validateOptions:(unsigned long long)arg1 forDataType:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setStartDate:(id)arg1;
- (void)_setEndDate:(id)arg1;
- (id)_initAsCopyOf:(id)arg1;
- (id)_initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)averageQuantityForSource:(id)arg1;
- (id)minimumQuantityForSource:(id)arg1;
- (id)maximumQuantityForSource:(id)arg1;
- (id)mostRecentQuantityForSource:(id)arg1;
- (id)mostRecentQuantityDateIntervalForSource:(id)arg1;
- (id)sumQuantityForSource:(id)arg1;
- (id)durationForSource:(id)arg1;
- (void)_setSources:(id)arg1;
- (id)_copyOverwritingObjectType:(id)arg1;

@end
