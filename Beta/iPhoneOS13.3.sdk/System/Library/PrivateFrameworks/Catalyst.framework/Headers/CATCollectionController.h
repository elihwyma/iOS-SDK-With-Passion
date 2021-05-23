/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class NSArray, NSIndexSet, NSMutableArray, NSMutableIndexSet, NSMutableSet, NSPredicate, NSSet, NSString, NSTimer, NSValueTransformer;

@protocol CATCollectionControllerDelegate;

@interface CATCollectionController : NSObject

{
    NSMutableArray *mPendingArrangedObjects;
    NSMutableArray *mPendingInsertedObjects;
    NSMutableArray *mPendingDeletedObjects;
    NSMutableSet *mContent;
    id mTarget;
    NSString *mKeyPath;
    NSMutableIndexSet *mChangingSelection;
    _Bool mDelegateKnowsContentIsChanging;
    NSSet *mKeysAffectingArrangement;
    NSMutableSet *mObjectsToRearrange;
    NSTimer *mRearrangeTimer;
    NSValueTransformer *mTransformer;
    id mOriginalObjects;
    _Bool _automaticallyRearrangesObjects;
    id <CATCollectionControllerDelegate> _delegate;
    NSArray *_sortDescriptors;
    NSPredicate *_filterPredicate;
    NSIndexSet *_selectionIndexes;
    NSArray *_arrangedObjects;
}

@property (retain) NSArray *arrangedObjects;
@property (weak) id <CATCollectionControllerDelegate> delegate;
@property (copy) NSArray *sortDescriptors;
@property (retain) NSPredicate *filterPredicate;
@property (copy) NSIndexSet *selectionIndexes;
@property _Bool automaticallyRearrangesObjects;
@property (nonatomic, readonly) NSSet *content;
@property (readonly) NSArray *selectedObjects;

- (id)init;
- (void)dealloc;
- (void)addObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)initWithObjects:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateObject:(id)arg1;
- (void)updateKeysAffectingArrangementForceUpdate:(_Bool)arg1 includeAllContent:(_Bool)arg2;
- (void)unbindContent;
- (void)bindContentToObject:(id)arg1 withKeyPath:(id)arg2 usingTransformer:(id)arg3;
- (void)removeObserversFromObject:(id)arg1 forKeyPaths:(id)arg2;
- (void)changeContent:(CDUnknownBlockType)arg1;
- (void)scheduleRearrangeTimerIfNeed;
- (void)addObserversToObject:(id)arg1 forKeyPaths:(id)arg2;
- (void)arrangeObject:(id)arg1;
- (void)changeObject:(id)arg1 atIndex:(unsigned long long)arg2 forChangeType:(unsigned long long)arg3 newIndex:(unsigned long long)arg4;
- (unsigned long long)newIndexForObject:(id)arg1 inArrangedObjects:(id)arg2;
- (void)rearrangeTimerDidFire:(id)arg1;
- (void)notifyArrangedObjectsWillChange;
- (void)notifyArrangedObjectsDidChangeWithPreviousArrangedObjects:(id)arg1;
- (unsigned long long)numberOfArrangedObjects;
- (id)arrangedObjectAtIndex:(unsigned long long)arg1;
- (id)arrangedObjectsAtIndexes:(id)arg1;
- (void)resolveArrangedObjectsAtIndexes:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (unsigned long long)arrangedIndexOfObject:(id)arg1;
- (void)bindContentToObject:(id)arg1 withKeyPath:(id)arg2;
- (void)rearrangeObjects;

@end
