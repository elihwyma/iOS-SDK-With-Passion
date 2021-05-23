/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <Foundation/NSObject.h>

@class LAContext, NSData, NSError;

@protocol OS_dispatch_queue;

@interface NPKQuickPaymentSessionLocalAuthenticationCoordinator : NSObject

{
    NSObject<OS_dispatch_queue> *_localAuthenticationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionHandler;
    LAContext *_completedContext;
    NSData *_completedCredential;
    NSError *_completedError;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *localAuthenticationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (retain, nonatomic) LAContext *completedContext;
@property (retain, nonatomic) NSData *completedCredential;
@property (retain, nonatomic) NSError *completedError;

- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;
- (id)initWithCallbackQueue:(id)arg1;
- (void)beginLocalAuthenticationWithCompletion:(CDUnknownBlockType)arg1;
- (void)invalidateLocalAuthenticationContexts;
- (void)_invokeCompletionHandlerForInvalidation;

@end
