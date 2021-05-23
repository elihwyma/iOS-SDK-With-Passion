/*
 Image: /System/Library/PrivateFrameworks/AppPredictionUI.framework/AppPredictionUI
 */

#import <Foundation/NSObject.h>

@class INIntent, NSString, WFLWorkflowController;

@protocol APUIWFLIntentControllerDelegate;

@interface APUIWFLIntentController : NSObject

{
    INIntent *_intent;
    long long _executionContext;
    id <APUIWFLIntentControllerDelegate> _delegate;
    WFLWorkflowController *_workflowController;
    CDUnknownBlockType _intentProceedHandler;
}

@property (retain, nonatomic) INIntent *intent;
@property (retain, nonatomic) WFLWorkflowController *workflowController;
@property (copy, nonatomic) CDUnknownBlockType intentProceedHandler;
@property (nonatomic) long long executionContext;
@property (weak, nonatomic) id <APUIWFLIntentControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (void)begin;
- (id)initWithIntent:(id)arg1;
- (void)workflowControllerWillRun:(id)arg1;
- (void)workflowController:(id)arg1 didRunAction:(id)arg2;
- (void)launchAppWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)action:(id)arg1 requiresContinuingInAppWithProceedHandler:(CDUnknownBlockType)arg2;
- (id)workflowController:(id)arg1 userInterfaceForRunningAction:(id)arg2;
- (void)handleIntentAction:(id)arg1 requiresUserConfirmation:(_Bool)arg2 requiresUserAuthentication:(_Bool)arg3 withIntentResponse:(id)arg4 proceedHandler:(CDUnknownBlockType)arg5;
- (void)workflowController:(id)arg1 willRunAction:(id)arg2 withInput:(id)arg3 proceedHandler:(CDUnknownBlockType)arg4;
- (void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2;
- (void)workflowControllerDidStop:(id)arg1 withError:(id)arg2;
- (void)logDebugInformation:(id)arg1;
- (void)confirmationGranted:(_Bool)arg1;
- (void)_setWorkflowControllerExecutionContext;

@end
