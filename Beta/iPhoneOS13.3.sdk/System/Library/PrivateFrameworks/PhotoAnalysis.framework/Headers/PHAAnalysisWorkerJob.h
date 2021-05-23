/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/PHAAssetProcessingJob.h>

@class NSDictionary, NSMutableDictionary;

@interface PHAAnalysisWorkerJob : PHAAssetProcessingJob

{
    _Bool _persistsAnalysisState;
    _Bool _canUseNetwork;
    _Bool _shouldBackoffForFailedNoResourceErrors;
    NSDictionary *_workerFlagsByAssetLocalIdentifier;
    NSMutableDictionary *_ignoreUntilDatesByAssetLocalIdentifier;
}

@property (nonatomic, readonly) _Bool canUseNetwork;
@property (nonatomic, readonly) _Bool shouldBackoffForFailedNoResourceErrors;
@property (nonatomic, readonly) NSDictionary *workerFlagsByAssetLocalIdentifier;
@property (nonatomic, readonly) NSMutableDictionary *ignoreUntilDatesByAssetLocalIdentifier;
@property (nonatomic) _Bool persistsAnalysisState;

- (id)description;
- (void)finish;
- (void)prepare;
- (_Bool)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (_Bool)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (id)statusAsDictionary;
- (id)_fetchAllAssetsForLocalIdentifiers:(id)arg1;
- (void)_markAssetsPending;
- (void)_processFailures;
- (id)_resultsDescription;
- (id)initWithWorkerType:(short)arg1 scenario:(unsigned long long)arg2 workInfos:(id)arg3 canUseNetwork:(_Bool)arg4 shouldBackoffForFailedNoResource:(_Bool)arg5 library:(id)arg6;
- (id)dataLoaderOptions;
- (int)workerFlagsForAssetLocalIdentifier:(id)arg1;
- (void)setIgnoreUntilDate:(id)arg1 forAssetLocalIdentifier:(id)arg2;
- (id)ignoreUntilDateForAssetLocalIdentifier:(id)arg1;

@end
