/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class HAMenstrualAlgorithmsAnalysis, HDProfile, HKMCAnalysis, HKMCSettingsManager, HKObserverSet, NSArray, NSString, _HKDelayedOperation;

@protocol OS_dispatch_queue;

@interface HDMCAnalysisManager : NSObject

{
    HDProfile *_profile;
    HKObserverSet *_observers;
    HKObserverSet *_userInitiatedObservers;
    NSObject<OS_dispatch_queue> *_queue;
    _HKDelayedOperation *_analyzeOperation;
    HKMCAnalysis *_currentAnalysis;
    HKMCSettingsManager *_settingsManager;
    _Bool _needsMaintenenceAnalysis;
    _Bool _maintenanceOperationQueued;
    HAMenstrualAlgorithmsAnalysis *_test_algorithmsAnalysis;
    NSArray *_test_algorithmsCycles;
}

@property (copy, nonatomic, readonly) HKMCAnalysis *currentAnalysis;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)removeObserver:(id)arg1;
- (void)_startObserving;
- (void)settingsManagerDidUpdateAnalysisSettings:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)samplesOfTypesWereRemoved:(id)arg1 anchor:(id)arg2;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (id)_queue_analyzeNowWithError:(id *)arg1;
- (void)_queue_enqueueMaintenanceOperationIfNeeded;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)_calendarDayDidChange:(id)arg1;
- (void)_queue_analyzeIfNeeded;
- (void)_runMaintenanceOperation;
- (id)_analysisWithAlgorithmsAnalysis:(id)arg1 algorithmsCycles:(id)arg2 recentSymptoms:(unsigned long long)arg3 recentBasalBodyTemperature:(id)arg4 lastLoggedDayIndex:(id)arg5 lastMenstrualFlowDayIndex:(id)arg6;
- (id)initWithProfile:(id)arg1 settingsManager:(id)arg2;
- (id)analyzeWithError:(id *)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2 userInitiated:(_Bool)arg3;
- (void)_test_setAlgorithmsAnalysis:(id)arg1;
- (void)_test_setAlgorithmsCycles:(id)arg1;

@end
