/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <CloudKit/CKDatabaseOperation.h>

@class CKRecordZoneID, CKServerChangeToken, NSArray, NSData, NSMutableDictionary;

@interface CKFetchRecordChangesOperation : CKDatabaseOperation

{
    _Bool _shouldFetchAssetContents;
    _Bool _fetchAllChanges;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _recordWithIDWasDeletedBlock;
    CDUnknownBlockType _fetchRecordChangesCompletionBlock;
    CDUnknownBlockType _serverChangeTokenFetchedBlock;
    CDUnknownBlockType _changeTokensUpdatedBlock;
    CKRecordZoneID *_recordZoneID;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned long long _resultsLimit;
    NSArray *_desiredKeys;
    CKServerChangeToken *_resultServerChangeToken;
    NSData *_resultClientChangeTokenData;
    long long _status;
    NSMutableDictionary *_recordErrors;
}

@property (retain, nonatomic) CKServerChangeToken *resultServerChangeToken;
@property (retain, nonatomic) NSData *resultClientChangeTokenData;
@property (nonatomic) long long status;
@property (nonatomic) _Bool shouldFetchAssetContents;
@property (nonatomic) _Bool fetchAllChanges;
@property (retain, nonatomic) NSMutableDictionary *recordErrors;
@property (copy, nonatomic) CDUnknownBlockType serverChangeTokenFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType changeTokensUpdatedBlock;
@property (copy, nonatomic) CKRecordZoneID *recordZoneID;
@property (copy, nonatomic) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;
@property (copy, nonatomic) NSArray *desiredKeys;
@property (copy, nonatomic) CDUnknownBlockType recordChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock;
@property (nonatomic, readonly) _Bool moreComing;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordChangesCompletionBlock;

- (id)init;
- (void)fillOutOperationInfo:(id)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (_Bool)hasCKOperationCallbacksSet;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id)arg1;
- (Class)operationInfoClass;
- (void)_handleCompletionCallback:(id)arg1;
- (long long)changeTypesFromSetCallbacks;
- (id)initWithRecordZoneID:(id)arg1 previousServerChangeToken:(id)arg2;

@end
