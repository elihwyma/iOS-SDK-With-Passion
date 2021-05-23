/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIMultiSelectInteraction, UIMultiSelectInteractionState, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewMultiSelectController : NSObject

{
    UITableView *_tableView;
    UIMultiSelectInteraction *_multiSelectInteraction;
    UIMultiSelectInteractionState *_currentSelectionState;
}

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction;
@property (retain, nonatomic) UIMultiSelectInteractionState *currentSelectionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTableView:(id)arg1;
- (void)selectedIndexPathsChanged:(id)arg1;
- (_Bool)supportsMultiSelectInteraction:(id)arg1;
- (_Bool)isInMultiSelectMode;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(_Bool)arg1;
- (_Bool)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(struct CGPoint)arg2 withVelocity:(struct CGPoint)arg3;
- (_Bool)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(struct CGPoint)arg3 withVelocity:(struct CGPoint)arg4;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(struct CGPoint)arg2;
- (_Bool)shouldAllowSelectionExtensionAtPoint:(struct CGPoint)arg1;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(struct CGPoint)arg2;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)_tableViewDelegate;
- (void)_selectIndexPaths:(id)arg1;
- (void)_deselectIndexPaths:(id)arg1;
- (_Bool)_shouldBeginInteractionAtPoint:(struct CGPoint)arg1;
- (_Bool)_isPointInsideEditControl:(struct CGPoint)arg1;
- (void)_updateSelectedIndexPaths:(id)arg1;
- (void)_updateSelectedIndexPathsForCurrentSelection;
- (void)willBeginExtendingSelectionAtIndexPath:(id)arg1;
- (void)_endAutoScroll;
- (void)_adjustSelectionRangeToIndexPath:(id)arg1 isDeselecting:(_Bool)arg2;
- (void)toggleSelectionStateUpToIndexPath:(id)arg1;
- (void)_handleAutoScrollFromPoint:(struct CGPoint)arg1;
- (void)uninstallFromTableView;

@end
