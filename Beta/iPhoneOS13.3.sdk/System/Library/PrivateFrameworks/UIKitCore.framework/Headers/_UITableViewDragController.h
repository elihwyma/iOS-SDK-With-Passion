/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSMapTable, NSMutableOrderedSet, NSString, UIDragInteraction, UITableView, UITableViewCell;

@protocol UIDragSession, _UITableViewDragControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDragController : NSObject

{
    _Bool _forceEnabledForReordering;
    long long _clientEnabledState;
    id <UIDragSession> _dragSession;
    NSMutableOrderedSet *_indexPaths;
    UIDragInteraction *_dragInteraction;
    UITableView<_UITableViewDragControllerDelegate> *_tableView;
    UITableViewCell *_initiatingCell;
    NSIndexPath *_initiatingIndexPath;
    UITableViewCell *_tentativeInitiatingCell;
    NSIndexPath *_tentativeInitiatingIndexPath;
    NSMutableOrderedSet *_tentativeIndexPaths;
    NSMapTable *_cellsAnimatingCancel;
}

@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property (weak, nonatomic) UITableView<_UITableViewDragControllerDelegate> *tableView;
@property (retain, nonatomic) UITableViewCell *initiatingCell;
@property (retain, nonatomic) NSIndexPath *initiatingIndexPath;
@property (retain, nonatomic) NSMutableOrderedSet *indexPaths;
@property (retain, nonatomic) UITableViewCell *tentativeInitiatingCell;
@property (retain, nonatomic) NSIndexPath *tentativeInitiatingIndexPath;
@property (retain, nonatomic) NSMutableOrderedSet *tentativeIndexPaths;
@property (retain, nonatomic) id <UIDragSession> dragSession;
@property (retain, nonatomic) NSMapTable *cellsAnimatingCancel;
@property (nonatomic) long long clientEnabledState;
@property (nonatomic) _Bool forceEnabledForReordering;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (nonatomic, readonly) UITableViewCell *draggedCell;
@property (nonatomic, readonly) NSIndexPath *draggedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)isEnabledByDefault;

- (id)initWithTableView:(id)arg1;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint)arg3;
- (_Bool)_dragInteraction:(id)arg1 sessionSupportsSystemDrag:(id)arg2;
- (_Bool)_dragInteractionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1;
- (void)uninstallFromTableView;
- (void)resetDragState;
- (void)setupDragInteraction;
- (void)forceReset;
- (void)updateDragInteractionEnabledState;
- (void)clearTentativeRows;
- (void)beginDragForTentativeRows;
- (_Bool)canProvideItemsForDragAtPoint:(struct CGPoint)arg1;
- (void)addTentativeRowAtIndexPath:(id)arg1;
- (void)beginDragOfRowsForSession:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)immediatelyBeginDragWithTouch:(id)arg1;

@end
