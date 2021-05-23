/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, NSMutableDictionary, NSString;

@interface CPLEngineRemappedDeletes : CPLEngineStorage

{
    NSMutableDictionary *_perTransactionRemappedScopedIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

- (unsigned long long)scopeType;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (void)scheduleDeleteForRemappedRecordWithScopedIdentifier:(id)arg1 realScopedIdentifier:(id)arg2 asap:(_Bool)arg3;
- (void)discardDeleteForRemappedRecordWithScopedIdentifier:(id)arg1;
- (id)_fixupRemappedDeletesAndReturnBestCloudScopedIdentifierFromRemappedScopedIdentifiers:(id)arg1 fallback:(id)arg2;
- (id)realScopedIdentifierForRemappedScopedIdentifier:(id)arg1;

@end
