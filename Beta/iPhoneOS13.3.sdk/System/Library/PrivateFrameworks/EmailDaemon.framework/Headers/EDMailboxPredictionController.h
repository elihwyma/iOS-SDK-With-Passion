/*
 Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

#import <Foundation/NSObject.h>

@class EDCachingMailboxPredictor, EDMailboxPersistence, EDPersistenceHookRegistry, NSString;

@protocol EDMailboxPredictionQueryAdapter, EMUserProfileProvider, OS_dispatch_queue;

@interface EDMailboxPredictionController : NSObject

{
    id <EDMailboxPredictionQueryAdapter> _queryAdapter;
    NSObject<OS_dispatch_queue> *_processingQueue;
    EDCachingMailboxPredictor *_cachingPredictor;
    EDMailboxPersistence *_mailboxPersistence;
    EDPersistenceHookRegistry *_hookRegistry;
    id <EMUserProfileProvider> _userProfileProvider;
}

@property (nonatomic, readonly) id <EDMailboxPredictionQueryAdapter> queryAdapter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *processingQueue;
@property (nonatomic, readonly) EDCachingMailboxPredictor *cachingPredictor;
@property (nonatomic, readonly) EDMailboxPersistence *mailboxPersistence;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) id <EMUserProfileProvider> userProfileProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (void)dealloc;
- (void)persistenceWillAddMessage:(id)arg1 fromExistingMessage:(_Bool)arg2;
- (id)predictMailboxForMovingMessages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_createPredictor;
- (void)_invalidateCacheForAddedMessage:(id)arg1;
- (id)_processPredictionForMessages:(id)arg1;
- (id)initWithMessagePersistence:(id)arg1 mailboxPersistence:(id)arg2 hookRegistry:(id)arg3 userProfileProvider:(id)arg4;

@end
