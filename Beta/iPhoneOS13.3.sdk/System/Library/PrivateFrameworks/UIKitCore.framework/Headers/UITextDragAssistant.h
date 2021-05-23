/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSMapTable, NSString, NSTextStorage, UIDragInteraction, UIDragItem, UIDropInteraction, UITargetedDragPreview, UITextDraggableGeometrySameViewDropOperationResult, UITextDropProposal, UITextPasteController, UITextRange, UIView, _UITextDragCaretView;

@protocol UIDragSession, UIDropSession, UITextDragSupporting><UITextDropSupporting, UITextDraggableGeometry, UITextDraggableGeometrySameViewDropOperation, UITextDropPasteSession;

__attribute__((visibility("hidden")))
@interface UITextDragAssistant : NSObject <Swift>

{
    struct {
        unsigned int viewSupportsGhostedRanges:1;
        unsigned int geometrySupportsSameViewOperations:1;
        unsigned int shouldRestoreFirstResponder:1;
        unsigned int draggingOngoing:1;
        unsigned int handledCancelAnimation:1;
        unsigned int restoreNonEditableAfterDrop:1;
        unsigned int restoreSelectableAfterDrop:1;
        unsigned int wasSelectableBeforeDrop:1;
        unsigned int forceEditable:1;
        unsigned int delegateSupportsProposalForDrop:1;
        unsigned int delegateSupportsSessionDidUpdate:1;
        unsigned int delegateSupportsRangeForDrop:1;
        unsigned int delegateSupportsPositionForDrop:1;
        unsigned int delegateSupportsWillMoveCaret:1;
        unsigned int delegateSupportsDidMoveCaret:1;
        unsigned int viewSupportsTextStorage:1;
        unsigned int textStorageDidChange:1;
        unsigned int dropPerformed:1;
        unsigned int defaultDropHandling:1;
    } _flags;
    id <UITextDraggableGeometry> _geometry;
    id <UIDragSession> _currentDragSession;
    UIDragInteraction *_currentDragInteraction;
    NSArray *_draggedTextRanges;
    UITextRange *_initialDragSelectedRange;
    struct CGPoint _initialDragLocation;
    NSArray *_movedItemsInView;
    NSMapTable *_targetedPreviewProviders;
    NSMapTable *_previewProviders;
    NSTextStorage *_observingStorage;
    id <UIDropSession> _currentDropSession;
    _UITextDragCaretView *_dropCaret;
    UITextRange *_currentDropRange;
    UIDragItem *_topmostDropItem;
    UITargetedDragPreview *_topmostDropPreview;
    UITextDropProposal *_currentDropProposal;
    UITextRange *_preDropSelectionRange;
    id <UITextDraggableGeometrySameViewDropOperation> _sameViewDropOperation;
    UITextDraggableGeometrySameViewDropOperationResult *_sameViewDropOperationResult;
    UITextPasteController *_dropPasteController;
    id <UITextDropPasteSession> _dropPasteSession;
    CDUnknownBlockType _delayedPreviewProvider;
    UIView<UITextDragSupporting><UITextDropSupporting> *_view;
    UIDragInteraction *_dragInteraction;
    UIDropInteraction *_dropInteraction;
}

@property (weak, nonatomic, readonly) UIView<UITextDragSupporting><UITextDropSupporting> *view;
@property (nonatomic, readonly) id <UITextDraggableGeometry> geometry;
@property (weak, nonatomic, readonly) UIDragInteraction *dragInteraction;
@property (weak, nonatomic, readonly) UIDropInteraction *dropInteraction;
@property (nonatomic, readonly, getter=isDragActive) _Bool dragActive;
@property (nonatomic, readonly, getter=isDropActive) _Bool dropActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithView:(id)arg1;
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
- (void)_dropInteraction:(id)arg1 delayedPreviewProviderForDroppingItem:(id)arg2 previewProvider:(CDUnknownBlockType)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (_Bool)_dragInteraction:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (_Bool)_dragInteractionShouldBecomeDraggingSourceDelegate:(id)arg1;
- (id)initWithView:(id)arg1 geometry:(id)arg2;
- (void)_applyOptionsToGeometry;
- (_Bool)_viewHasOtherDragInteraction;
- (id)_textRangeForDraggingFromPoint:(struct CGPoint)arg1;
- (id)_closestPositionToPoint:(struct CGPoint)arg1;
- (id)_itemsForDraggedRange:(id)arg1;
- (void)_initializeDragSession:(id)arg1 withInteraction:(id)arg2;
- (void)_addDraggedTextRangeForItems:(id)arg1 defaultRange:(id)arg2;
- (_Bool)_hasDraggedTextRange:(id)arg1;
- (id)_containerViewForLiftPreviews;
- (void)_ghostDraggedTextRanges:(_Bool)arg1;
- (void)_liftOrDrag:(long long)arg1 didEndWithOperation:(unsigned long long)arg2;
- (id)_containerViewForDropPreviews;
- (void)_restoreResponderIfNeededForOperation:(unsigned long long)arg1;
- (void)_clearDraggedTextRanges;
- (void)_textStorageDidProcessEditing;
- (void)_stopObservingTextStorage;
- (void)_forDraggedTextRangesDo:(CDUnknownBlockType)arg1;
- (long long)_dataOwnerForSession:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)_accessibilityDraggableRanges;
- (id)_dropRequestWithRange:(id)arg1 inSession:(id)arg2;
- (_Bool)_updateCurrentDropProposalInSession:(id)arg1 usingRequest:(id)arg2;
- (void)_updateDropCaretToRange:(id)arg1 session:(id)arg2;
- (id)_positionInSession:(id)arg1;
- (id)_rangeInSession:(id)arg1;
- (void)_cleanupDrop;
- (id)_dropRequestWithRange:(id)arg1 suggestedProposal:(id)arg2 inSession:(id)arg3;
- (void)_prepareSameViewOperation:(unsigned long long)arg1 forItems:(id)arg2 fromRanges:(id)arg3 toRange:(id)arg4;
- (void)_performDropToRange:(id)arg1 inSession:(id)arg2;
- (id)_previewForIrrelevantItemFromPreview:(id)arg1;
- (void)_performSameViewOperation:(id)arg1;
- (id)_previewForTopmostItem:(id)arg1;
- (id)_shrinkingPreview:(id)arg1 toPosition:(id)arg2;
- (id)_suggestedProposalForRequest:(id)arg1;
- (long long)_textPasteRangeBehavior;
- (id)_textPasteSelectableRangeForResult:(id)arg1 fromRange:(id)arg2;
- (void)textPasteSessionWillBeginPasting:(id)arg1;
- (void)textPasteSessionDidEndPasting:(id)arg1;
- (void)textPasteSessionWillHidePasteResult:(id)arg1;
- (void)textPasteSessionDidRevealPasteResult:(id)arg1;
- (_Bool)accessibilityCanDrag;
- (void)notifyTextInteraction;
- (void)invalidateDropCaret;
- (id)initWithDraggableOnlyView:(id)arg1;
- (void)installDragInteractionIfNeeded;
- (void)installDropInteractionIfNeeded;

@end
