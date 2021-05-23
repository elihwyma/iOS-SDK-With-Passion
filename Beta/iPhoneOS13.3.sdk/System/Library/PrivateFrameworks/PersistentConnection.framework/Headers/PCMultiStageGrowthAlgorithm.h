/*
 Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface PCMultiStageGrowthAlgorithm : NSObject

{
    double _currentKeepAliveInterval;
    double _minimumKeepAliveInterval;
    double _maximumKeepAliveInterval;
    double _previousMaximumKeepAliveInterval;
    double _lastKeepAliveInterval;
    double _lastSuccessfulKeepAliveInterval;
    int _growthStage;
    double _highWatermark;
    double _initialGrowthStageHighWatermark;
    double _initialGrowthStageLastAttempt;
    NSDate *_leaveSteadyStateDate;
    NSDate *_leaveMinimumIntervalFallbackStateDate;
    NSString *_algorithmName;
    unsigned long long _countOfGrowthActions;
    NSObject<OS_os_log> *_logObject;
    _Bool _isServerOriginatedKeepAlive;
    _Bool _minimumIntervalFallbackEnabled;
    int _lastKeepAliveAlgorithmMode;
    int _currentKeepAliveAlgorithmMode;
    double _serverStatsMinKeepAliveInterval;
    double _serverStatsMaxKeepAliveInterval;
    double _serverStatsExpectedKeepAliveInterval;
    double _minimumIntervalFallbackStateTimeout;
    _Bool _usingServerStatsAggressively;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double currentKeepAliveInterval;
@property (nonatomic) _Bool isServerOriginatedKeepAlive;
@property (nonatomic) double minimumKeepAliveInterval;
@property (nonatomic) double maximumKeepAliveInterval;
@property (nonatomic) double serverStatsExpectedKeepAliveInterval;
@property (nonatomic) double serverStatsMaxKeepAliveInterval;
@property (nonatomic) double serverStatsMinKeepAliveInterval;
@property (nonatomic) double lastSuccessfulKeepAliveInterval;
@property (nonatomic) _Bool minimumIntervalFallbackEnabled;
@property (nonatomic) _Bool usingServerStatsAggressively;
@property (nonatomic) double minimumIntervalFallbackStateTimeout;
@property (nonatomic, readonly) unsigned long long countOfGrowthActions;
@property (copy, nonatomic, readonly) NSDictionary *cacheInfo;
@property (nonatomic, readonly) int growthStage;

+ (void)_loadDefaults;
+ (void)_loadDefaultValue:(double *)arg1 forKey:(struct __CFString *)arg2;

- (void)_resetAlgorithmToInterval:(double)arg1 stage:(int)arg2;
- (void)_resetAlgorithmToInterval:(double)arg1;
- (void)_setCurrentKeepAliveInterval:(double)arg1;
- (id)_stringForMode:(int)arg1;
- (id)_stringForStage:(int)arg1;
- (id)_stringForAction:(int)arg1;
- (void)_adjustGrowthAlgorithmMode;
- (void)_processInitialGrowthAction:(int)arg1;
- (void)_processRefinedGrowthAction:(int)arg1;
- (void)_processSteadyStateAction:(int)arg1;
- (void)_processBackoffAction:(int)arg1;
- (void)_processMinimumIntervalFallbackStateAction:(int)arg1;
- (void)_processInitialShrinkAction:(int)arg1;
- (void)_processRefinedShrinkAction:(int)arg1;
- (void)_fallbackToLastSuccessfulKeepAliveInterval;
- (void)processNextAction:(int)arg1;
- (double)_steadyStateTimeout;
- (id)initWithCacheInfo:(id)arg1 loggingIdentifier:(id)arg2 algorithmName:(id)arg3;
- (_Bool)useIntervalIfImprovement:(double)arg1;

@end
