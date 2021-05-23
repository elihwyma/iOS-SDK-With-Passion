/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDateComponents, NSLock, NSMutableDictionary, NSSet;

@interface HKStatisticsCollection : NSObject

{
    CDUnknownBlockType _emptyStatisticsConstructor;
    double _approximateStatisticsInterval;
    NSMutableDictionary *_statisticsByIndex;
    NSSet *_cachedSources;
    NSLock *_statisticsLock;
    NSDate *_anchorDate;
    NSDateComponents *_statisticsInterval;
}

@property (nonatomic, readonly) NSDate *anchorDate;
@property (nonatomic, readonly) NSDateComponents *statisticsInterval;

- (id)init;
- (id)statistics;
- (id)sources;
- (id)_mostRecentQuantityDateInterval;
- (void)_resetStatistics:(id)arg1;
- (id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 emptyStatisticsConstructor:(CDUnknownBlockType)arg3;
- (_Bool)_insertStatistics:(id)arg1;
- (id)_statisticsPeriodAndIndex:(long long *)arg1 forDate:(id)arg2;
- (id)_statisticsForIndex:(long long)arg1;
- (void)_enumerateStatisticsIndexesFromDate:(id)arg1 toDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_statisticsForLastIndex;
- (void)_clearSourcesCache;
- (void)_timePeriodForStatisticsAtIndex:(long long)arg1 startDate:(id *)arg2 endDate:(id *)arg3;
- (id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2;
- (id)statisticsForDate:(id)arg1;
- (void)enumerateStatisticsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_maxSumQuantityStatistics;
- (id)_minSumQuantityStatistics;
- (id)_mostRecentQuantityStatistics;
- (void)_enumerateTimePeriodsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_timePeriodForDate:(id)arg1;

@end
