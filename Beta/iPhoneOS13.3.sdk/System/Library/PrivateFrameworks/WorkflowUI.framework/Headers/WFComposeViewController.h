/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

@class NSArray, NSHashTable, NSLayoutConstraint, NSMutableArray, NSString, UINavigationController, UITraitCollection, UIView, WFActionDrawerCoordinator, WFActionDrawerViewController, WFComposeFlowController, WFComposeUserActivityManager, WFDrawerController, WFEditWorkflowViewController, WFRunWorkflowToolbar, WFWorkflow, WFWorkflowSettingsLayoutMetrics;

@protocol WFComposeViewControllerDelegate, WFModuleDelegate;

@interface WFComposeViewController : UIViewController

{
    _Bool _actionsHidden;
    _Bool _shouldProvideNavigationBar;
    _Bool _shouldShowShareButton;
    _Bool _observingSharingEnabledUserDefault;
    WFEditWorkflowViewController *_workflowViewController;
    double _bottomContentInset;
    id <WFComposeViewControllerDelegate> _delegate;
    UIView *_separatorView;
    NSHashTable *_movedDragControllers;
    UITraitCollection *_upcomingTraitCollection;
    WFComposeUserActivityManager *_userActivityManager;
    NSMutableArray *_editingStates;
    UINavigationController *_workflowNavigationController;
    WFRunWorkflowToolbar *_toolbar;
    NSLayoutConstraint *_toolbarBottomAnchor;
    WFWorkflowSettingsLayoutMetrics *_layoutMetrics;
    WFActionDrawerCoordinator *_drawerCoordinator;
    UINavigationController *_drawerNavigationController;
    WFDrawerController *_drawerController;
    unsigned long long _preHideVisibility;
    Class _actionsViewControllerClass;
    WFComposeFlowController *_flowController;
}

@property (weak, nonatomic, readonly) UIView *separatorView;
@property (nonatomic, readonly) NSHashTable *movedDragControllers;
@property (retain, nonatomic) UITraitCollection *upcomingTraitCollection;
@property (retain, nonatomic) WFComposeUserActivityManager *userActivityManager;
@property (nonatomic, readonly) NSMutableArray *editingStates;
@property (nonatomic, readonly) _Bool actionsHidden;
@property (retain, nonatomic) UINavigationController *workflowNavigationController;
@property (retain, nonatomic) WFRunWorkflowToolbar *toolbar;
@property (retain, nonatomic) NSLayoutConstraint *toolbarBottomAnchor;
@property (nonatomic) _Bool shouldProvideNavigationBar;
@property (nonatomic) _Bool shouldShowShareButton;
@property (nonatomic) _Bool observingSharingEnabledUserDefault;
@property (retain, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics;
@property (retain, nonatomic) WFActionDrawerCoordinator *drawerCoordinator;
@property (retain, nonatomic) UINavigationController *drawerNavigationController;
@property (retain, nonatomic) WFDrawerController *drawerController;
@property (nonatomic) unsigned long long preHideVisibility;
@property (retain, nonatomic) Class actionsViewControllerClass;
@property (retain, nonatomic) WFComposeFlowController *flowController;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) WFActionDrawerViewController *actionsViewController;
@property (nonatomic, readonly) WFEditWorkflowViewController *workflowViewController;
@property (nonatomic, readonly) double bottomContentInset;
@property (nonatomic, readonly) unsigned long long editingState;
@property (weak, nonatomic) id <WFComposeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *containerView;
@property (nonatomic, readonly) NSArray *participatingViewControllers;
@property (nonatomic, readonly) NSArray *scrollViewsAffectingDrag;
@property (nonatomic, readonly) id <WFModuleDelegate> moduleDelegate;

- (void)beginEditing;
- (id)home;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityPerformMagicTap;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)canBecomeFirstResponder;
- (id)cancelBarButtonItem;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewSafeAreaInsetsDidChange;
- (id)keyCommands;
- (void)updateUserActivityState:(id)arg1;
- (void)didTapDone;
- (void)finishEditing;
- (id)doneBarButtonItem;
- (void)workflowViewControllerRequestsActionDrawer:(id)arg1;
- (_Bool)isDrawerAvailableForWorkflowViewController:(id)arg1;
- (void)workflowViewControllerRequestsDismissal:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)workflowViewControllerWillRun:(id)arg1 continueHandler:(CDUnknownBlockType)arg2;
- (void)workflowViewControllerDidRun:(id)arg1 withOutput:(id)arg2 error:(id)arg3 cancelled:(_Bool)arg4 continueHandler:(CDUnknownBlockType)arg5;
- (id)runWorkflowToolbarForWorkflowViewController:(id)arg1;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2;
- (void)dragController:(id)arg1 movedInsideViewControllers:(id)arg2;
- (void)dragController:(id)arg1 willBeAcceptedByDelegate:(id)arg2;
- (void)workflowViewControllerRequestsTutorial:(id)arg1;
- (void)workflowViewControllerInvalidatedSuggestions:(id)arg1;
- (void)workflowViewControllerDidAddAction:(id)arg1;
- (void)workflowViewControllerDidRemoveAction:(id)arg1;
- (void)didTapNext;
- (void)updateShareButtonVisibility;
- (void)composeFlowControllerDidFinishEditing:(id)arg1;
- (id)dismissingScrollViewForDrawerController:(id)arg1;
- (void)drawerController:(id)arg1 willTransitionToVisibility:(unsigned long long)arg2;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 shouldProvideNavigationBar:(_Bool)arg3 shouldShowShareButton:(_Bool)arg4 actionsViewControllerClass:(Class)arg5 workflowViewControllerClass:(Class)arg6;
- (id)workflowSubViewController;
- (_Bool)shouldUseOverlaidDrawer;
- (void)updateBottomContentInsetForVisibility:(unsigned long long)arg1;
- (void)updateDrawerVisibility;
- (void)updateToolbarVisibility;
- (void)setupDrawerIfNeeded;
- (id)emptyStateString;
- (void)finishEditingAndDismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dismissForTutorial:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didTapCancel:(id)arg1;
- (void)pushEditingState:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)popEditingState:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateEditingStateAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setEditingState:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateNavigationBarStateAnimated:(_Bool)arg1;
- (void)adjustLargeTitleSize;
- (void)updateScrollsToTop;
- (void)setActionsHidden:(_Bool)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)runWorkflowFromKeyPress;
- (void)stopWorkflow;
- (void)searchActions;
- (void)undoLastWorkflowEdit;
- (void)redoLastWorkflowEdit;

@end
