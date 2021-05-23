/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UICollectionViewShadowUpdatesController.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSIndexPath, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSUUID, UICollectionViewDropProposal, _UICollectionViewDragDestinationController, _UICollectionViewDragSourceController, _UICollectionViewPlaceholderContext, _UIDropAnimationHandlers;

@protocol UIDropSession;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragAndDropController : _UICollectionViewShadowUpdatesController <Swift>

{
    int _sessionKind;
    _UICollectionViewDragDestinationController *_destinationController;
    _UICollectionViewDragSourceController *_sourceController;
    NSMutableArray *__reorderedItems;
    _UICollectionViewPlaceholderContext *_currentlyInsertingPlaceholderContext;
    NSMutableDictionary *_placeholderContextsByIndexPath;
    NSMutableSet *_placeholderContexts;
    NSMutableDictionary *_cellAppearanceStatesByIndexPaths;
    NSMapTable *_cellAppearanceStatesByCellPointers;
    NSMutableArray *_dropCoordinatorItems;
    NSMapTable *_dropCoordinatorItemsMap;
    NSMutableArray *_cellsDeferredForReuse;
    long long _sessionRefCount;
    _UIDropAnimationHandlers *_defaultAnimationHandlers;
    NSUUID *_currentDropInsertionShadowUpdateIdentifier;
}

@property (retain, nonatomic) NSMutableArray *_reorderedItems;
@property (retain, nonatomic) _UICollectionViewPlaceholderContext *currentlyInsertingPlaceholderContext;
@property (retain, nonatomic) NSMutableDictionary *placeholderContextsByIndexPath;
@property (retain, nonatomic) NSMutableSet *placeholderContexts;
@property (retain, nonatomic) NSMutableDictionary *cellAppearanceStatesByIndexPaths;
@property (retain, nonatomic) NSMapTable *cellAppearanceStatesByCellPointers;
@property (retain, nonatomic) NSMutableArray *dropCoordinatorItems;
@property (retain, nonatomic) NSMapTable *dropCoordinatorItemsMap;
@property (retain, nonatomic) NSMutableArray *cellsDeferredForReuse;
@property (nonatomic) long long sessionRefCount;
@property (retain, nonatomic) _UIDropAnimationHandlers *defaultAnimationHandlers;
@property (retain, nonatomic) NSUUID *currentDropInsertionShadowUpdateIdentifier;
@property (nonatomic) int sessionKind;
@property (retain, nonatomic) _UICollectionViewDragDestinationController *destinationController;
@property (retain, nonatomic) _UICollectionViewDragSourceController *sourceController;
@property (nonatomic, readonly) NSArray *reorderedItems;
@property (nonatomic, readonly) unsigned long long reorderingCapabilities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSIndexPath *destinationIndexPath;
@property (nonatomic, readonly) UICollectionViewDropProposal *proposal;
@property (nonatomic, readonly) id <UIDropSession> session;
@property (nonatomic, readonly) UICollectionViewDropProposal *dropProposal;
@property (nonatomic, readonly) id <UIDropSession> dropSession;

- (void)reset;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)initWithCollectionView:(id)arg1;
- (void)updateAppearanceForCell:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)cellShouldRemainInHierarchy:(id)arg1 indexPath:(id)arg2;
- (_Bool)_isReordering;
- (_Bool)hasShadowUpdates;
- (id)presentationIndexPathForDataSourceIndexPath:(id)arg1;
- (void)transferOwnershipOfCellForDeferredReuseAfterDropAnimations:(id)arg1;
- (_Bool)isCellPerformingLegacyReorderingAtIndexPath:(id)arg1;
- (void)updateReorderingTargetIndexPath:(id)arg1;
- (_Bool)beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2;
- (CDUnknownBlockType)cancelReordering;
- (CDUnknownBlockType)endReordering;
- (_Bool)cancelReorderingShouldRevertOrdering;
- (id)dataSourceIndexPathForPresentationIndexPath:(id)arg1;
- (_Bool)updateWillCauseInternalInconsistency:(id)arg1;
- (void)_shadowUpdatesWereReverted;
- (int)_determineSessionKind;
- (void)_beginReorderingForItemAtIndexPath:(id)arg1 cell:(id)arg2;
- (void)_beginDragAndDropInsertingItemAtIndexPath:(id)arg1;
- (_Bool)_hasReorderingMoved;
- (void)_rollbackCurrentDropInsertion;
- (long long)_determineAppearanceForItemAtIndexPath:(id)arg1;
- (void)_updateAppearanceForCell:(id)arg1 atIndexPath:(id)arg2 appearance:(long long)arg3;
- (void)_updateCellAppearanceForCell:(id)arg1 appearance:(long long)arg2;
- (id)_dropCoordinatorItemForIndexPath:(id)arg1;
- (id)indexPathForCurrentReorderedItem;
- (id)indexPathForOriginalReorderedItem;
- (void)_resetReorderedItems;
- (id)indexPathForDragAndDropInsertion;
- (void)_cleanupAfterOutstandingSessionCompletion;
- (void)_removeAnyDeferredReuseCells;
- (void)_resetAnyDragStateModifiedVisibleCells;
- (_Bool)_deleteShadowUpdateWithIdentifier:(id)arg1;
- (void)_removeReorderedItemsCellsFromViewHierarchy;
- (id)_shadowUpdateReuseIdentifierForItemItemAtIndexPath:(id)arg1;
- (void)_incrementSessionRefCount;
- (id)_cellAppearanceStateForIndexPath:(id)arg1;
- (void)_updateCellAppearancesForItemsAtIndexPaths:(id)arg1;
- (void)_decrementSessionRefCount;
- (_Bool)isDragDestinationInteractivelyReordering;
- (id)_indexPathForCellAppearanceState:(id)arg1;
- (id)_dropCoordinatorItemForDragItem:(id)arg1;
- (id)_cellAppearanceStateForCell:(id)arg1 addIfNotFound:(_Bool)arg2;
- (void)_addAnimationHandlers:(id)arg1 toAnimator:(id)arg2;
- (id)placeholderContextForDragItem:(id)arg1;
- (void)_invokeAllCompletionHandlers;
- (void)_resetAllAnimationHandlers;
- (void)placeholderContextNeedsCellUpdate:(id)arg1;
- (id)placeholderContextDidDismiss:(id)arg1;
- (void)_addDropCoordinatorItem:(id)arg1;
- (id)dropItem:(id)arg1 toPlaceholder:(id)arg2;
- (id)_presentationIndexPathForIndexPath:(id)arg1 allowingAppendingInserts:(_Bool)arg2;
- (id)insertPlaceholderForItemAtIndexPath:(id)arg1 forDragItem:(id)arg2 reuseIdentifier:(id)arg3 cellUpdateHandler:(CDUnknownBlockType)arg4;
- (id)dropItem:(id)arg1 toItemAtIndexPath:(id)arg2;
- (id)dropItem:(id)arg1 toPlaceholderInsertedAtIndexPath:(id)arg2 withReuseIdentifier:(id)arg3 cellUpdateHandler:(CDUnknownBlockType)arg4;
- (id)dropItem:(id)arg1 toTarget:(id)arg2;
- (_Bool)placeholderContext:(id)arg1 didCommitInsertionWithDataSourceUpdates:(CDUnknownBlockType)arg2;
- (void)dragSourceController:(id)arg1 willBeginLiftForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 didCompleteLiftForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 didCancelLiftForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceControllerSessionWillBegin:(id)arg1;
- (void)dragSourceController:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 didSupplyCancellationPreviewForItemAtIndexPath:(id)arg2;
- (void)dragSourceController:(id)arg1 willBeginAnimatingCancelForItemsAtIndexPaths:(id)arg2 withAnimator:(id)arg3;
- (void)dragSourceController:(id)arg1 didCompleteAnimatingCancelForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 willEndForItemsAtIndexPaths:(id)arg2 withDropOperation:(unsigned long long)arg3;
- (void)dragSourceController:(id)arg1 didEndForItemsAtIndexPaths:(id)arg2;
- (void)dragSourceController:(id)arg1 didUpdateItemCountOfSelectedItems:(long long)arg2;
- (void)dragDestinationController:(id)arg1 willPerformDropAtIndexPath:(id)arg2;
- (void)dragDestinationController:(id)arg1 didPerformDropAtIndexPath:(id)arg2;
- (void)dragDestinationController:(id)arg1 willBeginDropAnimationForDragItem:(id)arg2 animator:(id)arg3;
- (void)dragDestinationController:(id)arg1 didCompleteDropAnimationForDragItem:(id)arg2;
- (void)dragDestinationControllerDidConcludeDrop:(id)arg1;
- (void)dragDestinationControllerSessionWillBegin:(id)arg1;
- (void)dragDestinationControllerSessionDidEnd:(id)arg1;
- (id)dropItem:(id)arg1 intoItemAtIndexPath:(id)arg2 rect:(struct CGRect)arg3;
- (void)dropToItemAtIndexPath:(id)arg1 forDragItem:(id)arg2;
- (id)dropToPlaceholderInsertedAtIndexPath:(id)arg1 reuseIdentifier:(id)arg2 forDragItem:(id)arg3 cellUpdateHandler:(CDUnknownBlockType)arg4;
- (void)dropToTarget:(id)arg1 forDragItem:(id)arg2;
- (void)updateAppearanceForCell:(id)arg1 withAppearance:(long long)arg2;
- (_Bool)_shouldPerformTranslationForDelegateBasedFlowLayoutSizing;
- (id)_cellForDropCoordinatorItem:(id)arg1;
- (void)didRebaseWithNewBaseUpdateMap:(id)arg1;
- (_Bool)_removeMoveShadowUpdateMatchingReorderedItem:(id)arg1;
- (void)_updateCellIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (id)sourceIndexPaths;
- (void)_performCancelDropToIndexPath:(id)arg1 forDragItem:(id)arg2;
- (id)dropToPlaceholderCellAtIndexPath:(id)arg1 reuseIdentifier:(id)arg2 forDragItem:(id)arg3 cellUpdateHandler:(CDUnknownBlockType)arg4;
- (void)dropToLocation:(struct CGPoint)arg1 inContainerView:(id)arg2 withTransform:(struct CGAffineTransform)arg3 forDragItem:(id)arg4;

@end
