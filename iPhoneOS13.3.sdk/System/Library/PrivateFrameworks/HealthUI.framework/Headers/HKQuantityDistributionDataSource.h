//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class HKQuantityType, HKUnit, NSDate, NSPredicate;

@interface HKQuantityDistributionDataSource : HKHealthQueryChartCacheDataSource
{
    HKQuantityType *_quantityType;
    HKUnit *_unit;
    long long _contextStyle;
    NSPredicate *_predicate;
    NSUInteger _options;
    NSDate *_specificStartDate;
    NSDate *_specificEndDate;
    id /* CDUnknownBlockType */ _userInfoCreationBlock;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
@property(readonly, nonatomic) NSDate *specificEndDate; // @synthesize specificEndDate=_specificEndDate;
@property(readonly, nonatomic) NSDate *specificStartDate; // @synthesize specificStartDate=_specificStartDate;
@property(readonly, nonatomic) NSUInteger options; // @synthesize options=_options;
@property(readonly, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) long long contextStyle; // @synthesize contextStyle=_contextStyle;
@property(readonly, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(readonly, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
// - (void).cxx_destruct;
- (id)_dataBlockFromHistograms:(id)arg1;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
- (id)_quickDate:(id)arg1;
- (id)initWithQuantityType:(id)arg1 unit:(id)arg2 healthStore:(id)arg3 contextStyle:(long long)arg4 predicate:(id)arg5 options:(NSUInteger)arg6 baseDisplayType:(id)arg7 specificStartDate:(id)arg8 specificEndDate:(id)arg9 userInfoCreationBlock:(id /* CDUnknownBlockType */)arg10;

@end

