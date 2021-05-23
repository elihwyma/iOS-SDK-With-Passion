/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterfaceConnectionRequest : NSObject

{
    CDUnknownBlockType _connectionHandler;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isCancelled;
    NSError *_cancellationError;
    _UIAsyncInvocation *_cancellationInvocation;
    int _sessionRequestNotifyToken;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceSessionConnection;
    _Bool _serviceSessionConnectionResumed;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
}

+ (id)_connectToViewServiceWithBundleIdentifier:(id)arg1 service:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;
+ (id)connectToViewService:(id)arg1 connectionHandler:(CDUnknownBlockType)arg2;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (int)__automatic_invalidation_logic;
- (void)_cancelUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)_launchService;
- (void)_cancelWithError:(id)arg1;
- (void)_createPlugInProcessAssertion;
- (void)_createProcessAssertion;
- (void)_createAndEstablishConnection;
- (void)_createProcessAssertionForPID:(int)arg1 orBundleIdentifier:(id)arg2 acquiredHandler:(CDUnknownBlockType)arg3;
- (void)_establishConnection;
- (void)_didConnectToService;

@end
