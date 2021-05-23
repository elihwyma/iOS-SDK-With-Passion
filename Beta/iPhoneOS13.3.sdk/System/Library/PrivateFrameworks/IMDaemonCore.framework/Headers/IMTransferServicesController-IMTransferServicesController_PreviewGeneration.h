/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <IMTransferServices/IMTransferServicesController.h>

@interface IMTransferServicesController (IMTransferServicesController_PreviewGeneration)

- (id)transferServicesController;
- (void)generatePreviewForTransfer:(id)arg1 attachmentPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)receiveFileTransfer:(id)arg1 transferGUID:(id)arg2 topic:(id)arg3 path:(id)arg4 requestURLString:(id)arg5 ownerID:(id)arg6 signature:(id)arg7 decryptionKey:(id)arg8 fileSize:(unsigned long long)arg9 generatePreview:(_Bool)arg10 progressBlock:(CDUnknownBlockType)arg11 completionBlock:(CDUnknownBlockType)arg12;
- (_Bool)failTransfersOnPreviewGenerationFailure;

@end
