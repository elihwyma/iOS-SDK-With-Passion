/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MessageLegacy/MFMailMessage.h>

@class MFMessageBody, MFMutableMessageHeaders;

@interface MFOutgoingMessage : MFMailMessage

{
    MFMessageBody *_messageBody;
    MFMutableMessageHeaders *_messageHeaders;
}

- (void)dealloc;
- (id)messageBody;
- (void)setMessageBody:(id)arg1;
- (id)messageData;
- (unsigned long long)messageSize;
- (id)headers;
- (id)messageDataHolder;
- (id)messageStore;
- (id)headersIfAvailable;
- (void)setMutableHeaders:(id)arg1;
- (id)mutableHeaders;
- (id)messageBodyIfAvailable;
- (_Bool)messageData:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;
- (_Bool)messageDataHolder:(id *)arg1 messageSize:(unsigned long long *)arg2 isComplete:(_Bool *)arg3 downloadIfNecessary:(_Bool)arg4;

@end
