/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, PHAWorkerHealthMonitor, PHPhotoLibrary;

@interface PHAJobGenerator : NSObject

{
    _Bool _skippedSomeWorker;
    _Bool _graphIncompatibleWorkersAreInhibited;
    PHPhotoLibrary *_library;
    PHAWorkerHealthMonitor *_healthMonitor;
    NSMutableDictionary *_workInfoReadersByMode;
    long long _generatedJobCountGoal;
    NSMutableDictionary *_countOfJobsGeneratedByWorkerType;
}

@property (nonatomic, readonly) PHPhotoLibrary *library;
@property (nonatomic, readonly) PHAWorkerHealthMonitor *healthMonitor;
@property (nonatomic, readonly) NSMutableDictionary *workInfoReadersByMode;
@property (nonatomic) long long generatedJobCountGoal;
@property (nonatomic, readonly) NSMutableDictionary *countOfJobsGeneratedByWorkerType;
@property _Bool graphIncompatibleWorkersAreInhibited;

+ (long long)maxBatchSize;

- (id)_workerTypesEligibleForLoadBalanceSkipping;
- (_Bool)_shouldLoadBalanceSkipForWorkerType:(short)arg1;
- (_Bool)_anyWorkerIsLoadBalanceSkipping;
- (void)_increaseGoalLevelIfNeeeded;
- (void)_jumpToGoalJobCountForWorkerType:(short)arg1;
- (void)_incrementGeneratedJobCountForWorkerType:(short)arg1;
- (id)_transformWorkInfoByUUIDToWorkInfoByLocalIdentifier:(id)arg1;
- (_Bool)_workerUnavailableForWorkerType:(short)arg1 defaultsDisabledKey:(id)arg2 unavailableReason:(id *)arg3;
- (id)_produceAssetAnalysisOrAdditionalJobWithForWorkerType:(id)arg1 workInfoReaderMode:(id)arg2 scenario:(unsigned long long)arg3 allowLoadBalanceSkip:(_Bool)arg4 additionalStatesToExclude:(id)arg5 askAboutAdditionalJobs:(_Bool)arg6 canUseNetwork:(_Bool)arg7 defaultsDisabledKey:(id)arg8 failureReason:(id *)arg9;
- (id)initWithHealthMonitor:(id)arg1 library:(id)arg2;
- (id)generateJobWithCurrentConstraints:(id)arg1 workersByType:(id)arg2;

@end
