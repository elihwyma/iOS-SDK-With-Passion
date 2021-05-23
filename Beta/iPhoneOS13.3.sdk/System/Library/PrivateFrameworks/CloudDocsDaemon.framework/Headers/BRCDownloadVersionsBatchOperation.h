/*
 Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BRCDownloadVersionsBatchOperation : BRCTransferBatchOperation

{
    NSMutableDictionary *_readers;
    CDUnknownBlockType _perDownloadCompletionBlock;
}

@property (copy) CDUnknownBlockType perDownloadCompletionBlock;

- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)addDownload:(id)arg1;
- (id)createActivity;
- (id)initWithSyncContext:(id)arg1 forNonLocalVersion:(_Bool)arg2;
- (void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2;
- (void)mainWithTransfers:(id)arg1;
- (id)actionPrettyName;
- (void)addReaderID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelReaderID:(id)arg1;
- (id)transferredObjectsPrettyName;

@end
