/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSampleListDataProvider.h>

@class HKDisplayTypeValueFormatter, NSDateFormatter, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WDAppleStandHourStatisticsListDataProvider : WDSampleListDataProvider

{
    NSMutableArray *_orderedTimePeriods;
    NSMutableDictionary *_totalsByTimePeriod;
    HKDisplayTypeValueFormatter *_valueFormatter;
    NSDateFormatter *_dateFormatter;
}

- (unsigned long long)numberOfSections;
- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)arg1;
- (void)deleteAllData;
- (id)sampleTypes;
- (void)_callUpdateHandler;
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;
- (id)textForObject:(id)arg1;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)secondaryTextForObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)predicateForType:(id)arg1;
- (id)_samplesSortDescriptor;
- (void)_removeSamplesInDateRange:(id)arg1;

@end
