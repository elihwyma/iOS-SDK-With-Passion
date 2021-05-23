/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKQuantityType, HKUnit, NSDate, NSPredicate;

@interface HKQuantityDistributionDataSource : HKHealthQueryChartCacheDataSource

{
    HKQuantityType *_quantityType;
    HKUnit *_unit;
    long long _contextStyle;
    NSPredicate *_predicate;
    unsigned long long _options;
    NSDate *_specificStartDate;
    NSDate *_specificEndDate;
    CDUnknownBlockType _userInfoCreationBlock;
}

@property (nonatomic, readonly) HKQuantityType *quantityType;
@property (nonatomic, readonly) HKUnit *unit;
@property (nonatomic, readonly) long long contextStyle;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSDate *specificStartDate;
@property (nonatomic, readonly) NSDate *specificEndDate;
@property (nonatomic, readonly) CDUnknownBlockType userInfoCreationBlock;

- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithQuantityType:(id)arg1 unit:(id)arg2 healthStore:(id)arg3 contextStyle:(long long)arg4 predicate:(id)arg5 options:(unsigned long long)arg6 baseDisplayType:(id)arg7 specificStartDate:(id)arg8 specificEndDate:(id)arg9 userInfoCreationBlock:(CDUnknownBlockType)arg10;
- (id)_quickDate:(id)arg1;
- (id)_dataBlockFromHistograms:(id)arg1;

@end
