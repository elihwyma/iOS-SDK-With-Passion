/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAWorker.h>

@interface PHAMADWorker : PHAWorker

{
    struct os_unfair_lock_s _lock;
    _Bool _turboProcessingEnabled;
    _Bool _assetProcessingComplete;
}

+ (short)workerType;
+ (_Bool)mediaanalysisdSceneProcessingEnabled;
+ (long long)applicationDataFolderIdentifier;

- (id)statusAsDictionary;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (_Bool)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (_Bool)hasAdditionalJobsForScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1 requestReason:(unsigned long long)arg2;

@end
