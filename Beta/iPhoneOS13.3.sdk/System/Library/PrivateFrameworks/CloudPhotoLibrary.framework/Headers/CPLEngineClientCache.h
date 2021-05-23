/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, NSArray, NSString;

@interface CPLEngineClientCache : CPLEngineStorage

{
    NSArray *__lastModifiedProperties;
}

@property (copy, setter=_setLastModifiedProperties:) NSArray *_lastModifiedProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

- (id)status;
- (unsigned long long)scopeType;
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;
- (id)statusDictionary;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 error:(id *)arg3;
- (id)recordWithScopedIdentifier:(id)arg1;
- (_Bool)updateRecord:(id)arg1 error:(id *)arg2;
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (id)_relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1;
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (_Bool)hasRecordWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (unsigned long long)countOfRecordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;
- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id *)arg3;
- (_Bool)applyBatch:(id)arg1 direction:(unsigned long long)arg2 withError:(id *)arg3;
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 recordClass:(Class *)arg3 error:(id *)arg4;
- (void)fillRelatedIdentifiersInChange:(id)arg1;

@end
