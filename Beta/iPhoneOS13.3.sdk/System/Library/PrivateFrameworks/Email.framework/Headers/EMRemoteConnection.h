/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, Protocol;

@protocol OS_dispatch_queue;

@interface EMRemoteConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _generator;
    Protocol *_protocol;
    struct __CFDictionary *_knownSelectors;
    NSMutableArray *_resetHandlers;
    NSMutableArray *_recoveryHandlers;
    NSMutableArray *_pendingReattempts;
    id _currentProxy;
    struct os_unfair_lock_s _lock;
    struct os_unfair_lock_s _proxyLock;
    _Bool _waitingForRecovery;
    _Bool _preferImmediateRecovery;
}

@property (readonly) Protocol *protocol;
@property (readonly) id reattemptingRemoteObjectProxy;
@property (readonly) id remoteObjectProxy;
@property _Bool preferImmediateRecovery;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)reset;
- (id)_methodSignatureForRemoteSelector:(SEL)arg1;
- (void)_sendInvocation:(id)arg1 withProxy:(id)arg2;
- (_Bool)_respondsToRemoteSelector:(SEL)arg1;
- (id)proxy;
- (void)addResetHandler:(CDUnknownBlockType)arg1;
- (void)addRecoveryHandler:(CDUnknownBlockType)arg1;
- (id)initWithProtocol:(id)arg1 proxyGenerator:(CDUnknownBlockType)arg2;
- (void)recover;
- (id)proxyCreator:(id *)arg1;
- (void)_reattemptInvocation:(id)arg1 withProxy:(id)arg2 originalError:(id)arg3;
- (id)reattemptingRemoteObjectProxyWithReattemptHandler:(CDUnknownBlockType)arg1;

@end
