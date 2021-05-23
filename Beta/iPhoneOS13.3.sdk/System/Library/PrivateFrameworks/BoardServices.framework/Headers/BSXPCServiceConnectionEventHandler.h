/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceInterface, BSServiceQuality, BSXPCCoder, BSXPCServiceConnectionProxy, NSString;

@protocol BSServiceDispatchingQueue, OS_dispatch_queue;

@interface BSXPCServiceConnectionEventHandler : NSObject

{
    struct os_unfair_lock_s _lock;
    _Bool _nonLaunchingAware;
    BSXPCServiceConnectionProxy *_lock_remoteTarget;
    id _context;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id <BSServiceDispatchingQueue> _targetDispatchingQueue;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    id _interfaceTarget;
    BSXPCCoder *_initiatingContext;
    CDUnknownBlockType _activationHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _connectionHandler;
    CDUnknownBlockType _noMoreChildrenHandler;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _errorHandler;
}

@property (copy, nonatomic) CDUnknownBlockType connectionHandler;
@property (copy, nonatomic) CDUnknownBlockType noMoreChildrenHandler;
@property (copy, nonatomic) CDUnknownBlockType messageHandler;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType activationHandler;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property (nonatomic, readonly) BSXPCServiceConnectionProxy *remoteTarget;
@property (retain, nonatomic) id context;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (retain, nonatomic) id <BSServiceDispatchingQueue> targetDispatchingQueue;
@property (retain, nonatomic) BSServiceQuality *serviceQuality;
@property (retain, nonatomic) BSServiceInterface *interface;
@property (retain, nonatomic) id interfaceTarget;
@property (retain, nonatomic) BSXPCCoder *initiatingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)eventHandler;

- (id)init;
- (void)encodeInitiatingContext:(CDUnknownBlockType)arg1;
- (void)setNonLaunchingAware;
- (void)connection:(id)arg1 handleConnection:(id)arg2;
- (void)connectionHandleNoMoreChildren:(id)arg1;
- (void)connection:(id)arg1 handleError:(id)arg2;
- (void)connection:(id)arg1 handleMessage:(id)arg2;
- (void)connectionActivated:(id)arg1;
- (void)connectionInterrupted:(id)arg1;
- (void)connectionInvalidated:(id)arg1;
- (_Bool)isNonLaunchingAware;
- (_Bool)hasInterruptionHandler;
- (_Bool)hasInvalidationHandler;
- (_Bool)hasErrorHandler;
- (void)connectionInitialized:(id)arg1 withActiveXPCConnection:(id)arg2 xpcConnectionTargetQueue:(id)arg3;
- (void)connectionDisconnected:(id)arg1;

@end
