/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>

@class EDThreadPersistence, EDThreadReloadSummaryHelper, EDUpdateThrottler, EFCancelationToken, EMCollectionItemIDStateCapturer, EMMailboxScope, EMThreadScope, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@protocol EFCancelable, EFScheduler;

@interface EDPrecomputedThreadQueryHandler : EDMessageRepositoryQueryHandler

{
    EMThreadScope *_threadScope;
    EDThreadPersistence *_threadPersistence;
    id <EFScheduler> _changeScheduler;
    id <EFScheduler> _backgroundWorkScheduler;
    EFCancelationToken *_cancelationToken;
    NSMutableDictionary *_pendingChanges;
    NSMutableArray *_pendingPositionChanges;
    NSMutableSet *_unreportedJournaledObjectIDs;
    NSMutableDictionary *_reportedJournaledObjectIDs;
    NSMutableDictionary *_oldestThreadObjectIDsByMailbox;
    id <EFCancelable> _updateOldestThreadsCancelationToken;
    EDUpdateThrottler *_updateThrottler;
    EDThreadReloadSummaryHelper *_reloadSummaryHelper;
    EMMailboxScope *_mailboxScope;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

@property (nonatomic, readonly) id <EFScheduler> changeScheduler;
@property (nonatomic, readonly) id <EFScheduler> backgroundWorkScheduler;
@property (retain, nonatomic) EFCancelationToken *cancelationToken;
@property (retain, nonatomic) NSMutableDictionary *pendingChanges;
@property (retain, nonatomic) NSMutableArray *pendingPositionChanges;
@property (retain, nonatomic) NSMutableSet *unreportedJournaledObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *reportedJournaledObjectIDs;
@property (retain, nonatomic) NSMutableDictionary *oldestThreadObjectIDsByMailbox;
@property (retain, nonatomic) id <EFCancelable> updateOldestThreadsCancelationToken;
@property (nonatomic, readonly) EDUpdateThrottler *updateThrottler;
@property (nonatomic, readonly) EDThreadReloadSummaryHelper *reloadSummaryHelper;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, readonly) EMCollectionItemIDStateCapturer *stateCapturer;
@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (nonatomic, readonly) EDThreadPersistence *threadPersistence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)cancel;
- (void)start;
- (void)persistenceDidUpdateProperties:(id)arg1 message:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceDidChangeMessageIDHeaderHash:(id)arg1 oldConversationID:(long long)arg2 message:(id)arg3 generationWindow:(id)arg4;
- (void)persistenceDidChangeConversationNotificationLevel:(long long)arg1 conversationID:(long long)arg2 generationWindow:(id)arg3;
- (id)labelForStateCapture;
- (id)itemIDsForStateCaptureWithErrorString:(id *)arg1;
- (id)threadForObjectID:(id)arg1 error:(id *)arg2;
- (void)_getInitialResults;
- (void)persistenceIsAddingThreadWithObjectID:(id)arg1 journaled:(_Bool)arg2 generationWindow:(id)arg3;
- (void)persistenceIsMarkingThreadAsJournaledWithObjectID:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsReconcilingJournaledThreadsWithObjectIDs:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2 generationWindow:(id)arg3;
- (void)persistenceIsDeletingThreadWithObjectID:(id)arg1 generationWindow:(id)arg2;
- (void)persistenceDidFinishThreadUpdates;
- (void)persistenceWillResetThreadScope:(id)arg1 denyBlock:(CDUnknownBlockType)arg2;
- (void)_oldestThreadsNeedUpdate;
- (void)_flushUpdatesWithReason:(id)arg1;
- (void)_persistenceIsAddingThreadWithObjectID:(id)arg1;
- (void)_addChangeToPendingChanges:(id)arg1 forThreadObjectID:(id)arg2;
- (void)_persistenceIsChangingThreadWithObjectID:(id)arg1 changedKeyPaths:(id)arg2;
- (_Bool)_isAddingOrDeletingObjectID:(id)arg1;
- (_Bool)_keyPathsAffectSorting:(id)arg1;
- (id)_messageForPersistedMessage:(id)arg1;
- (id)initWithQuery:(id)arg1 threadScope:(id)arg2 messagePersistence:(id)arg3 threadPersistence:(id)arg4 hookRegistry:(id)arg5 observer:(id)arg6 observationIdentifier:(id)arg7;

@end
