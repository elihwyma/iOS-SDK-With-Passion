/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLChangeBatch, CPLEngineScopeStorage, CPLEngineStore, CPLPushChangeTasks, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet;

@interface CPLPushSessionTracker : NSObject

{
    CPLEngineScopeStorage *_scopes;
    NSMutableSet *_unquarantinedRecordScopedIdentifiers;
    NSMutableDictionary *_incomingBatchRecordPerScopedIdentifiers;
    NSMutableDictionary *_storedClientRecords;
    NSMutableDictionary *_storedCloudRecords;
    NSMutableArray *_addedRecords;
    NSMutableArray *_updatedRecords;
    NSMutableArray *_deletedRecordScopedIdentifiers;
    NSMutableArray *_changesWithResourceChanges;
    NSMutableDictionary *_fullRecords;
    NSMutableDictionary *_resourcesToUpload;
    _Bool _checkScopeIdentifier;
    NSMutableSet *_validScopeIdentifiers;
    NSMutableSet *_invalidScopeIdentifiers;
    _Bool _diffedBatchCanLowerQuota;
    _Bool _expandHasBeenSuccessful;
    _Bool _diffHasBeenSuccessful;
    _Bool _applyHasBeenSuccessful;
    CPLChangeBatch *_incomingBatch;
    CPLEngineStore *_store;
    CPLChangeBatch *_expandedBatch;
    CPLPushChangeTasks *_pushChangeTasks;
    CPLChangeBatch *_diffedBatch;
    unsigned long long _ignoredRecordCount;
    NSDate *_now;
}

@property (nonatomic, readonly) CPLChangeBatch *incomingBatch;
@property (nonatomic, readonly) CPLEngineStore *store;
@property (nonatomic, readonly) CPLChangeBatch *expandedBatch;
@property (nonatomic, readonly) NSSet *unquarantinedRecordScopedIdentifiers;
@property (nonatomic, readonly) CPLPushChangeTasks *pushChangeTasks;
@property (nonatomic, readonly) _Bool hasPushChangeTasks;
@property (nonatomic, readonly) CPLChangeBatch *diffedBatch;
@property (nonatomic, readonly) NSArray *addedRecords;
@property (nonatomic, readonly) NSArray *updatedRecords;
@property (nonatomic, readonly) NSArray *deletedRecordScopedIdentifiers;
@property (nonatomic, readonly) NSDictionary *resourcesToUpload;
@property (nonatomic, readonly) unsigned long long ignoredRecordCount;
@property (nonatomic, readonly) _Bool diffedBatchCanLowerQuota;
@property (copy, nonatomic) NSDate *now;
@property (nonatomic, readonly) _Bool expandHasBeenSuccessful;
@property (nonatomic, readonly) _Bool diffHasBeenSuccessful;
@property (nonatomic, readonly) _Bool applyHasBeenSuccessful;

- (id)initWithIncomingBatch:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (_Bool)knowsClientRecordWithScopedIdentifier:(id)arg1;
- (id)_resourceIdentitiesFromChange:(id)arg1;
- (id)enqueuedOrStoredRecordWithLocalScopedIdentifier:(id)arg1;
- (id)resourceIdentitiesForRecordWithLocalScopedIdentifier:(id)arg1;
- (_Bool)checkScopeIdentifier:(id)arg1;
- (id)storedClientRecordWithLocalScopedIdentifier:(id)arg1;
- (_Bool)hasClientRecordWithLocalScopedIdentifier:(id)arg1;
- (id)storedCloudRecordWithLocalScopedIdentifier:(id)arg1;
- (_Bool)hasCloudRecordWithLocalScopedIdentifier:(id)arg1;
- (id)_realChangeFromChange:(id)arg1 comparedToStoredRecord:(id)arg2 changeType:(unsigned long long)arg3;
- (_Bool)computeExpandedBatchWithError:(id *)arg1;
- (_Bool)computeDiff;
- (void)enumerateDiffWithBlock:(CDUnknownBlockType)arg1;
- (id)deletedRecordIdentifiers;
- (_Bool)applyChangesToClientCacheWithError:(id *)arg1;
- (_Bool)shouldCancelSyncSessionTryingToUploadChange:(id)arg1;

@end
