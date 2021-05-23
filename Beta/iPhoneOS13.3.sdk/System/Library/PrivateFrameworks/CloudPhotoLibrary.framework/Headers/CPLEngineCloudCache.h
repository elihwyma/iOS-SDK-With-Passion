/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineCloudCache : CPLEngineStorage

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

- (unsigned long long)scopeType;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;
- (_Bool)addRecord:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (_Bool)updateFinalRecord:(id)arg1 confirmed:(_Bool)arg2 error:(id *)arg3;
- (_Bool)updateStagedRecord:(id)arg1 error:(id *)arg2;
- (_Bool)applyBatch:(id)arg1 isFinal:(_Bool)arg2 direction:(unsigned long long)arg3 withError:(id *)arg4;
- (_Bool)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id *)arg3;
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(_Bool)arg3 withError:(id *)arg4;
- (_Bool)confirmAllRecordsWithError:(id *)arg1;
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;
- (id)recordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;
- (id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(_Bool *)arg2 isStaged:(_Bool *)arg3;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;
- (_Bool)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)discardStagedChangesWithScopeFilter:(id)arg1 error:(id *)arg2;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id *)arg3;
- (void)getCommittedRecord:(id *)arg1 stagedRecord:(id *)arg2 forScopedIdentifier:(id)arg3;
- (id)recordsOfClass:(Class)arg1 isFinal:(_Bool)arg2;
- (id)allRecordsIsFinal:(_Bool)arg1;

@end
