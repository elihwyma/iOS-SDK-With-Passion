/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, REObserverStore;

@protocol OS_dispatch_queue;

@interface REElementCoordinator : RERelevanceEngineSubsystem

{
    NSMutableDictionary *_displayElements;
    REObserverStore *_observers;
    _Bool _performingBatch;
    NSMutableArray *_updates;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (nonatomic, readonly) unsigned long long numberOfObservers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) NSDictionary *displayElements;

+ (id)applicationPrewarmIdentifiers;

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)enumerateObservers:(CDUnknownBlockType)arg1;
- (void)reloadElement:(id)arg1 atPath:(id)arg2;
- (void)insertElement:(id)arg1 atPath:(id)arg2;
- (void)removeElement:(id)arg1 atPath:(id)arg2;
- (void)moveElement:(id)arg1 fromPath:(id)arg2 toPath:(id)arg3;
- (void)refreshElement:(id)arg1 atPath:(id)arg2;
- (unsigned long long)numberOfElementsInSection:(id)arg1;
- (id)elementAtPath:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)pathForElement:(id)arg1;
- (void)performBatchUpdateBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didAddObserver:(id)arg1;
- (void)_enumerateValidObservers:(CDUnknownBlockType)arg1;
- (void)didRemoveObserver:(id)arg1;
- (void)_performOperationsToDisplayElements:(id)arg1;
- (void)_performOperation:(id)arg1 toObserver:(id)arg2;
- (void)_enqueueOrPerformOperation:(id)arg1;
- (void)_performOperationsToDisplayElements:(id)arg1 toSection:(id)arg2;

@end
