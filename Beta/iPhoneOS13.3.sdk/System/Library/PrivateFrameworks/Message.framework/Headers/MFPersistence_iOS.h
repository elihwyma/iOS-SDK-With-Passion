/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <EmailDaemon/EDPersistence.h>

@class EDConversationPersistence, EDLocalActionPersistence, EDMailboxPersistence, EDMessageChangeManager, EDMessagePersistence, EDPersistenceDatabase, EDSearchableIndexManager, EDServerMessagePersistenceFactory, EDThreadPersistence, MFMailMessageLibrary, NSString;

@protocol EDAccountsProvider, EDRemoteSearchProvider, EMUserProfileProvider;

@interface MFPersistence_iOS : EDPersistence

{
    id <EDAccountsProvider> _accountsProvider;
    EDConversationPersistence *_conversationPersistence;
    EDPersistenceDatabase *_database;
    EDLocalActionPersistence *_localActionPersistence;
    EDMailboxPersistence *_mailboxPersistence;
    EDMessageChangeManager *_messageChangeManager;
    EDMessagePersistence *_messagePersistence;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EDSearchableIndexManager *_searchableIndexManager;
    EDServerMessagePersistenceFactory *_serverMessagePersistenceFactory;
    EDThreadPersistence *_threadPersistence;
    id <EMUserProfileProvider> _userProfileProvider;
    MFMailMessageLibrary *_library;
}

@property (weak, nonatomic) MFMailMessageLibrary *library;
@property (retain, nonatomic) EDMailboxPersistence *mailboxPersistence;
@property (retain, nonatomic) id <EDAccountsProvider> accountsProvider;
@property (retain, nonatomic) id <EMUserProfileProvider> userProfileProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)database;
- (id)messageChangeManager;
- (id)initWithPath:(id)arg1 inMemoryIdentifier:(id)arg2 library:(id)arg3 propertyMapper:(id)arg4;
- (id)searchableIndexManager;
- (id)messagePersistence;
- (void)scheduleRecurringActivity;
- (id)localActionPersistence;
- (void)_configureSearchableIndexManagerIfNecessary;
- (void)setUpWithMailboxProvider:(id)arg1 remoteSearchProvider:(id)arg2;
- (id)conversationPersistence;
- (id)remoteSearchProvider;
- (id)serverMessagePersistenceFactory;
- (id)threadPersistence;

@end
