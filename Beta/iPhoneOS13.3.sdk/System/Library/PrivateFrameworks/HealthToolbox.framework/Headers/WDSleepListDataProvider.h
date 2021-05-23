/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthToolbox/WDSampleListDataProvider.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WDSleepListDataProvider : WDSampleListDataProvider

{
    NSMutableDictionary *_sleepData;
    NSMutableArray *_orderedKeys;
}

- (unsigned long long)numberOfSections;
- (long long)cellStyle;
- (id)titleForSection:(unsigned long long)arg1;
- (void)deleteAllData;
- (id)sampleTypes;
- (void)_callUpdateHandler;
- (id)textForObject:(id)arg1;
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)_sleepDataDictionaryFromSamples:(id)arg1;
- (id)_sleepSampleAtIndex:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (id)secondaryTextForObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;

@end
