//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class UIMultiSelectInteraction, UIMultiSelectInteractionState, UITableView;

__attribute__((visibility("hidden")))
@interface _UITableViewMultiSelectController : NSObject <UIMultiSelectInteractionDelegate>
{
    UITableView *_tableView;
    UIMultiSelectInteraction *_multiSelectInteraction;
    UIMultiSelectInteractionState *_currentSelectionState;
}

@property(retain, nonatomic) UIMultiSelectInteractionState *currentSelectionState; // @synthesize currentSelectionState=_currentSelectionState;
@property(retain, nonatomic) UIMultiSelectInteraction *multiSelectInteraction; // @synthesize multiSelectInteraction=_multiSelectInteraction;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;
- (void)didCancelMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2;
- (BOOL)multiSelectInteractionGestureShouldPreventDragLiftGesture:(id)arg1;
- (void)multiSelectInteraction:(id)arg1 appendSelectionAtPoint:(CGPoint)arg2;
- (void)multiSelectInteraction:(id)arg1 toggleSelectionStateUpToPoint:(CGPoint)arg2;
- (void)toggleSelectionStateUpToIndexPath:(id)arg1;
- (BOOL)shouldAllowSelectionExtensionAtPoint:(CGPoint)arg1;
- (void)didEndMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2;
- (BOOL)shouldBeginMultiSelectInteraction:(id)arg1 ofType:(long long)arg2 atPoint:(CGPoint)arg3 withVelocity:(CGPoint)arg4;
- (BOOL)supportsMultiSelectInteraction:(id)arg1;
- (void)willBeginExtendingSelectionAtIndexPath:(id)arg1;
- (void)willBeginMultiSelectInteraction:(id)arg1 atPoint:(CGPoint)arg2;
- (BOOL)interaction:(id)arg1 shouldAutomaticallyTransitionToMultiSelectModeAtPoint:(CGPoint)arg2 withVelocity:(CGPoint)arg3;
- (BOOL)_shouldBeginInteractionAtPoint:(CGPoint)arg1;
- (void)automaticallyTransitionToMultiSelectModeKeepingCurrentSelection:(BOOL)arg1;
- (BOOL)isInMultiSelectMode;
- (id)_tableViewDelegate;
- (BOOL)_isPointInsideEditControl:(CGPoint)arg1;
- (void)_adjustSelectionRangeToIndexPath:(id)arg1 isDeselecting:(BOOL)arg2;
- (void)_updateSelectedIndexPaths:(id)arg1;
- (void)_updateSelectedIndexPathsForCurrentSelection;
- (void)_deselectIndexPaths:(id)arg1;
- (void)_selectIndexPaths:(id)arg1;
- (void)_endAutoScroll;
- (void)_handleAutoScrollFromPoint:(CGPoint)arg1;
- (void)selectedIndexPathsChanged:(id)arg1;
- (void)uninstallFromTableView;
- (id)initWithTableView:(id)arg1;

@end

