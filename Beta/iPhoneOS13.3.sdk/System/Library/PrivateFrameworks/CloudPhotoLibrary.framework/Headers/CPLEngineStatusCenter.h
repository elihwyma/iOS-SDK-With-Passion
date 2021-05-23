/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface CPLEngineStatusCenter : CPLEngineStorage

{
    unsigned long long _currentGeneration;
    NSDate *_transactionStartDate;
    NSMutableSet *_persistedScopedIdentifiers;
    NSMutableDictionary *_pendingTransientStatuses;
    NSMutableSet *_pendingDeletedTransientStatuses;
    NSMutableDictionary *_transientStatuses;
}

@property (nonatomic, readonly) _Bool hasStatusChanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CPLPlatformObject *platformObject;

- (id)status;
- (unsigned long long)scopeType;
- (id)initWithEngineStore:(id)arg1 name:(id)arg2;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;
- (_Bool)notifyStatusForRecordHasChanged:(id)arg1 persist:(_Bool)arg2 error:(id *)arg3;
- (id)statusChanges;
- (id)_allScopedIdentifierInCollection:(id)arg1 withScopeIdentifier:(id)arg2;
- (void)_removeStatusesInDictionary:(id)arg1 withScopeIdentifier:(id)arg2;
- (void)_removeScopedIdentifiersFromSet:(id)arg1 withScopeIdentifier:(id)arg2;
- (void)resetTransientStatusesWithScopeIdentifier:(id)arg1;
- (void)resetAllTransientStatuses;
- (id)statusesForRecordsWithScopedIdentifiers:(id)arg1;
- (id)statusesForRecordsWithIdentifiers:(id)arg1;
- (_Bool)acknowledgeChangedStatuses:(id)arg1 error:(id *)arg2;
- (_Bool)discardNotificationForRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;
- (void)_fillStatus:(id)arg1 withClientCacheRecord:(id)arg2 cloudCacheRecord:(id)arg3 isConfirmed:(_Bool)arg4 isStaged:(_Bool)arg5 isInIDMapping:(_Bool)arg6;
- (void)_fillStatus:(id)arg1;
- (id)_statusFromCachesWithRecordScopedIdentifier:(id)arg1;
- (id)recordForStatusWithScopedIdentifier:(id)arg1;
- (id)allStatusChanges;

@end
