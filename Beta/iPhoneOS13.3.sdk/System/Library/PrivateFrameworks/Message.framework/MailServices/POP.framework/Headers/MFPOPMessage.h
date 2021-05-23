/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
 */

#import <Message/MFMailMessage.h>

@class NSData, NSString;

@interface MFPOPMessage : MFMailMessage

{
    NSData *_messageData;
    _Bool _messageDataIsComplete;
    unsigned long long _size;
    NSString *_accountURL;
    long long _messageNumber;
    NSString *_messageID;
}

@property (nonatomic) long long messageNumber;
@property (retain, nonatomic) NSData *messageData;
@property (copy, nonatomic) NSString *messageID;

- (unsigned long long)messageSize;
- (void)setMessageSize:(unsigned long long)arg1;
- (id)headers;
- (id)messageDataHolder;
- (id)originalMailboxURL;
- (id)headersIfAvailable;
- (id)remoteMailboxURL;
- (_Bool)messageData:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (_Bool)messageDataHolder:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (void)setMessageData:(id)arg1 isComplete:(_Bool)arg2;
- (void)setAccountURL:(id)arg1;

@end
