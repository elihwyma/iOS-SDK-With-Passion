/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMapTable, NSProgress, NSString, WFContentCollection, WFWorkflow, WFWorkflowControllerState;

@protocol WFWorkflowControllerDelegate;

@interface WFWorkflowController : NSObject

{
    WFWorkflowController *_strongSelf;
    _Bool _donateInteraction;
    _Bool _paused;
    _Bool _running;
    _Bool _stepping;
    WFWorkflow *_workflow;
    WFContentCollection *_input;
    WFContentCollection *_output;
    id <WFWorkflowControllerDelegate> _delegate;
    NSProgress *_progress;
    NSString *_runSource;
    NSString *_automationType;
    unsigned long long _currentIndex;
    NSMapTable *_variableTable;
    WFWorkflowControllerState *_pendingState;
    NSDictionary *_pendingProcessedParameters;
}

@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic, getter=isRunning) _Bool running;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic, getter=isStepping) _Bool stepping;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) WFContentCollection *output;
@property (retain, nonatomic) NSMapTable *variableTable;
@property (retain, nonatomic) WFWorkflowControllerState *pendingState;
@property (retain, nonatomic) NSDictionary *pendingProcessedParameters;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFContentCollection *input;
@property (nonatomic) _Bool donateInteraction;
@property (weak, nonatomic) id <WFWorkflowControllerDelegate> delegate;
@property (retain, nonatomic) WFWorkflowControllerState *currentState;
@property (copy, nonatomic) NSString *runSource;
@property (copy, nonatomic) NSString *automationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;

- (id)init;
- (void)run;
- (void)stop;
- (void)reset;
- (id)currentAction;
- (void)workflowControllerWillRun:(id)arg1;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)action:(id)arg1 provideInputForParameters:(id)arg2 withDefaultStates:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (_Bool)action:(id)arg1 canProvideInputForParameter:(id)arg2;
- (_Bool)setContent:(id)arg1 forVariableWithName:(id)arg2;
- (id)contentForVariableWithName:(id)arg1;
- (id)workflowInput;
- (id)userInterfaceToPresentAlertForEvaluator:(id)arg1;
- (id)stateWithActionIndex:(unsigned long long)arg1 input:(id)arg2 processedParameters:(id)arg3;
- (void)_stepWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setFinishedRunningWithSuccess:(_Bool)arg1;
- (void)evaluateRemoteQuarantinePolicyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)retainSelf;
- (void)autoreleaseSelf;
- (void)logRunEvent:(_Bool)arg1;
- (void)logStartEvent;
- (id)parameterInputProviderForAction:(id)arg1;
- (id)userInterfaceForAction:(id)arg1;

@end
