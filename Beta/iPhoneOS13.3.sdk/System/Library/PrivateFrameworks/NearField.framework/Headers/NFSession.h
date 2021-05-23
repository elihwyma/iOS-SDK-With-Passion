/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NFSessionInterface><NSXPCProxyCreating, OS_dispatch_queue;

@interface NFSession : NSObject

{
    _Bool _isFirstInQueue;
    _Bool _isCallbackQueueSuspended;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<NFSessionInterface><NSXPCProxyCreating> *_proxy;
    CDUnknownBlockType _didStartCallback;
    CDUnknownBlockType _didEndCallback;
    unsigned long long _state;
}

@property (readonly) unsigned long long state;
@property (readonly) _Bool didEnd;
@property (readonly) _Bool isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)callbackQueue;
- (void)endSession;
- (void)setProxy:(id)arg1;
- (id)proxy;
- (void)setDidEndCallback:(CDUnknownBlockType)arg1;
- (_Bool)isFirstInQueue;
- (void)endSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void)didStartSession:(id)arg1;
- (void)didEndUnexpectedly;
- (void)setDidStartCallback:(CDUnknownBlockType)arg1;
- (void)setIsFirstInQueue:(_Bool)arg1;
- (void)_didStartSession:(id)arg1;
- (void)didStartSessionWithoutQueue:(id)arg1;
- (void)prioritizeSession;
- (void)_endProxySession;
- (void)_didEndSession;
- (void)endSessionAndStartNextSession:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
