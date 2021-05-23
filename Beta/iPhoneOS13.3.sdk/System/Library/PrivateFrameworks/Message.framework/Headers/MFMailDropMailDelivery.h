/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFOutgoingMessageDelivery.h>

@class EMMailDropMetadata, NSArray;

@interface MFMailDropMailDelivery : MFOutgoingMessageDelivery

{
    NSArray *_attachments;
    EMMailDropMetadata *_imageArchiveMetadata;
    long long _mailDropState;
}

@property (retain, nonatomic) NSArray *attachments;
@property (retain, nonatomic) EMMailDropMetadata *imageArchiveMetadata;
@property (nonatomic) long long mailDropState;

+ (id)_mailDropZone;

- (id)_attachmentManager;
- (long long)_processAttachments;
- (id)deliverSynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (id)ckDatabase;
- (_Bool)_uploadAttachmentsViaCloudKit:(id)arg1 zone:(id)arg2 records:(id)arg3 zippedPhotos:(id)arg4 attachmentRecords:(id)arg5 images:(id)arg6;
- (id)scaledImages:(id)arg1;
- (void)_recordZoneIDInDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)updateMessageWithAttachmentsSynchronously;
- (id)publishRecord:(id)arg1 database:(id)arg2 attachmentRecords:(id)arg3 images:(id)arg4 allowsCellularAccess:(_Bool)arg5;

@end
