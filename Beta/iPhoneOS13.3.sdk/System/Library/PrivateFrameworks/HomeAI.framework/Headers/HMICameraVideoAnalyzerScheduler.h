/*
 Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

#import <HMFoundation/HMFObject.h>

@class HMFTimer, HMFUnfairLock, HMIPIDController, HMISystemResourceUsageMonitor, MovingAverage, NSArray, NSObject, NSPointerArray, NSString;

@protocol OS_dispatch_queue;

@interface HMICameraVideoAnalyzerScheduler : HMFObject

{
    _Bool _paused;
    double _analysisFPS;
    unsigned long long _maxConcurrentAnalyzers;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFUnfairLock *_lock;
    HMFTimer *_tick;
    NSPointerArray *_internalAnalyzers;
    HMISystemResourceUsageMonitor *_systemResourceUsageMonitor;
    long long _systemResourceUsageMonitorUsageLevel;
    HMIPIDController *_thermalPIDController;
    MovingAverage *_averageAnalysisTimeMovingAverage;
    MovingAverage *_averageTotalAnalysisTimeMovingAverage;
    double _analysisFPSPreference;
}

@property (nonatomic, readonly) HMFUnfairLock *lock;
@property (readonly) HMFTimer *tick;
@property (readonly) NSPointerArray *internalAnalyzers;
@property (readonly) HMISystemResourceUsageMonitor *systemResourceUsageMonitor;
@property long long systemResourceUsageMonitorUsageLevel;
@property (readonly) HMIPIDController *thermalPIDController;
@property (readonly) double averageAnalysisTime;
@property (readonly) MovingAverage *averageAnalysisTimeMovingAverage;
@property (readonly) double averageTotalAnalysisTime;
@property (readonly) MovingAverage *averageTotalAnalysisTimeMovingAverage;
@property (readonly) double analysisFPSPreference;
@property (readonly) double analysisFPS;
@property (readonly) long long systemResourceUsageLevel;
@property (getter=isPaused) _Bool paused;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSArray *analyzers;
@property (readonly) unsigned long long maxConcurrentAnalyzers;
@property (readonly) long long activeAnalyzerCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (id)init;
- (void)timerDidFire:(id)arg1;
- (void)systemResourceUsageDidChangeTo:(long long)arg1;
- (_Bool)inFullBypassMode;
- (void)updateAnalysisFPS:(id)arg1;
- (void)_compactInternalAnalyzers;
- (void)logState;
- (void)resumeThermalPIDController;
- (void)requestDidEnd:(id)arg1 outcome:(long long)arg2;
- (void)registerAnalyzer:(id)arg1;
- (void)removeAllAnalyzers;

@end
