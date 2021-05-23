/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFMailMessage.h>

@class DAMailMessage, MFMailboxUid, MFMessage, NSString;

@interface MFDAMessage : MFMailMessage

{
    MFMessage *_rfc822CreatedMessage;
    MFMailboxUid *_mailbox;
    NSString *_externalConversationID;
    DAMailMessage *_DAMailMessage;
}

@property (nonatomic, readonly) DAMailMessage *DAMailMessage;

- (id)messageBody;
- (unsigned long long)messageSize;
- (id)headers;
- (id)mailbox;
- (id)remoteID;
- (unsigned long long)messageFlags;
- (id)headersIfAvailable;
- (id)remoteMailboxURL;
- (id)externalConversationID;
- (_Bool)messageData:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (_Bool)messageDataHolder:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (id)initWithDAMailMessage:(id)arg1 mailbox:(id)arg2;

@end
