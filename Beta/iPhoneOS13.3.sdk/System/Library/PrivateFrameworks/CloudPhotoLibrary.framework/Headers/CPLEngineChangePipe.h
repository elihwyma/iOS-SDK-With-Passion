/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineChangePipe : CPLEngineStorage

@property (nonatomic, readonly) unsigned long long countOfQueuedBatches;
@property (nonatomic, readonly, getter=isEmpty) _Bool empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

- (unsigned long long)scopeType;
- (id)nextBatch;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;
- (_Bool)hasQueuedBatches;
- (_Bool)appendChangeBatch:(id)arg1 error:(id *)arg2;
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (_Bool)popNextBatchWithError:(id *)arg1;
- (_Bool)hasSomeChangeInScopesWithIdentifiers:(id)arg1;
- (_Bool)hasSomeChangeWithScopeFilter:(id)arg1;
- (_Bool)deleteAllChangeBatchesWithError:(id *)arg1;
- (_Bool)deleteAllChangesWithScopeFilter:(id)arg1 error:(id *)arg2;
- (_Bool)compactChangeBatchesWithError:(id *)arg1;
- (id)popAllChangeBatchesWithError:(id *)arg1;
- (id)allChangeBatches;

@end
