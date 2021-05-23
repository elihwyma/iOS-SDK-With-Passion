/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMailMessage, MFMimePart, NSData, NSString;

@interface MFRFC822AttachmentDataProvider : NSObject

{
    NSData *_messageData;
    MFMimePart *_parentPart;
    MFMailMessage *_message;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2;
- (void)fetchDataForAttachment:(id)arg1 consumer:(id)arg2 progress:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)messageForAttachment:(id)arg1;
- (id)fetchLocalDataForAttachment:(id)arg1;
- (id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2;
- (id)initWithMessageData:(id)arg1 parentPart:(id)arg2 managed:(_Bool)arg3;
- (id)initWithMessage:(id)arg1 parentPart:(id)arg2;
- (id)initWithMessage:(id)arg1 parentPart:(id)arg2 managed:(_Bool)arg3;

@end
