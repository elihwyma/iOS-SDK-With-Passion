/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSExtension, NSString, NSUUID, WFContentCollection, WFWorkflowReference;

@protocol OS_dispatch_queue, OS_dispatch_source, WFOutOfProcessWorkflowControllerDelegate;

@interface WFOutOfProcessWorkflowController : NSObject

{
    WFContentCollection *_input;
    WFContentCollection *_output;
    id <WFOutOfProcessWorkflowControllerDelegate> _delegate;
    NSString *_debugIdentifier;
    NSData *_workflowData;
    long long _environment;
    double _timeoutSeconds;
    WFWorkflowReference *_workflowReference;
    NSExtension *_extension;
    NSUUID *_extensionRequestIdentifier;
    NSObject<OS_dispatch_queue> *_internalSerialQueue;
    NSObject<OS_dispatch_source> *_extensionMaxRunTimeTimer;
    long long _state;
}

@property (nonatomic, readonly) NSData *workflowData;
@property (nonatomic, readonly) long long environment;
@property (nonatomic, readonly) double timeoutSeconds;
@property (nonatomic, readonly) WFWorkflowReference *workflowReference;
@property (retain, nonatomic) NSExtension *extension;
@property (retain, nonatomic) NSUUID *extensionRequestIdentifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalSerialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *extensionMaxRunTimeTimer;
@property (nonatomic) long long state;
@property (retain, nonatomic) WFContentCollection *input;
@property (nonatomic, readonly) WFContentCollection *output;
@property (weak, nonatomic) id <WFOutOfProcessWorkflowControllerDelegate> delegate;
@property (nonatomic, readonly) NSString *debugIdentifier;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stop;
- (id)extensionContext;
- (id)extensionInterface;
- (_Bool)runWithInput:(id)arg1 error:(out id *)arg2;
- (void)workflowDidStart;
- (void)workflowDidFinishRunningWithError:(id)arg1 cancelled:(_Bool)arg2;
- (id)initWithWorkflow:(id)arg1 database:(id)arg2 environment:(long long)arg3;
- (id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3;
- (id)initWithWorkflowData:(id)arg1 debugIdentifier:(id)arg2 environment:(long long)arg3 workflowReference:(id)arg4;
- (void)handleExtensionMaxRunTimeExceeded;
- (void)handleXPCConnectionInterruption;
- (void)stopExtension;
- (void)cancelTimeoutTimer;
- (void)restartTimeoutTimer;
- (void)reportFinishToDelegateWithError:(id)arg1 cancelled:(_Bool)arg2;

@end
