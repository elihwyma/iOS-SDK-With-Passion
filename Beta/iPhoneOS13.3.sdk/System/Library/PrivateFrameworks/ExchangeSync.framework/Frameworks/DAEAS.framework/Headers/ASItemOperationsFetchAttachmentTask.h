/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSError, NSFileHandle, NSString;

@interface ASItemOperationsFetchAttachmentTask : ASTask

{
    NSString *_attachmentUUID;
    NSString *_attachmentName;
    NSString *_messageID;
    NSString *_localFileName;
    NSString *_attachmentContentType;
    unsigned long long _localFileLength;
    NSFileHandle *_localFileHandle;
    NSError *_writeAttachmentError;
}

@property (retain, nonatomic) NSString *attachmentUUID;
@property (retain, nonatomic) NSString *attachmentName;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSString *localFileName;
@property (retain, nonatomic) NSString *attachmentContentType;
@property (nonatomic) unsigned long long localFileLength;
@property (retain, nonatomic) NSFileHandle *localFileHandle;
@property (retain, nonatomic) NSError *writeAttachmentError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finishWithError:(id)arg1;
- (id)requestBody;
- (int)commandCode;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (_Bool)processContext:(id)arg1;
- (id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2;
- (id)initForMessageUUID:(id)arg1;
- (_Bool)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char *)arg5 dataLength:(int)arg6;

@end
