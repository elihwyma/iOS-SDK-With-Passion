/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDLocalActionPersistence, EDPersistenceDatabase, EDServerMessagePersistenceFactory, NSString;

@protocol EDMessageChangeHookResponder, OS_dispatch_queue;

@interface EDMessageChangeManager : NSObject

{
    EDPersistenceDatabase *_database;
    EDLocalActionPersistence *_localActionPersistence;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    NSObject<OS_dispatch_queue> *_markAllWorkQueue;
    id <EDMessageChangeHookResponder> _hookResponder;
}

@property (nonatomic, readonly) EDPersistenceDatabase *database;
@property (nonatomic, readonly) EDLocalActionPersistence *localActionPersistence;
@property (nonatomic, readonly) EDServerMessagePersistenceFactory *serverMessagePersistenceFactory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *markAllWorkQueue;
@property (weak, nonatomic, readonly) id <EDMessageChangeHookResponder> hookResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)signpostLog;

- (id)init;
- (unsigned long long)signpostID;
- (id)moveMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(_Bool)arg3;
- (void)deleteMessages:(id)arg1;
- (id)applyFlagChange:(id)arg1 toMessages:(id)arg2;
- (id)addNewMessages:(id)arg1 mailboxURL:(id)arg2 userInitiated:(_Bool)arg3;
- (void)willStartPersistenceDidAddMessages:(id)arg1;
- (void)didFinishPersistenceDidAddMessages:(id)arg1;
- (void)reflectFlagChanges:(id)arg1 forMessages:(id)arg2;
- (void)reflectDeletedMessages:(id)arg1;
- (_Bool)persistResults:(id)arg1 forAction:(id)arg2;
- (id)initWithDatabase:(id)arg1 localActionPersistence:(id)arg2 serverMessagePersistenceFactory:(id)arg3 hookResponder:(id)arg4;
- (id)copyMessages:(id)arg1 destinationMailboxURL:(id)arg2 userInitiated:(_Bool)arg3;
- (_Bool)mailboxURLIsInRemoteAccount:(id)arg1;
- (_Bool)mailboxURL:(id)arg1 isInSameAccountAsMailboxURL:(id)arg2;
- (id)accountForMailboxURL:(id)arg1;
- (id)messagesToJournalForMessages:(id)arg1 inMailbox:(id)arg2;
- (id)reflectNewMessages:(id)arg1 mailboxURL:(id)arg2;
- (void)reflectDeletedMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (void)reflectFlagChanges:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 mailboxURL:(id)arg3;
- (_Bool)_hookResponderRespondsToRequiredMethods:(id)arg1;
- (id)transferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(_Bool)arg4;
- (void)transferMessages:(id)arg1 transferType:(long long)arg2 destinationMailboxURL:(id)arg3 userInitiated:(_Bool)arg4 oldMessagesByNewMessage:(id)arg5;
- (void)_invokeHookResponderForDeletedMessages:(id)arg1 generationWindow:(id)arg2;
- (void)transferAllMessagesFromMailboxes:(id)arg1 exceptMessages:(id)arg2 transferType:(long long)arg3 destinationMailboxURL:(id)arg4 userInitiated:(_Bool)arg5;
- (_Bool)_needToStoreServerMessagesForMailboxURL:(id)arg1;
- (void)_reflectFlagChanges:(id)arg1 messages:(id)arg2 remoteIDs:(id)arg3 mailboxURL:(id)arg4;
- (_Bool)_persistResults:(id)arg1 forTransferAction:(id)arg2;
- (_Bool)_persistResults:(id)arg1 forFlagChangeAction:(id)arg2;
- (_Bool)_persistResults:(id)arg1 forLabelChangeAction:(id)arg2;
- (void)_resetLocalLabelsToServerLabelsForMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (void)_resetLocalFlagsToServerFlagsForMessagesWithRemoteIDs:(id)arg1 mailboxURL:(id)arg2;
- (void)_handleFailedCopyItems:(id)arg1 transferAction:(id)arg2 generationWindow:(id)arg3;
- (void)_handleFailedDownload:(id)arg1 generationWindow:(id)arg2;
- (void)_storeServerMessages:(id)arg1 mailboxURL:(id)arg2 generationWindow:(id)arg3;
- (id)_handleDuplicateServerMessage:(id)arg1 serverMessagePersistence:(id)arg2;
- (void)deleteAllMessageFromMailboxes:(id)arg1 exceptMessages:(id)arg2;
- (void)applyFlagChange:(id)arg1 toAllMessagesFromMailboxes:(id)arg2 exceptMessages:(id)arg3;
- (id)addLabels:(id)arg1 removeLabels:(id)arg2 forMessages:(id)arg3;
- (void)reflectAllMessagesDeletedInMailboxURL:(id)arg1;
- (void)reflectAddedLabels:(id)arg1 removedLabels:(id)arg2 forMessagesWithRemoteIDs:(id)arg3 mailboxURL:(id)arg4;

@end
