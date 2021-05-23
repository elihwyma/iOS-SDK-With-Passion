/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface SFXPCClient : NSObject

{
    _Bool _activateCalled;
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_connection;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)_activate;
- (void)_invalidate;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (id)exportedInterface;
- (id)remoteObjectInterface;
- (id)machServiceName;
- (void)invalidated;
- (void)interrupted;
- (void)getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (_Bool)shouldEscapeXpcTryCatch;
- (void)onqueue_activate;
- (void)onqueue_invalidate;
- (void)onqueue_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (void)onqueue_connectionEstablished;
- (void)onqueue_connectionInterrupted;
- (void)onqueue_connectionInvalidated;
- (void)onqueue_ensureXPCStarted;
- (void)onqueue_invalidated;
- (void)onqueue_interrupted;
- (void)onqueue_ensureConnectionEstablished;
- (void)connectionEstablished;

@end
