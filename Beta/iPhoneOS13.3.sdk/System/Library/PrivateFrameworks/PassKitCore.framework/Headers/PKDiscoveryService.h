/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSHashTable, PKXPCService;

@protocol OS_dispatch_queue;

@interface PKDiscoveryService : NSObject

{
    PKXPCService *_remoteService;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSHashTable *_observers;
    struct os_unfair_lock_s _observersLock;
}

+ (id)sharedInstance;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)observers;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayedDiscoveryItemWithIdentifier:(id)arg1;
- (void)discoveryArticleLayoutsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateDiscoveryItemWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)updateDiscoveryManifestWithCompletion:(CDUnknownBlockType)arg1;
- (void)discoveryItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)insertDiscoveryItems:(id)arg1 discoveryArticleLayouts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)processDiscoveryItemsAndMessagesWithCompletion:(CDUnknownBlockType)arg1;
- (void)discoveryEngagementMessagesForPassUniqueIdentifier:(id)arg1 active:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateDiscoveryEngagementMessageWithIdentifier:(id)arg1 forAction:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertDiscoveryEngagementMessages:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDiscoveryMessageWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rulesWithCompletion:(CDUnknownBlockType)arg1;
- (void)insertRule:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteRuleWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)evaluateRulesWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoveryArticleLayoutsUpdated:(id)arg1;
- (void)discoveryEngagementMessagesUpdated;
- (CDUnknownBlockType)errorHandlerForMethod:(SEL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayedDiscoveryEngagementMessageWithIdentifier:(id)arg1;

@end
