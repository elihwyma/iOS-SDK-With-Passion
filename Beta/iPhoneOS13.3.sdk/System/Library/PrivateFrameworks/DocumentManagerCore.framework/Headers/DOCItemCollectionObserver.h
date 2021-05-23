/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

#import <Foundation/NSObject.h>

@class FPItemCollection, NSMutableArray, NSString;

@protocol FPItemCollectionIndexPathBasedDelegate;

@interface DOCItemCollectionObserver : NSObject

{
    FPItemCollection *_itemCollection;
    NSMutableArray *_subscribers;
    NSMutableArray *_delegates;
    id <FPItemCollectionIndexPathBasedDelegate> _soleUpdatableDelegate;
}

@property (retain) FPItemCollection *itemCollection;
@property (retain) NSMutableArray *subscribers;
@property (retain) NSMutableArray *delegates;
@property (retain) id <FPItemCollectionIndexPathBasedDelegate> soleUpdatableDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeSubscriber:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)initWithItemCollection:(id)arg1;
- (id)addSubscriber:(CDUnknownBlockType)arg1;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)notifySubscribers;
- (void)_purgeOrphanedContainers;
- (void)_enumerateItemCollectionIndexPathBasedDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (id)__delegates;

@end
