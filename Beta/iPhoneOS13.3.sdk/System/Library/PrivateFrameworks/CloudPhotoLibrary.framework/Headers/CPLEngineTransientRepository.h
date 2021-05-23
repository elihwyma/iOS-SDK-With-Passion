/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, NSMutableArray, NSString;

@interface CPLEngineTransientRepository : CPLEngineStorage

{
    unsigned long long _popState;
    NSMutableArray *_remainingClassesToBePopped;
    unsigned long long _maximumCountOfRecordsInBatches;
}

@property (nonatomic) unsigned long long maximumCountOfRecordsInBatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

+ (id)orderedClassesForChangesForLargeSync;
+ (id)orderedClassesForDelete;
+ (id)orderedClassesForChanges;

- (_Bool)openWithError:(id *)arg1;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (id)changeWithScopedIdentifier:(id)arg1;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;
- (unsigned long long)countOfAssetChanges;
- (_Bool)_appendBatchToStorage:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;
- (_Bool)appendBatch:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;
- (_Bool)prepareForMinglingWithScopeFilter:(id)arg1 error:(id *)arg2;
- (_Bool)_popChangeBatchOfDeletedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;
- (_Bool)_popChangeBatchOfChangedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 stop:(_Bool *)arg3 error:(id *)arg4;
- (_Bool)hasMingledRecordsForScopeWithIdentifier:(id)arg1;
- (_Bool)hasUnmingledRecordsForScopeWithIdentifier:(id)arg1;
- (_Bool)resetMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id *)arg2;
- (_Bool)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfUnmingledRecords;
- (_Bool)resetTransientRepositoryForScopeWithIdentifier:(id)arg1 error:(id *)arg2;

@end
