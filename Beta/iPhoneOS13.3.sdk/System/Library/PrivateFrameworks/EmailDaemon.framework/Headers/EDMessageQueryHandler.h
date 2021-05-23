/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <EmailDaemon/EDMessageRepositoryQueryHandler.h>

@class EDMessageQueryHelper, EFCancelationToken, EMCollectionItemIDStateCapturer, NSMutableDictionary, NSObject, NSString;

@protocol EDRemoteSearchProvider, EFScheduler, OS_dispatch_queue;

@interface EDMessageQueryHandler : EDMessageRepositoryQueryHandler

{
    _Bool _didCancel;
    _Bool _isInitialized;
    id <EDRemoteSearchProvider> _remoteSearchProvider;
    EDMessageQueryHelper *_currentQueryHelper;
    id <EFScheduler> _scheduler;
    NSObject<OS_dispatch_queue> *_contentProtectionQueue;
    NSObject<OS_dispatch_queue> *_resultQueue;
    NSMutableDictionary *_oldestMessageIDsByMailboxObjectIDs;
    EFCancelationToken *_updateOldestMessagesCancelationToken;
    EMCollectionItemIDStateCapturer *_stateCapturer;
}

@property (nonatomic, readonly) id <EDRemoteSearchProvider> remoteSearchProvider;
@property (retain, nonatomic) EDMessageQueryHelper *currentQueryHelper;
@property (nonatomic, readonly) id <EFScheduler> scheduler;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *contentProtectionQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *resultQueue;
@property (nonatomic) _Bool didCancel;
@property (nonatomic) _Bool isInitialized;
@property (copy, nonatomic, readonly) NSMutableDictionary *oldestMessageIDsByMailboxObjectIDs;
@property (retain, nonatomic) EFCancelationToken *updateOldestMessagesCancelationToken;
@property (nonatomic, readonly) EMCollectionItemIDStateCapturer *stateCapturer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;
+ (id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg1 messageSource:(id)arg2;

- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (id)labelForStateCapture;
- (id)itemIDsForStateCaptureWithErrorString:(id *)arg1;
- (void)_createHelperAndReconcileJournal:(_Bool)arg1;
- (void)_contentProtectionChangedToUnlocked;
- (void)_contentProtectionChangedToLocked;
- (void)_restartHelper;
- (_Bool)_queryHelperIsCurrent:(id)arg1;
- (void)queryHelper:(id)arg1 didFindMessages:(id)arg2;
- (void)queryHelperDidFindAllMessages:(id)arg1;
- (void)queryHelper:(id)arg1 didAddMessages:(id)arg2;
- (void)queryHelper:(id)arg1 messageFlagsDidChangeForMessages:(id)arg2;
- (void)queryHelper:(id)arg1 conversationIDDidChangeForMessages:(id)arg2 fromConversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 conversationNotificationLevelDidChangeForConversation:(long long)arg2 conversationID:(long long)arg3;
- (void)queryHelper:(id)arg1 objectIDDidChangeForMessage:(id)arg2 oldObjectID:(id)arg3 oldConversationID:(long long)arg4;
- (void)queryHelper:(id)arg1 didUpdateMessages:(id)arg2 forKeyPaths:(id)arg3;
- (void)queryHelper:(id)arg1 didDeleteMessages:(id)arg2;
- (void)queryHelperDidFinishRemoteSearch:(id)arg1;
- (void)queryHelperNeedsRestart:(id)arg1;
- (id)_objectIDsAndUnreadObjectIDsFromMessages:(id)arg1 unreadObjectIDs:(id *)arg2;
- (void)_initializeOldestMessagesByMailbox;
- (id)findMessagesByPreviousObjectIDForAddedMessages:(id)arg1 helper:(id)arg2;
- (void)_oldestMessagesNeedUpdate;
- (void)_updateOldestMessagesForMailboxes:(id)arg1 cancelationToken:(id)arg2;
- (id)_oldestItemQueryForMailbox:(id)arg1;
- (void)_oldestMessagesByMailboxObjectIDsWasUpdated;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 hookRegistry:(id)arg3 remoteSearchProvider:(id)arg4 observer:(id)arg5 observationIdentifier:(id)arg6;

@end
