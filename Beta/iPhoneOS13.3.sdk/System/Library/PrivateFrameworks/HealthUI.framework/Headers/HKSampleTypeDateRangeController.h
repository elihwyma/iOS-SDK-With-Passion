/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <Foundation/NSObject.h>

@class HKHealthStore, NSDictionary, NSHashTable, NSString, _HKDateRangeQuery;

@interface HKSampleTypeDateRangeController : NSObject

{
    HKHealthStore *_healthStore;
    _HKDateRangeQuery *_dateRangeQuery;
    NSHashTable *_observers;
    NSString *_name;
    struct NSDictionary *_dateRangesBySampleType;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) NSDictionary *dateRangesBySampleType;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)dateRangeForSampleType:(id)arg1;
- (void)_beginUpdatesWithRetryAttemptCount:(long long)arg1;
- (void)_alertObserverDidUpdateDateRanges:(id)arg1;
- (void)_resultsDidUpdate:(struct NSDictionary *)arg1;
- (void)_updateHandlerDidReceiveError:(id)arg1 retryCount:(long long)arg2;
- (void)_alertObserversDidUpdateDateRanges;

@end
