/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDMessagePersistence, EDPersistenceHookRegistry, EDThreadPersistence, EDVIPManager, EFLocked, EFQuery, EMObjectID, EMThreadScope, NSString;

@protocol EDRemoteSearchProvider, EDThreadQueryHandlerDelegate, EMMessageListItemQueryResultsObserver;

@interface EDThreadQueryHandler : NSObject

{
    _Atomic char _state;
    struct atomic_flag _isRunning;
    EMThreadScope *_threadScope;
    EFQuery *_query;
    id <EMMessageListItemQueryResultsObserver> _resultsObserver;
    EMObjectID *_observationIdentifier;
    EDMessagePersistence *_messagePersistence;
    EDThreadPersistence *_threadPersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    EDVIPManager *_vipManager;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EFLocked *_underlyingHandler;
    id <EDThreadQueryHandlerDelegate> _delegate;
}

@property (nonatomic, readonly) EFQuery *query;
@property (nonatomic, readonly) id <EMMessageListItemQueryResultsObserver> resultsObserver;
@property (nonatomic, readonly) EMObjectID *observationIdentifier;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EDThreadPersistence *threadPersistence;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) EDVIPManager *vipManager;
@property (nonatomic, readonly) id <EDRemoteSearchProvider> remoteSearchProvider;
@property (nonatomic, readonly) EFLocked *underlyingHandler;
@property (weak, nonatomic, readonly) id <EDThreadQueryHandlerDelegate> delegate;
@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)cancel;
- (_Bool)isStarted;
- (void)start;
- (void)tearDown;
- (void)requestSummaryForMessageObjectID:(id)arg1;
- (void)test_tearDown;
- (void)observer:(id)arg1 wasUpdated:(id)arg2;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 before:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 after:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 before:(id)arg3;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 after:(id)arg3;
- (void)observer:(id)arg1 matchedChangesForObjectIDs:(id)arg2;
- (void)observer:(id)arg1 matchedDeletedObjectIDs:(id)arg2;
- (void)observer:(id)arg1 replacedExistingObjectID:(id)arg2 withNewObjectID:(id)arg3;
- (void)observer:(id)arg1 matchedOldestItemsUpdatedForMailboxes:(id)arg2;
- (void)observerDidFinishInitialLoad:(id)arg1;
- (void)observerWillRestart:(id)arg1;
- (void)observerDidFinishRemoteSearch:(id)arg1;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 threadPersistence:(id)arg3 hookRegistry:(id)arg4 vipManager:(id)arg5 remoteSearchProvider:(id)arg6 observer:(id)arg7 observationIdentifier:(id)arg8 delegate:(id)arg9;
- (void)checkIfPrecomputedStateIsAvailable;
- (void)triggerMigration;
- (id)threadForObjectID:(id)arg1 isPersisted:(_Bool *)arg2 error:(id *)arg3;
- (id)inMemoryMessageObjectIDsForThread:(id)arg1;
- (void)threadMigratorDidComplete:(id)arg1;
- (void)_createUnderlyingHandlerIfNeededAndStart;

@end
