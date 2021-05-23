/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIViewController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSIndexPath, NSString, WFAction, WFContentCollection, WFDatabase, WFModulesQuickLookView, WFRunWorkflowFooterView, WFRunWorkflowToolbar, WFWorkflow, WFWorkflowController, WFWorkflowRunEvent, WFWorkflowViewController;

@protocol WFRunWorkflowViewControllerDelegate;

@interface WFRunWorkflowViewController : UIViewController <Swift>

{
    _Bool _clearsWorkflowSettings;
    _Bool _indicatesLoadingBeforeRunning;
    _Bool _runningFromOtherWorkflow;
    _Bool _droppingInputContent;
    id <WFRunWorkflowViewControllerDelegate> _delegate;
    WFWorkflow *_workflow;
    WFDatabase *_database;
    unsigned long long _editingState;
    WFWorkflowController *_workflowController;
    WFContentCollection *_workflowInput;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _parameterInputHandler;
    WFAction *_lastRunningAction;
    WFModulesQuickLookView *_quickLookView;
    WFRunWorkflowFooterView *_footerView;
    CDUnknownBlockType _prepareToRunCompletion;
    NSIndexPath *_prepareToRunIndexPath;
    WFWorkflowRunEvent *_runEvent;
    WFAction *_currentlyRunningAction;
    WFWorkflowViewController *_workflowViewController;
}

@property (retain, nonatomic) WFWorkflowController *workflowController;
@property (retain, nonatomic) WFContentCollection *workflowInput;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (copy, nonatomic) CDUnknownBlockType parameterInputHandler;
@property (retain, nonatomic) WFAction *lastRunningAction;
@property (nonatomic) _Bool runningFromOtherWorkflow;
@property (weak, nonatomic) WFModulesQuickLookView *quickLookView;
@property (weak, nonatomic) WFRunWorkflowFooterView *footerView;
@property (nonatomic) _Bool droppingInputContent;
@property (copy, nonatomic) CDUnknownBlockType prepareToRunCompletion;
@property (retain, nonatomic) NSIndexPath *prepareToRunIndexPath;
@property (retain, nonatomic) WFWorkflowRunEvent *runEvent;
@property (retain, nonatomic) WFAction *currentlyRunningAction;
@property (weak, nonatomic, readonly) WFWorkflowViewController *workflowViewController;
@property (weak, nonatomic, readonly) WFRunWorkflowToolbar *toolbar;
@property (weak, nonatomic) id <WFRunWorkflowViewControllerDelegate> delegate;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic) _Bool clearsWorkflowSettings;
@property (nonatomic) _Bool indicatesLoadingBeforeRunning;
@property (nonatomic, readonly) unsigned long long editingState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)accessibilityPerformMagicTap;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (id)keyCommands;
- (void)previewControllerWillDismiss:(id)arg1;
- (struct CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id *)arg3;
- (void)updateContentInset;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)workflowController:(id)arg1 actionDidRequestWorkflowExit:(id)arg2;
- (_Bool)workflowController:(id)arg1 handleUnsupportedUserInterfaceForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)workflowController:(id)arg1 handleUnsupportedEnvironmentForAction:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)workflowController:(id)arg1 parameterInputProviderForAction:(id)arg2;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;
- (void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)action:(id)arg1 canProvideInputForParameter:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForFooterInSection:(long long)arg3;
- (id)createModelForAction:(id)arg1;
- (void)setEditingState:(unsigned long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)runWorkflowFromKeyPress;
- (void)stopWorkflow;
- (void)parameterInputViewControllerDidCancel:(id)arg1;
- (void)parameterInputViewControllerDidFinish:(id)arg1 withParameterStates:(id)arg2;
- (void)accessibilityAnnounce:(id)arg1;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 context:(id)arg3 cellConfigurationFunction:(CDUnknownFunctionPointerType)arg4;
- (void)runWorkflowFromSource:(id)arg1;
- (id)errorWithRecoveryOptionsFromError:(id)arg1;
- (void)runToolbarPlayTapped:(id)arg1;
- (void)runToolbarStopTapped:(id)arg1;
- (void)runWorkflowFooterViewDidSelectAddButton:(id)arg1;
- (void)quickLookViewWantsFullscreen:(id)arg1;
- (void)quickLookView:(id)arg1 clickedShare:(id)arg2 forContentItem:(id)arg3;
- (void)dismissViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)indexPathForAction:(id)arg1;
- (void)runWorkflowFromSource:(id)arg1 withInput:(id)arg2 currentState:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)finishWorkflowWithOutput:(id)arg1 error:(id)arg2 cancelled:(_Bool)arg3;
- (void)checkModulePreparationScrollState;
- (_Bool)shouldShowQuickLookView;
- (_Bool)shouldShowAddButton;
- (void)updateQuickLookWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearQuickLook;
- (void)scrollToQuickLook;
- (void)invalidateLayoutForFooterView;

@end
