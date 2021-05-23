/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/ESDaemonSupport.framework/ESDaemonSupport
 */

#import <ESDaemonSupport/ESDClientDelegate.h>

@class NSString;

@interface ESDClientAttachmentDownloadDelegate : ESDClientDelegate

{
    NSString *_attachmentUUID;
    id _downloadID;
}

@property (retain, nonatomic) NSString *attachmentUUID;
@property (retain, nonatomic) id downloadID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)finishWithError:(id)arg1;
- (void)downloadFinishedError:(id)arg1;
- (id)initWithAccountID:(id)arg1 attachmentUUID:(id)arg2 client:(id)arg3;
- (void)beginDownload;
- (void)downloadProgressDownloadedByteCount:(long long)arg1 totalByteCount:(long long)arg2;

@end
