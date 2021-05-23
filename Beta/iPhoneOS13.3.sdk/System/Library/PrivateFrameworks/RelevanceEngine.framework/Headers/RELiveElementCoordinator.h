/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REElementCoordinator.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSObject, NSString, REElementRelevanceEngine, REUpNextScheduler;

@protocol OS_dispatch_queue;

@interface RELiveElementCoordinator : REElementCoordinator

{
    REElementRelevanceEngine *_relevanceEngine;
    NSMutableDictionary *_elementIdElementMap;
    REUpNextScheduler *_scheduler;
    NSObject<OS_dispatch_queue> *_controllerQueue;
    unsigned long long _scheduleCount;
    _Bool _reloadImmediately;
    NSCountedSet *_remainingInsertOperations;
    NSCountedSet *_remainingRemoveOperations;
    unsigned long long _currentReloadTryCount;
    NSMutableSet *_refreshedElements;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)removeElement:(id)arg1;
- (void)dataSource:(id)arg1 didBeginActivity:(id)arg2;
- (void)dataSource:(id)arg1 didFinishActivity:(id)arg2;
- (id)elementRelevanceEngine;
- (void)elementDataSourceController:(id)arg1 performBatchUpdates:(CDUnknownBlockType)arg2;
- (void)elementDataSourceController:(id)arg1 didRemoveElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didAddElement:(id)arg2 toSection:(id)arg3;
- (void)elementDataSourceController:(id)arg1 didReloadElement:(id)arg2;
- (void)elementDataSourceController:(id)arg1 didRefreshElement:(id)arg2;
- (_Bool)elementDataSourceController:(id)arg1 isElementVisible:(id)arg2;
- (void)_onqueue_async:(CDUnknownBlockType)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)featureMapForElementId:(id)arg1 trainingContext:(id)arg2;
- (id)elementForElementId:(id)arg1;
- (id)featureMapForElement:(id)arg1 trainingContext:(id)arg2;
- (void)addElement:(id)arg1 toSection:(id)arg2;
- (id)elementRankerForSection:(id)arg1;
- (id)predictionForElementAtPath:(id)arg1;
- (id)predictionForElement:(id)arg1;
- (id)featureProviderForElement:(id)arg1;
- (id)featureProviderForElementAtPath:(id)arg1;
- (void)relevanceEngine:(id)arg1 elementWasAdded:(id)arg2;
- (void)relevanceEngine:(id)arg1 didUpdateRelevanceOfElement:(id)arg2;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 performedBatchUpdates:(CDUnknownBlockType)arg2;
- (void)dataSourceManager:(id)arg1 didLoadDataSourceController:(id)arg2;
- (void)dataSourceManager:(id)arg1 willUnloadDataSourceController:(id)arg2;
- (void)_queue_reload;
- (void)_enumerateSectionsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_queue_addElement:(id)arg1 toSection:(id)arg2;
- (void)_queue_removeElement:(id)arg1;
- (id)_predictionForElement:(id)arg1;
- (void)_queue_reloadElement:(id)arg1;
- (void)_queue_refreshElement:(id)arg1;
- (_Bool)_queue_reloadElement:(id)arg1 withElement:(id)arg2;
- (void)_queue_scheduleContentUpdate:(_Bool)arg1;
- (void)_enumerateSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)relevanceEngine:(id)arg1 elementWasRemoved:(id)arg2;

@end
