/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class BKSProcessAssertion, NSError, NSString, NSXPCConnection, _UIAsyncInvocation, _UIRemoteViewService;

__attribute__((visibility("hidden")))
@interface _UIViewServiceInterface : NSObject

{
    struct os_unfair_lock_s _terminationStateLock;
    NSError *_terminationError;
    CDUnknownBlockType _terminationHandler;
    _Bool _isTerminated;
    _UIAsyncInvocation *_terminateInvocation;
    NSString *_serviceBundleIdentifier;
    _UIRemoteViewService *_service;
    BKSProcessAssertion *_serviceProcessAssertion;
    NSXPCConnection *_serviceConnection;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
}

@property (nonatomic, readonly) int servicePID;
@property (nonatomic, readonly) CDStruct_4c969caf serviceAuditToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)connectToViewServiceWithBundleIdentifier:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
+ (id)connectToViewService:(id)arg1 deputyInterfaces:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (void)setTerminationHandler:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (id)disconnect;
- (int)__automatic_invalidation_logic;
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 serviceBundleIdentifier:(id)arg2 deputyInterfaces:(id)arg3;
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 service:(id)arg2 deputyInterfaces:(id)arg3;
- (void)_terminateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (id)_terminateWithError:(id)arg1;
- (id)_initWithConnectionInfo:(CDStruct_d58a15aa)arg1 serviceBundleIdentifier:(id)arg2 service:(id)arg3 deputyInterfaces:(id)arg4;
- (id)connectToDeputyWithInterface:(id)arg1 fromExportedHostingObject:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;

@end
