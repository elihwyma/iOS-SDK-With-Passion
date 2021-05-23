/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

@interface ExchangeAccount

+ (id)accountTypeString;

- (Class)connectionClass;
- (_Bool)shouldFetchACEDBInfoForError:(id)arg1;
- (id)_defaultSpecialMailboxNameForType:(int)arg1;
- (_Bool)shouldExpungeMessagesOnDelete;
- (void)_filterMailboxList:(id)arg1 forMailboxWithPath:(id)arg2 iisServer:(id)arg3;
- (_Bool)_syncOnly_defaultValueForShouldStoreJunkOnServer;
- (_Bool)storeDraftsOnServer;
- (_Bool)storeSentMessagesOnServer;
- (void)filterMailboxList:(id)arg1 forMailbox:(id)arg2 options:(int)arg3;

@end
