/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MessageLegacy/MFMailMessage.h>

@class MFMailboxUid, MFMessageHeaders, MailAccount;

@interface MFFakeMailMessage : MFMailMessage

{
    MFMailboxUid *_mailbox;
    MFMessageHeaders *_headers;
    MailAccount *_account;
}

@property (retain, nonatomic) MFMessageHeaders *headers;
@property (retain, nonatomic) MailAccount *account;
@property (retain, nonatomic) MFMailboxUid *mailbox;

@end
