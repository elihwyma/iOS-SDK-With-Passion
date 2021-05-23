/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

__attribute__((visibility("hidden")))
@interface BRCDownloadContentsBatchOperation : BRCTransferBatchOperation

{
    CDUnknownBlockType _perDownloadCompletionBlock;
}

@property (copy) CDUnknownBlockType perDownloadCompletionBlock;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithSyncContext:(id)arg1;
- (void)addDownload:(id)arg1;
- (id)createActivity;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)mainWithTransfers:(id)arg1;
- (id)actionPrettyName;
- (id)transferredObjectsPrettyName;

@end
