/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

@class CPLPlatformObject, CPLRejectedRecords, NSMutableArray, NSString;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage

{
    CPLRejectedRecords *_rejectedRecords;
    unsigned long long _rejectedCount;
    _Bool _rejectedRecordsHasChanges;
    CPLRejectedRecords *_newRejectedRecords;
    NSMutableArray *_quarantineMessages;
    unsigned long long _newRejectedCount;
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
- (_Bool)addQuarantinedRecordsWithScopedIdentifier:(id)arg1 reason:(id)arg2 error:(id *)arg3;
- (_Bool)removeQuarantinedRecordsWithScopedIdentifier:(id)arg1 notify:(_Bool)arg2 error:(id *)arg3;
- (_Bool)isRecordWithScopedIdentifierQuarantined:(id)arg1;
- (unsigned long long)countOfQuarantinedRecords;
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2;
- (_Bool)bumpRejectedRecords:(id)arg1 error:(id *)arg2;
- (_Bool)resetRejectedRecordsWithError:(id *)arg1;

@end
