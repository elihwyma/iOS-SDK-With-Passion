/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceQuality, NSHashTable, NSString;

@protocol OS_xpc_object;

@interface BSXPCServiceConnectionListener : NSObject

{
    NSString *_serviceName;
    unsigned long long _unique;
    NSString *_proem;
    struct os_unfair_lock_s _lock;
    NSString *_lock_debugDesc;
    NSString *_config_eDesc;
    BSServiceQuality *_config_qos;
    CDUnknownBlockType _lock_connectionHandler;
    CDUnknownBlockType _lock_errorHandler;
    NSObject<OS_xpc_object> *_lock_listener;
    NSHashTable *_lock_childConnections;
    NSObject<OS_xpc_object> *_lock_endpoint;
    _Bool _lock_nonLaunching;
    _Bool _lock_activated;
    _Bool _lock_invalidated;
    _Bool _lock_clientInvalidated;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *endpoint;
@property (nonatomic, readonly, getter=isNonLaunching) _Bool nonLaunching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=_isInvalidated) _Bool _invalidated;
@property (nonatomic, readonly, getter=_isClientInvalidated) _Bool _clientInvalidated;

+ (id)listener;
+ (id)listenerWithServiceName:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)setErrorHandler:(CDUnknownBlockType)arg1;
- (void)configure:(CDUnknownBlockType)arg1;
- (void)activate;
- (void)setServiceQuality:(id)arg1;
- (void)setConnectionHandler:(CDUnknownBlockType)arg1;
- (void)setEndpointDescription:(id)arg1;
- (id)_initWithServiceName:(id)arg1;
- (void)_invalidateWithLockBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateChildConnection:(id)arg1;

@end
