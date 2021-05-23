/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REObservableSingleton.h>

@class NSDateInterval, NSLock, NSNumber, NSObject, NSString, REPeriodOfDayPredictor, REUpNextTimer;

@protocol OS_dispatch_queue;

@interface REDailyRoutinePredictor : REObservableSingleton

{
    REPeriodOfDayPredictor *_periodOfDayPredictor;
    REUpNextTimer *_endMorningRoutineTimer;
    REUpNextTimer *_beginEveningRoutineTimer;
    REUpNextTimer *_endEveningRoutineTimer;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _currentRoutine;
    NSDateInterval *_currentRoutineInterval;
    NSLock *_routineLock;
    NSNumber *_overrideRoutineType;
}

@property (nonatomic, readonly) unsigned long long currentRoutineType;
@property (nonatomic, readonly) NSDateInterval *currentRoutineInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_init;
- (void)periodOfDayPredictorDidUpdatePredictedIntervals:(id)arg1;
- (void)periodOfDayPredictorDidUpdateCurrentPeriodOfDay:(id)arg1;
- (id)_eveningRoutineIntervalForEvening:(id)arg1;
- (id)_morningRoutineIntervalForMorning:(id)arg1;
- (void)_updateCurrentRoutine;
- (void)_queue_setupMorningBeginTimerIfNeeded;
- (void)_queue_setupEveningBeginTimerIfNeeded;
- (void)_queue_didEndMorningRoutine;
- (void)_queue_didEndEveningRoutine;
- (void)_queue_didBeginMorningRoutine;
- (void)_queue_didBeginEveningRoutine;
- (id)routineIntervalForNextRoutine:(unsigned long long)arg1;
- (id)routineIntervalForPreviousRoutine:(unsigned long long)arg1;
- (void)_setOverrideRoutineType:(unsigned long long)arg1;

@end
