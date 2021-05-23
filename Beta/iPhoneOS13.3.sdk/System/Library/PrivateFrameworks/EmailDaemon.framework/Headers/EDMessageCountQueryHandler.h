/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

#import <EmailDaemon/Swift-Protocol.h>

@class EDMessagePersistence, EDMessageQueryEvaluator, EDPersistenceHookRegistry, EDUpdateThrottler, EFCancelationToken, EFQuery, EMMailboxScope, EMObjectID, NSMutableDictionary, NSMutableSet, NSPredicate, NSString;

@protocol EMMessageRepositoryCountQueryObserver_xpc;

@interface EDMessageCountQueryHandler : NSObject <Swift>

{
    NSMutableDictionary *_serverCounts;
    NSMutableSet *_mailboxesBeingSynced;
    long long _resyncDatabaseGeneration;
    EMObjectID *_mailboxObserverID;
    NSMutableSet *_seenMessageIDs;
    NSMutableSet *_newMessageIDs;
    struct os_unfair_lock_s _seenMessageIDsLock;
    _Atomic unsigned long long _recalculationPending;
    struct EFAtomicObject _atomicQueryDescription;
    struct EFAtomicObject _atomicMailboxScopeDescription;
    EFQuery *_query;
    EFQuery *_expandedQuery;
    NSPredicate *_predicateIgnoringFlags;
    EMMailboxScope *_serverCountMailboxScope;
    EDMessageQueryEvaluator *_queryEvaluator;
    id <EMMessageRepositoryCountQueryObserver_xpc> _resultsObserver;
    EDMessagePersistence *_messagePersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    EFCancelationToken *_cancelationToken;
    EDUpdateThrottler *_updateThrottler;
    NSString *_pendingFlagChangesKey;
    long long _localCount;
}

@property (retain, nonatomic) EFQuery *query;
@property (retain, nonatomic) EFQuery *expandedQuery;
@property (retain, nonatomic) NSPredicate *predicateIgnoringFlags;
@property (nonatomic, readonly) EMMailboxScope *serverCountMailboxScope;
@property (retain, nonatomic) EDMessageQueryEvaluator *queryEvaluator;
@property (retain, nonatomic) id <EMMessageRepositoryCountQueryObserver_xpc> resultsObserver;
@property (retain, nonatomic) EDMessagePersistence *messagePersistence;
@property (retain, nonatomic) EDPersistenceHookRegistry *hookRegistry;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (retain, nonatomic) EDUpdateThrottler *updateThrottler;
@property (readonly) NSString *pendingFlagChangesKey;
@property (nonatomic) long long localCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)defaultScheduler;

- (void)dealloc;
- (void)cancel;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidUpdateServerCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidUpdateLastSyncAndMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidUpdateMostRecentStatusCount:(long long)arg1 forMailboxWithObjectID:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidAddMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidDeleteMessages:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceWillChangeFlags:(id)arg1 messages:(id)arg2;
- (void)persistenceDidChangeFlags:(id)arg1 messages:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsAddingMailboxWithDatabaseID:(long long)arg1 objectID:(id)arg2 generationWindow:(id)arg3;
- (void)mailboxListChanged:(id)arg1;
- (void)willSyncMailbox:(id)arg1;
- (void)didSyncMailbox:(id)arg1;
- (void)_scheduleCountCalculation;
- (void)_fireCountCalculation;
- (void)_notifyObserverWithLogMessage:(id)arg1;
- (id)_filterMessages:(id)arg1 potentiallyMatchingMessages:(id *)arg2;
- (_Bool)_moreThan:(long long)arg1 messagesExistWithMessageIDHeaderHash:(id)arg2;
- (id)_originalMessagesKeyForKey:(id)arg1;
- (void)_incrementLocalCount:(long long)arg1 logMessage:(id)arg2 generationWindow:(id)arg3;
- (void)_decrementLocalCount:(long long)arg1 logMessage:(id)arg2 generationWindow:(id)arg3;
- (void)_prepareForChangeWithMessages:(id)arg1 changeKey:(id)arg2;
- (void)_persistenceDidDeleteMessages:(id)arg1 includeMessagesWithDeletedFlag:(_Bool)arg2 generationWindow:(id)arg3;
- (void)_processChangedMessages:(id)arg1 changeKey:(id)arg2 generationWindow:(id)arg3;
- (id)initWithQuery:(id)arg1 serverCountMailboxScope:(id)arg2 messagePersistence:(id)arg3 hookRegistry:(id)arg4 observer:(id)arg5;

@end
