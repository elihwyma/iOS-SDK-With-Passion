/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, WFAction, WFDatabase, WFParameterInputViewController, WFWorkflowController, WFWorkflowReference, WFWorkflowRunEvent;

@protocol WFLibraryRunCoordinatorDelegate;

@interface WFLibraryRunCoordinator : NSObject

{
    _Bool _handingOff;
    WFWorkflowController *_workflowController;
    id <WFLibraryRunCoordinatorDelegate> _delegate;
    NSString *_source;
    WFDatabase *_database;
    NSHashTable *_observers;
    WFWorkflowReference *_loadingWorkflow;
    WFAction *_currentlyRunningAction;
    CDUnknownBlockType _parameterInputHandler;
    CDUnknownBlockType _completionHandler;
    WFParameterInputViewController *_runningInputViewController;
    id <WFLibraryRunCoordinatorDelegate> _delegateOverride;
    WFWorkflowRunEvent *_runEvent;
}

@property (copy, nonatomic, readonly) NSString *source;
@property (nonatomic, readonly) WFWorkflowController *workflowController;
@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) NSHashTable *observers;
@property (retain, nonatomic) WFWorkflowReference *loadingWorkflow;
@property (retain, nonatomic) WFAction *currentlyRunningAction;
@property (copy, nonatomic) CDUnknownBlockType parameterInputHandler;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (weak, nonatomic) WFParameterInputViewController *runningInputViewController;
@property (weak, nonatomic) id <WFLibraryRunCoordinatorDelegate> delegateOverride;
@property (retain, nonatomic) WFWorkflowRunEvent *runEvent;
@property (nonatomic) _Bool handingOff;
@property (weak, nonatomic) id <WFLibraryRunCoordinatorDelegate> delegate;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) WFWorkflowReference *runningWorkflow;
@property (nonatomic, readonly) id <WFLibraryRunCoordinatorDelegate> currentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)addObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1;
- (id)view;
- (void)workflowControllerWillRun:(id)arg1;
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
- (void)parameterInputViewControllerDidCancel:(id)arg1;
- (void)parameterInputViewControllerDidFinish:(id)arg1 withParameterStates:(id)arg2;
- (id)initWithSource:(id)arg1 database:(id)arg2;
- (id)initWithWorkflowController:(id)arg1 database:(id)arg2 source:(id)arg3;
- (void)startedLoadingInputForWorkflow:(id)arg1;
- (void)clearDelegateOverride;
- (void)resumeWorkflow:(id)arg1 fromSource:(id)arg2 withState:(id)arg3;
- (void)runWorkflowReference:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)runWorkflow:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 delegate:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)openWorkflowAndRun:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 delegate:(id)arg4 state:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)runWorkflow:(id)arg1 fromSource:(id)arg2 withInput:(id)arg3 delegate:(id)arg4 state:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)handOffWithState:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)handOffWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didFinishRunningWorkflow:(id)arg1 withError:(id)arg2;
- (void)updateProgress:(double)arg1 forWorkflow:(id)arg2;
- (void)accessibilityAnnounce:(id)arg1;

@end
