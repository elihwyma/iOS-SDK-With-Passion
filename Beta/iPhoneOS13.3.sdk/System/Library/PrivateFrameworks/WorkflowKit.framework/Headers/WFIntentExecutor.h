/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class INCExtensionConnection, INIntent;

@protocol WFIntentExecutorDelegate;

@interface WFIntentExecutor : NSObject

{
    WFIntentExecutor *_strongSelf;
    _Bool _forceExecutionOnPhone;
    _Bool _skipResolveAndConfirm;
    INCExtensionConnection *_connection;
    id <WFIntentExecutorDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;
@property (nonatomic) _Bool forceExecutionOnPhone;
@property (nonatomic) _Bool skipResolveAndConfirm;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INCExtensionConnection *connection;
@property (weak, nonatomic) id <WFIntentExecutorDelegate> delegate;

- (void)failWithError:(id)arg1;
- (void)cancel;
- (void)finish;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)errorFromResolutionResult:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)errorFromConfirmResponse:(id)arg1 intent:(id)arg2;
- (id)errorFromHandleResponse:(id)arg1 intent:(id)arg2;
- (void)retainSelf;
- (void)autoreleaseSelf;
- (id)initWithIntent:(id)arg1 donateInteraction:(_Bool)arg2 groupIdentifier:(id)arg3;
- (id)extensionInputItemsWithIntent:(id)arg1;
- (void)getDefaultValueForParameterNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getDynamicOptionsForParameterNamed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)configureConnection;
- (void)startConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resolveIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)confirmIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)handleIntent:(id)arg1 withExtensionProxy:(id)arg2;
- (void)handleIntent:(id)arg1 inBackgroundAppWithBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)updateIntentWithItemToConfirm:(id)arg1 forSlot:(id)arg2 onIntent:(id)arg3;
- (id)errorFromExtensionError:(id)arg1;
- (void)finishWithInteraction:(id)arg1 error:(id)arg2;
- (void)finishWithInteraction:(id)arg1;
- (_Bool)continueInApp;
- (void)showConfirmationForInteraction:(id)arg1 confirmationRequired:(_Bool)arg2 authenticationRequired:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end
