/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/MFLibraryMessage.h>

@class MFMailMessageLibrary, MFMailboxUid, MailAccount;

@interface MFFakeLibraryMessage : MFLibraryMessage

{
    MFMailboxUid *_mailboxUid;
    MFMailMessageLibrary *_library;
    MailAccount *_account;
}

+ (id)messageWithRFC822Data:(id)arg1 mailboxUid:(id)arg2 library:(id)arg3 account:(id)arg4;
+ (id)messageWithRFC822Data:(id)arg1 mailboxUid:(id)arg2 library:(id)arg3;

- (id)account;
- (id)library;
- (id)mailbox;
- (id)initWithMailboxUid:(id)arg1 library:(id)arg2 account:(id)arg3;

@end
