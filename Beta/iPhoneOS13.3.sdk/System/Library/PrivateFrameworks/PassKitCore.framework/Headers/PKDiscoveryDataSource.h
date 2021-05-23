/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSString, PKDiscoveryService;

@protocol OS_dispatch_queue, PKDiscoveryDataSourceDelegate;

@interface PKDiscoveryDataSource : NSObject

{
    PKDiscoveryService *_discoveryService;
    struct os_unfair_lock_s _articleLayoutsLock;
    NSArray *_articleLayouts;
    _Bool _updatingArticles;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <PKDiscoveryDataSourceDelegate> _delegate;
}

@property (weak, nonatomic) id <PKDiscoveryDataSourceDelegate> delegate;
@property (retain, nonatomic) NSArray *articleLayouts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)updateArticleLayouts;
- (void)_updateArticlesWithCompletion:(CDUnknownBlockType)arg1;
- (id)_articleLayoutForItemIdentifier:(id)arg1;
- (void)discoveryArticleLayoutForItemWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_queue_updateArticleLayouts:(id)arg1;
- (void)displayedDiscoveryItemWithIdentifier:(id)arg1;
- (void)_addDismissActionToArticleLayouts:(id)arg1;
- (void)discoveryService:(id)arg1 receivedUpdatedDiscoveryArticleLayouts:(id)arg2;
- (id)cachedDiscoveryArticleLayoutForItemWithIdentifier:(id)arg1;

@end
