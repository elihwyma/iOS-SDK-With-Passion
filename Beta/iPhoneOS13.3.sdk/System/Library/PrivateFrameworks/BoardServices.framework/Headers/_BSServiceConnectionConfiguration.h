/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceInterface, BSServiceQuality, NSString;

@protocol BSServiceDispatchingQueue, NSCopying, OS_dispatch_queue, OS_xpc_object;

@interface _BSServiceConnectionConfiguration : NSObject

{
    struct os_unfair_lock_s *_lock;
    NSObject<OS_xpc_object> *_clientContext;
    id <NSCopying> _userInfo;
    NSString *_name;
    BSServiceQuality *_serviceQuality;
    BSServiceInterface *_interface;
    id _target;
    CDUnknownBlockType _activationHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSObject<OS_dispatch_queue> *_targetQueue;
    id <BSServiceDispatchingQueue> _targetDispatchingQueue;
    CDUnknownBlockType _messageHandler;
    CDUnknownBlockType _errorHandler;
}

- (void)setName:(id)arg1;
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;
- (void)setErrorHandler:(CDUnknownBlockType)arg1;
- (void)setUserInfo:(id)arg1;
- (id)interface;
- (void)setInterface:(id)arg1;
- (void)setTargetQueue:(id)arg1;
- (void)setServiceQuality:(id)arg1;
- (void)setInterfaceTarget:(id)arg1;
- (void)setActivationHandler:(CDUnknownBlockType)arg1;
- (void)setMessageHandler:(CDUnknownBlockType)arg1;
- (void)setTargetDispatchingQueue:(id)arg1;
- (id)initWithLock:(struct os_unfair_lock_s *)arg1 clientContext:(id)arg2;

@end
