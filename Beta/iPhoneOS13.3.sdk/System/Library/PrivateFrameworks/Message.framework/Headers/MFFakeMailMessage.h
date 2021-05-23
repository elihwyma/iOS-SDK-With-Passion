/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFMailMessage.h>

@class MFMailboxUid, MFMessageHeaders, MailAccount, NSString;

@interface MFFakeMailMessage : MFMailMessage

{
    NSString *_persistentID;
    MFMailboxUid *_mailbox;
    MailAccount *_account;
    MFMessageHeaders *_fakeHeaders;
}

@property (retain, nonatomic) MFMessageHeaders *fakeHeaders;
@property (retain, nonatomic) MFMessageHeaders *headers;
@property (retain, nonatomic) MailAccount *account;
@property (retain, nonatomic) MFMailboxUid *mailbox;

- (id)init;
- (id)persistentID;
- (long long)mailboxID;

@end
