/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CADisplayLink, NSIndexPath, NSString, UICollectionView, UICollectionViewDropProposal, UIDropInteraction, _UIDragDestinationControllerDropProposalState, _UIDragDestinationControllerReorderingState, _UIDragDestinationControllerSessionState;

@protocol UIDropSession, _UICollectionViewDragDestinationControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDragDestinationController : NSObject

{
    UICollectionView *_collectionView;
    UIDropInteraction *_dropInteraction;
    id <_UICollectionViewDragDestinationControllerDelegate> _delegate;
    CADisplayLink *_reorderDisplayLink;
    _UIDragDestinationControllerSessionState *_sessionState;
    _UIDragDestinationControllerReorderingState *_reorderingState;
    _UIDragDestinationControllerDropProposalState *_dropProposalState;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIDropInteraction *dropInteraction;
@property (weak, nonatomic) id <_UICollectionViewDragDestinationControllerDelegate> delegate;
@property (retain, nonatomic) CADisplayLink *reorderDisplayLink;
@property (retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState;
@property (retain, nonatomic) _UIDragDestinationControllerReorderingState *reorderingState;
@property (retain, nonatomic) _UIDragDestinationControllerDropProposalState *dropProposalState;
@property (nonatomic, readonly) _Bool isActive;
@property (nonatomic, readonly) _Bool supportsLocalSessionReordering;
@property (nonatomic, readonly) NSIndexPath *currentIndexPath;
@property (nonatomic, readonly) UICollectionViewDropProposal *currentDropProposal;
@property (nonatomic, readonly) id <UIDropSession> currentDropSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)controllerForCollectionView:(id)arg1 delegate:(id)arg2;

- (void)dealloc;
- (void)deactivate;
- (id)_dragAndDropController;
- (id)_dropDelegateProxy;
- (id)_dropDelegateActual;
- (id)_dragDestinationDelegateProxy;
- (id)_dragDestinationDelegateActual;
- (void)dragSourceSelectedItemCountDidChangeWithCount:(long long)arg1;
- (void)dropWasCancelled;
- (void)_configureInteraction;
- (id)initWithCollectionView:(id)arg1 delegate:(id)arg2;
- (void)_cancelCurrentInteractiveReorder;
- (void)_cancelInteractiveReorderingIfNeeded;
- (_Bool)hasPerformedReordering;
- (_Bool)_isLocalInteractiveMove;
- (void)_updateDropProposalByQueryingClientIfNeeded:(id)arg1;
- (void)_configureReorderingDisplayLinkIfNeeded;
- (void)_resumeReorderingDisplayLink;
- (id)_effectiveDropProposalForProposal:(id)arg1;
- (void)_pauseReorderingDisplayLink;
- (void)_commitCurrentInteractiveReordering;
- (void)_commitCurrentDragAndDropSession;
- (id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)arg1;
- (void)_reorderingDisplayLinkDidTick;
- (_Bool)_delegateImplementsSelector:(SEL)arg1;
- (_Bool)_shouldPerformMovementForProposal:(id)arg1;
- (void)_endInteractiveReorderingIfNeeded;
- (_Bool)_shouldQueryDropActionForIndexPath:(id)arg1;
- (_Bool)_isMultiItemSource;
- (id)_computeNextItemAttributesStartingFromItemAttributes:(id)arg1 withCurrentDragLocation:(struct CGPoint)arg2;
- (_Bool)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)arg1 proposedNextItemAttributes:(id)arg2;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)arg1;
- (_Bool)isInteractiveReorderingDisabled;
- (_Bool)_isCompatibilityMode;
- (_Bool)_delegateImplementsPerformDropFromIndexPathsWithCoordinator;
- (_Bool)_delegateImplementsPerformDropFromIndexPathsWithAction;
- (_Bool)_delegateImplementsDropActionForIndexPath;
- (_Bool)_delegateImplementsDidExit;
- (_Bool)_delegateImplementsTargetIndexPath;

@end
