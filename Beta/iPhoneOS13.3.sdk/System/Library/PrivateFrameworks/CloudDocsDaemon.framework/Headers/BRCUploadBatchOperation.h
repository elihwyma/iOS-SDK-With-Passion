/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class BRCClientZone;

__attribute__((visibility("hidden")))
@interface BRCUploadBatchOperation : BRCTransferBatchOperation

{
    BRCClientZone *_clientZone;
    CDUnknownBlockType _perUploadCompletionBlock;
}

@property (copy) CDUnknownBlockType perUploadCompletionBlock;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)createActivity;
- (void)_uploadRecordsByID:(id)arg1;
- (id)initWithSyncContext:(id)arg1 clientZone:(id)arg2;
- (void)addItem:(id)arg1 stageID:(id)arg2 record:(id)arg3 transferSize:(unsigned long long)arg4;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)mainWithTransfers:(id)arg1;
- (id)actionPrettyName;

@end
