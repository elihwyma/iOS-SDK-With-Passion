/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REPredictor.h>

@class NSArray, NSDateInterval, NSLock, REDuetKnowledgeStore, REUpNextTimer;

@interface REPeriodOfDayPredictor : REPredictor

{
    NSArray *_storedPeriods;
    NSLock *_storedPeriodsLock;
    REUpNextTimer *_periodOfDayUpdateTimer;
    REDuetKnowledgeStore *_knowledgeStore;
}

@property (nonatomic, readonly) unsigned long long currentPeriodOfDay;
@property (nonatomic, readonly) NSDateInterval *intervalForCurrentPeriodOfDay;
@property (nonatomic, readonly) NSArray *storedPeriods;

+ (double)updateInterval;

- (void)dealloc;
- (id)_init;
- (void)update;
- (void)_handleSignificantTimeChange;
- (id)_defaultDayPeriodsOfDayForDate:(id)arg1;
- (void)_queue_updateNextDateUpdateTimer;
- (id)_periodsOfDayForSleepIntervals:(id)arg1;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1 afterDate:(id)arg2;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1 beforeDate:(id)arg2;
- (void)_getAllSleepIntervalsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getPredictedSleepIntervalsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_getHistoricSleepIntervalsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_nextDayPeriodUpdateDate;
- (id)dateIntervalForNextPeriodOfDay:(unsigned long long)arg1;
- (id)dateIntervalForPreviousPeriodOfDay:(unsigned long long)arg1;

@end
