/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDateInterval, NSMutableDictionary;

@interface _HKSleepQueryResultBuilder : NSObject

{
    NSDateInterval *_resultInterval;
    NSArray *_sourceOrder;
    NSMutableDictionary *_samplesByCategoryValue;
    NSMutableDictionary *_samplesBySource;
}

- (id)_categorySampleBufferForCategoryValue:(long long)arg1;
- (id)_categorySampleBufferForSource:(id)arg1;
- (id)_organizeSamplesBySource:(id)arg1;
- (id)_createDateIntervalsFromSamples:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithResultInterval:(id)arg1 sourceOrder:(id)arg2;
- (void)addSleepSamples:(id)arg1;
- (id)calculateResult;

@end
