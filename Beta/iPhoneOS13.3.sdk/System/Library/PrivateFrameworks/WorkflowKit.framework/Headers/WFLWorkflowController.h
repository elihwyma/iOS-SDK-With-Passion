/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class INInteraction, NSArray, NSProgress, NSString, WFWorkflow, WFWorkflowController;

@protocol WFLWorkflowControllerDelegate;

@interface WFLWorkflowController : NSObject

{
    NSArray *_airPlayRouteIDs;
    id <WFLWorkflowControllerDelegate> _delegate;
    long long _executionContext;
    WFWorkflowController *_controller;
    INInteraction *_lastInteraction;
}

@property (nonatomic, readonly) WFWorkflowController *controller;
@property (retain, nonatomic) INInteraction *lastInteraction;
@property (weak, nonatomic) id <WFLWorkflowControllerDelegate> delegate;
@property (nonatomic, readonly) WFWorkflow *workflow;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly) NSProgress *progress;
@property (nonatomic) long long executionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *airPlayRouteIDs;

- (void)stop;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithWorkflow:(id)arg1;
- (void)runWithInput:(id)arg1;
- (void)presentAlert:(id)arg1;
- (void)showInteractionIfNeeded:(id)arg1 requiringConfirmation:(_Bool)arg2 requiringAuthentication:(_Bool)arg3 executionStage:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)speakText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openInteractionInApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openUserActivity:(id)arg1 bundleIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)executeIntent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureIntent:(id)arg1;
- (void)workflowControllerWillRun:(id)arg1;
- (void)workflowController:(id)arg1 didFinishRunningWithError:(id)arg2 cancelled:(_Bool)arg3;
- (void)workflowController:(id)arg1 prepareToRunAction:(id)arg2 withInput:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (id)workflowController:(id)arg1 userInterfaceForAction:(id)arg2;
- (id)runSource;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
