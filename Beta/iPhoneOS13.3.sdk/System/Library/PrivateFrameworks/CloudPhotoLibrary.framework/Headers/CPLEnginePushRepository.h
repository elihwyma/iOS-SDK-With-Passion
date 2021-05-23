/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLBatchExtractionStrategy, CPLPlatformObject, NSDate, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface CPLEnginePushRepository : CPLEngineStorage

{
    NSMutableDictionary *_propertiesPerClass;
    CPLBatchExtractionStrategy *_extractionStrategy;
    NSString *_lastStrategyName;
    NSObject<OS_dispatch_queue> *_uploadRateQueue;
    NSObject<OS_dispatch_queue> *_timingStatisticQueue;
    NSDate *_lastUploadRateUpdateDate;
    NSMutableDictionary *_timingStatistics;
    double _lastApproximativeUploadRate;
}

@property (retain, nonatomic) CPLBatchExtractionStrategy *extractionStrategy;
@property (nonatomic, readonly) unsigned long long maximumResourceSizePerBatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

- (_Bool)isEmpty;
- (id)status;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (id)changeWithScopedIdentifier:(id)arg1;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 trashed:(_Bool)arg3;
- (id)allChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 changeType:(unsigned long long)arg3;
- (id)allNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;
- (id)allChangesWithClass:(Class)arg1 secondaryScopedIdentifier:(id)arg2;
- (id)allChangesWithScopeIdentifier:(id)arg1;
- (_Bool)removeChange:(id)arg1 error:(id *)arg2;
- (_Bool)hasChangesInScopeWithIdentifier:(id)arg1;
- (unsigned long long)effectiveResourceSizeToUploadForUploadIdentifier:(id)arg1;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (unsigned long long)countOfChangesInScopeWithIdentifier:(id)arg1;
- (_Bool)hasChangesWithScopeFilter:(id)arg1;
- (_Bool)storeChange:(id)arg1 uploadIdentifier:(id)arg2 error:(id *)arg3;
- (id)_propertiesForChange:(id)arg1;
- (id)_completeChange:(id)arg1;
- (_Bool)reinjectChange:(id)arg1 dequeueOrder:(long long)arg2 overwrittenRecord:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (_Bool)discardChangeWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)deleteAllChangesWithError:(id *)arg1;
- (_Bool)storeExtractedBatch:(id)arg1 error:(id *)arg2;
- (_Bool)reinjectExtractedBatch:(id)arg1 overwrittenRecordIdentifiers:(id *)arg2 error:(id *)arg3;
- (id)storedExtractedBatch;
- (void)updateApproximativeUploadRate:(double)arg1;
- (void)updateTimingStatisticForKey:(id)arg1 duration:(double)arg2 recordCount:(unsigned long long)arg3 error:(_Bool)arg4 cancelled:(_Bool)arg5;
- (id)_timingStatisticStatuses;

@end
