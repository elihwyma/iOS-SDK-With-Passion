/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASTask.h>

@class NSFileHandle, NSString;

@interface ASFetchAttachmentTask : ASTask

{
    NSString *_attachmentUUID;
    NSString *_attachmentName;
    NSString *_messageID;
    NSString *_localFileName;
    NSString *_attachmentContentType;
    unsigned long long _localFileLength;
    NSFileHandle *_localFileHandle;
}

@property (retain, nonatomic) NSString *attachmentUUID;
@property (retain, nonatomic) NSString *attachmentName;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSString *localFileName;
@property (retain, nonatomic) NSString *attachmentContentType;
@property (nonatomic) unsigned long long localFileLength;
@property (retain, nonatomic) NSFileHandle *localFileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)finishWithError:(id)arg1;
- (id)command;
- (id)requestBody;
- (int)commandCode;
- (_Bool)processContext:(id)arg1;
- (_Bool)shouldLogIncomingData;
- (id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2;
- (id)initForMessageUUID:(id)arg1;
- (id)parameterData;

@end
