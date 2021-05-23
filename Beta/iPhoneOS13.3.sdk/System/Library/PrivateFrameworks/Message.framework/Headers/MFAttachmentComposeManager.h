/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFAttachmentManager.h>

@class MFInvocationQueue, NSMutableArray, NSObject;

@protocol OS_dispatch_queue;

@interface MFAttachmentComposeManager : MFAttachmentManager

{
    MFInvocationQueue *_defaultDownloadQueue;
    NSMutableArray *_composeAttachmentURLs;
    NSObject<OS_dispatch_queue> *_composeAttachmentsQueue;
}

- (id)init;
- (void)_callProgressBlockForAttachmentURL:(id)arg1 withBytes:(long long)arg2 expectedSize:(long long)arg3;
- (void)_fetchInvocationCallUsingBlock:(CDUnknownBlockType)arg1;
- (id)_queueForAttachment:(id)arg1;
- (id)attachmentForCID:(id)arg1;
- (id)attachmentForData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3 contentID:(id)arg4 context:(id)arg5;
- (id)_composeAttachmentDataProviderForContext:(id)arg1;
- (id)_fetchDataForAttachment:(id)arg1 withProvider:(id)arg2 request:(id)arg3 syncLock:(id *)arg4;
- (id)attachmentsForContext:(id)arg1;
- (void)loadAttachmentURL:(id)arg1 forContextID:(id)arg2;
- (_Bool)updateAttachment:(id)arg1 withNewData:(id)arg2;
- (void)removeAttachmentForURL:(id)arg1;
- (void)recordPasteboardAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;
- (void)recordUndoAttachmentsForURLs:(id)arg1 forContextID:(id)arg2;

@end
