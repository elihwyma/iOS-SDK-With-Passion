/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDMessageChangeManager.h>

@class MFMailMessageLibrary, NSString;

@interface MFMessageChangeManager_iOS : EDMessageChangeManager

{
    MFMailMessageLibrary *_library;
}

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)moveMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(_Bool)arg3;
- (id)addNewMessages:(id)arg1 mailboxURL:(id)arg2 userInitiated:(_Bool)arg3;
- (void)willStartPersistenceDidAddMessages:(id)arg1;
- (void)didFinishPersistenceDidAddMessages:(id)arg1;
- (id)messageForDatabaseID:(long long)arg1;
- (long long)mailboxDatabaseIDForURL:(id)arg1;
- (id)copyMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(_Bool)arg3;
- (id)accountForMailboxURL:(id)arg1;
- (id)messagesForRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (id)iterateMessagesInMailboxURLs:(id)arg1 excludingMessages:(id)arg2 batchSize:(unsigned long long)arg3 returnMessagesForFlagChange:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (_Bool)persistNewMessages:(id)arg1 mailboxURL:(id)arg2 oldMessagesByNewMessage:(id)arg3 fromSyncing:(_Bool)arg4;
- (void)deletePersistedMessages:(id)arg1;
- (_Bool)haveCompleteMIMEForMessage:(id)arg1;
- (id)applyFlagChange:(id)arg1 toMessagesInDatabase:(id)arg2;
- (void)resetStatusCountsForMailboxWithURL:(id)arg1;
- (id)addLabels:(id)arg1 removeLabels:(id)arg2 toMessagesInDatabase:(id)arg3;
- (void)setRemoteID:(id)arg1 onMessageWithDatabaseID:(long long)arg2;
- (void)setData:(id)arg1 onMessage:(id)arg2;
- (void)checkForNewActionsInMailboxID:(long long)arg1;
- (void)actionHasChangedAccount:(id)arg1;
- (void)displayErrorForTransferAction:(id)arg1 withResults:(id)arg2;
- (void)messageWasAppended:(id)arg1;
- (_Bool)mailboxIsAllMail:(id)arg1;
- (_Bool)mailboxPartOfAllMail:(id)arg1;
- (id)initWithLibrary:(id)arg1 database:(id)arg2 localActionPersistence:(id)arg3 serverMessagePersistenceFactory:(id)arg4 hookResponder:(id)arg5;
- (id)messagesToJournalForMessages:(id)arg1 inMailbox:(id)arg2;

@end
