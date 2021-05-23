/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <IMAP/MFIMAPMessage.h>

@class MFMessageHeaders, NSData;

@interface MFIMAPMessageWithCache : MFIMAPMessage

{
    NSData *_messageData;
    MFMessageHeaders *_headers;
}

- (id)messageData;
- (void)setHeaders:(id)arg1;
- (id)headers;
- (_Bool)isMessageContentsLocallyAvailable;
- (void)setMessageData:(id)arg1 isPartial:(_Bool)arg2;
- (id)headersIfAvailable;
- (id)headerData;

@end
