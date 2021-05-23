/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class JSVirtualMachine, NSThread, NSTimer;

@protocol WFRemoteQuarantinePolicyEvaluatorDelegate;

@interface WFRemoteQuarantinePolicyEvaluator : NSObject

{
    JSVirtualMachine *_javaScriptVirtualMachine;
    id <WFRemoteQuarantinePolicyEvaluatorDelegate> _delegate;
    NSThread *_javaScriptEvaluationThread;
    struct __CFRunLoop *_javaScriptEvaluationThreadRunLoop;
    NSTimer *_javaScriptVirtualMachineDestructionTimer;
}

@property (nonatomic, readonly) NSThread *javaScriptEvaluationThread;
@property (retain, nonatomic) JSVirtualMachine *javaScriptVirtualMachine;
@property (nonatomic, readonly) struct __CFRunLoop *javaScriptEvaluationThreadRunLoop;
@property (nonatomic, readonly) NSTimer *javaScriptVirtualMachineDestructionTimer;
@property (weak, nonatomic) id <WFRemoteQuarantinePolicyEvaluatorDelegate> delegate;

+ (id)sharedEvaluator;

- (id)init;
- (void)dealloc;
- (void)evaluatePolicyForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_evaluatePolicyForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
