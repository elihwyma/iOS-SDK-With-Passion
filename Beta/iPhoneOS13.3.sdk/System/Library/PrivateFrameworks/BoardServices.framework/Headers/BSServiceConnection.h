/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSAtomicSignal, BSProcessHandle, BSXPCServiceConnection, NSString, _BSServiceConnectionConfiguration;

@protocol NSCopying;

@interface BSServiceConnection : NSObject

{
    BSXPCServiceConnection *_connection;
    NSString *_service;
    NSString *_instance;
    id <NSCopying> _userInfo;
    struct os_unfair_lock_s _lock;
    _BSServiceConnectionConfiguration *_lock_config;
    BSAtomicSignal *_lock_activatedSignal;
    _Bool _lock_invalidated;
    _Bool _lock_noAssertInvalidatedOnDealloc;
}

@property (nonatomic, readonly) BSProcessHandle *remoteProcess;
@property (copy, nonatomic, readonly) NSString *service;
@property (copy, nonatomic, readonly) NSString *instance;
@property (nonatomic, readonly) id remoteTarget;
@property (nonatomic, readonly) id <NSCopying> userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)currentContext;
+ (id)_currentConnection;
+ (id)_connectionWithEndpoint:(id)arg1 clientContextBuilder:(CDUnknownBlockType)arg2;
+ (id)_nameForService:(id)arg1 instance:(id)arg2 host:(_Bool)arg3;
+ (id)connectionWithEndpoint:(id)arg1;
+ (id)connectionWithEndpoint:(id)arg1 clientContextBuilder:(CDUnknownBlockType)arg2;
+ (id)_connectionFromIncomingConnection:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)createMessage;
- (void)activate;
- (id)_clientContext;
- (id)_initWithConnection:(id)arg1 service:(id)arg2 instance:(id)arg3 clientContext:(id)arg4;
- (void)_configureConnection:(CDUnknownBlockType)arg1;
- (id)createMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)configureConnection:(CDUnknownBlockType)arg1;

@end
