/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDFetchBatchedRecordsOperation.h>

@class NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDFetchArchivedRecordsOperation : CKDFetchBatchedRecordsOperation

{
    CDUnknownBlockType _recordFetchedBlock;
    CDUnknownBlockType _serverChangeTokenUpdatedBlock;
}

@property (copy, nonatomic) CDUnknownBlockType recordFetchedBlock;
@property (copy, nonatomic) CDUnknownBlockType serverChangeTokenUpdatedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *pipeliningDescription;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)_noteCompletedURLRequest:(id)arg1 withSchedulerInfo:(id)arg2;
- (void)_noteChangedRecordWithID:(id)arg1 recordType:(id)arg2 record:(id)arg3 error:(id)arg4;
- (void)_noteDeletedRecordWithID:(id)arg1 recordType:(id)arg2;
- (id)_createAndConfigureURLRequestForZoneIDs:(id)arg1 optionsByZoneID:(id)arg2;
- (id)_optionsForZonesWithPendingChangesAfterRequest:(id)arg1;
- (void)_noteOperationBeginning;
- (void)_noteOperationFinishedBlockEnd;
- (void)_noteOperationEnding;

@end
