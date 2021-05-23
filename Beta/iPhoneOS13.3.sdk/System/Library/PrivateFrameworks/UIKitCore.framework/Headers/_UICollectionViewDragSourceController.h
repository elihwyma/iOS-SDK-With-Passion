/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSIndexPath, NSString, UICollectionView, UIDragInteraction, _UICollectionViewDragSourceControllerDragState, _UICollectionViewDragSourceControllerSessionState;

@protocol UIDragSession, _UICollectionViewDragSourceControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragSourceController : NSObject <Swift>

{
    UICollectionView *_collectionView;
    UIDragInteraction *_dragInteraction;
    id <_UICollectionViewDragSourceControllerDelegate> _delegate;
    _UICollectionViewDragSourceControllerSessionState *_sessionState;
    _UICollectionViewDragSourceControllerDragState *_dragState;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) id <_UICollectionViewDragSourceControllerDelegate> delegate;
@property (retain, nonatomic) _UICollectionViewDragSourceControllerSessionState *sessionState;
@property (retain, nonatomic) _UICollectionViewDragSourceControllerDragState *dragState;
@property (nonatomic, readonly) _Bool isActive;
@property (nonatomic, readonly) id <UIDragSession> dragSession;
@property (nonatomic, readonly) long long currentSessionItemCount;
@property (nonatomic, readonly) NSIndexPath *dragFromIndexPath;
@property (nonatomic, readonly) NSArray *dragFromIndexPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)controllerForCollectionView:(id)arg1 delegate:(id)arg2;

- (void)dealloc;
- (void)setDragInteractionEnabled:(_Bool)arg1;
- (id)_dragAndDropController;
- (id)_dragDelegateProxy;
- (id)_dragDelegateActual;
- (id)_dragSourceDelegateProxy;
- (id)_dragSourceDelegateActual;
- (id)indexPathForDragItem:(id)arg1;
- (void)_configureInteraction;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;
- (_Bool)_delegateImplementsSelector:(SEL)arg1;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)arg1;
- (_Bool)_isCompatibilityMode;
- (id)_filterCandidateIndexPaths:(id)arg1 forUserSelectedIndexPath:(id)arg2 session:(id)arg3;
- (id)_queryForItemsFromClientForSession:(id)arg1 dataSourceIndexPath:(id)arg2 location:(struct CGPoint)arg3 isInitialQuery:(_Bool)arg4;
- (void)_addDragItemsToExistingSession:(id)arg1 forDataSourceIndexPath:(id)arg2;
- (id)_previewParametersForItemAtIndexPath:(id)arg1;
- (void)_sessionWillBegin:(id)arg1 forDragInteraction:(id)arg2;
- (long long)_dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (_Bool)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2;
- (_Bool)_delegateImplementsDragSourceItemsAtIndexPath;
- (_Bool)_delegateImplementsDragItemsForItemAtIndexPath;
- (_Bool)_delegateImplementsDragItemsForItemAtIndexPathWithDefaultPreview;
- (_Bool)_delegateImplementsDragSourceDidAddItem;

@end
