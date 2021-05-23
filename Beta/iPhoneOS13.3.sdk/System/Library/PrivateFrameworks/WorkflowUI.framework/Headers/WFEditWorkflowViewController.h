/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFRunWorkflowViewController.h>

@class NSAttributedString, NSHashTable, NSIndexPath, NSLayoutConstraint, NSString, NSUndoManager, UIButton, UIResponder, UIView, WFActionDragFeedbackGenerator, WFEditShortcutEvent, WFWorkflowEmptyStateView;

@protocol WFEditWorkflowViewControllerDelegate, WFVariableUIDelegate;

@interface WFEditWorkflowViewController : WFRunWorkflowViewController

{
    NSUndoManager *_undoManager;
    id <WFVariableUIDelegate> _variableUIDelegate;
    double _bottomContentInset;
    NSAttributedString *_emptyStateInstructionText;
    NSHashTable *_currentDragControllers;
    NSHashTable *_moduleDragControllers;
    WFWorkflowEmptyStateView *_emptyStateView;
    UIView *_borderView;
    UIButton *_settingsButton;
    WFActionDragFeedbackGenerator *_dragFeedbackGenerator;
    UIResponder *_wf_firstResponder;
    UIView *_firstResponderHintView;
    NSLayoutConstraint *_hintBottomConstraint;
    long long _revealState;
    CDUnknownBlockType _endRevealGoBackHandler;
    CDUnknownBlockType _endRevealScrolledAwayHandler;
    UIButton *_endRevealButton;
    NSIndexPath *_actionRevealFromIndexPath;
    NSIndexPath *_actionRevealToIndexPath;
    WFEditShortcutEvent *_editShortcutEvent;
    struct CGPoint _actionRevealInitialOffset;
}

@property (nonatomic, readonly) NSHashTable *currentDragControllers;
@property (nonatomic, readonly) NSHashTable *moduleDragControllers;
@property (weak, nonatomic, readonly) WFWorkflowEmptyStateView *emptyStateView;
@property (weak, nonatomic, readonly) UIView *borderView;
@property (weak, nonatomic, readonly) UIButton *settingsButton;
@property (nonatomic, readonly) NSUndoManager *undoManager;
@property (retain, nonatomic) WFActionDragFeedbackGenerator *dragFeedbackGenerator;
@property (weak, nonatomic) UIResponder *wf_firstResponder;
@property (weak, nonatomic) UIView *firstResponderHintView;
@property (retain, nonatomic) NSLayoutConstraint *hintBottomConstraint;
@property (nonatomic) long long revealState;
@property (copy, nonatomic) CDUnknownBlockType endRevealGoBackHandler;
@property (copy, nonatomic) CDUnknownBlockType endRevealScrolledAwayHandler;
@property (retain, nonatomic) UIButton *endRevealButton;
@property (retain, nonatomic) NSIndexPath *actionRevealFromIndexPath;
@property (retain, nonatomic) NSIndexPath *actionRevealToIndexPath;
@property (nonatomic) struct CGPoint actionRevealInitialOffset;
@property (retain, nonatomic) WFEditShortcutEvent *editShortcutEvent;
@property (weak, nonatomic) id <WFEditWorkflowViewControllerDelegate> delegate;
@property (weak, nonatomic) id <WFVariableUIDelegate> variableUIDelegate;
@property (nonatomic) _Bool scrollsToTop;
@property (nonatomic) double bottomContentInset;
@property (copy, nonatomic) NSAttributedString *emptyStateInstructionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)displaysEmptyView;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)keyCommands;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)workflow:(id)arg1 reloadActions:(id)arg2;
- (void)workflow:(id)arg1 actionForSuggestionsDrawerDidUpdateOutputContentClasses:(id)arg2;
- (void)workflow:(id)arg1 removeAction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)workflow:(id)arg1 moveActionsAtIndexes:(id)arg2 toIndexes:(id)arg3;
- (void)workflow:(id)arg1 insertActions:(id)arg2 atIndexes:(id)arg3;
- (_Bool)module:(id)arg1 setParameterState:(id)arg2 forParameter:(id)arg3 action:(id)arg4;
- (_Bool)module:(id)arg1 shouldAllowRemovingAction:(id)arg2;
- (void)removeActionPressedForModule:(id)arg1 withAction:(id)arg2;
- (unsigned long long)indentationLevelForModule:(id)arg1 withAction:(id)arg2;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 shouldHideItemAtIndexPath:(id)arg3;
- (id)createModelForAction:(id)arg1;
- (void)dragControllerWillBeginDragging:(id)arg1;
- (void)dragController:(id)arg1 didEnterViewController:(id)arg2;
- (void)dragController:(id)arg1 didExitViewController:(id)arg2;
- (void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2;
- (_Bool)dragController:(id)arg1 shouldAcceptViewWithCompletion:(CDUnknownBlockType)arg2;
- (void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2;
- (void)settingsViewControllerDidFinish:(id)arg1;
- (void)responderDidBeginEditing:(id)arg1;
- (void)responderDidEndEditing:(id)arg1;
- (void)settingsViewControllerWantsWorkflowReload:(id)arg1;
- (void)updateEditingStateAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setEditingState:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)contentClassesViewController:(id)arg1 didChangeSelectedClasses:(id)arg2;
- (void)contentClassesToolbarTapped:(id)arg1;
- (void)emptyViewDidRequestActionDrawer:(id)arg1;
- (void)emptyViewDidRequestTutorial:(id)arg1;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 allowsActionDragAndDrop:(_Bool)arg4;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 cellConfigurationFunction:(CDUnknownFunctionPointerType)arg4;
- (void)updateEmptyStateViewVisibilityAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runWorkflowFromSource:(id)arg1;
- (void)didFinishAnimatingReveal;
- (void)resetVisibleCellStylesForEndReveal;
- (void)didFinishAnimatingRevealGoBack;
- (void)didSelectEndRevealButton;
- (void)resetUIForRevealActionEnd;
- (void)cleanupAfterReveal;
- (void)cancelRevealAction;
- (void)runToolbarShareTapped:(id)arg1;
- (void)runToolbarUndoTapped:(id)arg1;
- (void)runToolbarRedoTapped:(id)arg1;
- (void)runToolbarAddTapped:(id)arg1;
- (void)presentSettingsViewController;
- (id)errorWithRecoveryOptionsFromError:(id)arg1;
- (void)updateBorderWidth;
- (id)initialIndexPathForDragController:(id)arg1;
- (_Bool)canMoveActionsAtIndexes:(id)arg1 toIndexes:(id)arg2;
- (void)commitInsertionOfActions:(id)arg1 atIndexes:(id)arg2 allowUndo:(_Bool)arg3;
- (void)commitMovingOfActionsAtIndexes:(id)arg1 toIndexes:(id)arg2 allowUndo:(_Bool)arg3;
- (void)commitRemovalOfActions:(id)arg1 allowUndo:(_Bool)arg2;
- (void)appendAction:(id)arg1;
- (void)_appendActions:(id)arg1;
- (void)scrollViewToVisible:(id)arg1;
- (void)scrollFirstResponderToVisible;
- (void)updateContentInsetAnimated:(_Bool)arg1;
- (void)responderDidType:(id)arg1;
- (void)checkRevealActionScrollState;
- (void)shareWorkflow:(id)arg1;
- (void)updateEditEvent;
- (void)logEditEventIfNeccesary;

@end
