/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDActivityPersistence, EDConversationPersistence, EDGmailLabelPersistence, EDLocalActionPersistence, EDMailboxPersistence, EDMessageChangeManager, EDMessagePersistence, EDPersistenceDatabase, EDPersistenceHookRegistry, EDSearchableIndexManager, EDServerMessagePersistenceFactory, EDThreadPersistence, EDVIPManager, EMBlockedSenderManager, NSString;

@protocol EDAccountsProvider, EDRemoteSearchProvider, EMUserProfileProvider;

@interface EDPersistence : NSObject

{
    EDGmailLabelPersistence *_gmailLabelPersistence;
    EDMailboxPersistence *_mailboxPersistence;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    id <EDAccountsProvider> _accountsProvider;
    id <EMUserProfileProvider> _userProfileProvider;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EDVIPManager *_vipManager;
    EMBlockedSenderManager *_blockedSenderManager;
    EDActivityPersistence *_activityPersistence;
}

@property (retain, nonatomic) id <EDAccountsProvider> accountsProvider;
@property (readonly) EDPersistenceDatabase *database;
@property (readonly) EDConversationPersistence *conversationPersistence;
@property (readonly) EDLocalActionPersistence *localActionPersistence;
@property (readonly) EDServerMessagePersistenceFactory *serverMessagePersistenceFactory;
@property (readonly) EDGmailLabelPersistence *gmailLabelPersistence;
@property (readonly) EDThreadPersistence *threadPersistence;
@property (nonatomic, readonly) EDMailboxPersistence *mailboxPersistence;
@property (readonly) EDMessagePersistence *messagePersistence;
@property (readonly) EDMessageChangeManager *messageChangeManager;
@property (readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) id <EMUserProfileProvider> userProfileProvider;
@property (readonly) EDSearchableIndexManager *searchableIndexManager;
@property (nonatomic, readonly) id <EDRemoteSearchProvider> remoteSearchProvider;
@property (readonly) EDVIPManager *vipManager;
@property (nonatomic, readonly) EMBlockedSenderManager *blockedSenderManager;
@property (readonly) EDActivityPersistence *activityPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)init;
- (void)scheduleRecurringActivity;
- (id)initWithVIPManager:(id)arg1;
- (void)_commonInitWithVIPManager:(id)arg1;

@end
