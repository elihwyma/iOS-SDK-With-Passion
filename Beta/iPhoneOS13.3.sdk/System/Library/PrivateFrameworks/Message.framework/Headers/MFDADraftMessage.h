/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <DataAccess/DAMailMessage.h>

@class MFMailMessage, NSString;

@interface MFDADraftMessage : DAMailMessage

{
    MFMailMessage *_message;
    unsigned long long _clientID;
    NSString *_bodyData;
}

- (id)date;
- (id)to;
- (id)from;
- (id)subject;
- (id)body;
- (void)setClientID:(unsigned long long)arg1;
- (id)clientID;
- (id)serverID;
- (id)cc;
- (id)bcc;
- (id)messageIDHeader;
- (id)initWithMailMessage:(id)arg1 clientID:(unsigned long long)arg2;
- (id)replyTo;
- (int)bodyType;

@end
