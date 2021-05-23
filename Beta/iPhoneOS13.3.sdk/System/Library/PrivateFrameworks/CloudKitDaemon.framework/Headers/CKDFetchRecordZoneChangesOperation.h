/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDFetchBatchedRecordsOperation.h>

@class CKDFetchZoneChangesRequestOperationResult;

__attribute__((visibility("hidden")))
@interface CKDFetchRecordZoneChangesOperation : CKDFetchBatchedRecordsOperation

{
    _Bool _clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
    CDUnknownBlockType _recordChangedBlock;
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;
    long long _changeTypes;
    CKDFetchZoneChangesRequestOperationResult *_savedResult;
}

@property (nonatomic) long long changeTypes;
@property (retain, nonatomic) CKDFetchZoneChangesRequestOperationResult *savedResult;
@property (nonatomic) _Bool clientIsUsingLegacyCKFetchRecordChangesOperationAPI;
@property (copy, nonatomic) CDUnknownBlockType recordChangedBlock;
@property (copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock;

- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (id)pipeliningDescription;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(id)arg1;
- (id)analyticsPayload;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (void)_noteOperationBeginning;
- (void)_noteOperationFinishedBlockEnd;
- (void)_noteOperationEnding;

@end
