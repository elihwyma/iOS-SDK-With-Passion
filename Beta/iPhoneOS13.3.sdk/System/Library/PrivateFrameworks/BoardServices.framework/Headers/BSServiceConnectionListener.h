/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceConnectionEndpoint, BSServiceManager, NSString;

@protocol BSInvalidatable, BSServiceConnectionListenerDelegate;

@interface BSServiceConnectionListener : NSObject

{
    BSServiceManager *_manager;
    NSString *_domain;
    NSString *_service;
    NSString *_instance;
    struct os_unfair_lock_s _lock;
    id <BSServiceConnectionListenerDelegate> _lock_delegate;
    _Bool _lock_activated;
    _Bool _lock_invalidated;
    struct os_unfair_lock_s _registrationLock;
    id <BSInvalidatable> _registrationLock_assertion;
    BSServiceConnectionEndpoint *_endpoint;
}

@property (copy, nonatomic, readonly) NSString *domain;
@property (copy, nonatomic, readonly) NSString *service;
@property (copy, nonatomic, readonly) NSString *instance;
@property (copy, nonatomic, readonly) BSServiceConnectionEndpoint *endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)disableLaunchWhitelist;
+ (id)listenerWithConfigurator:(CDUnknownBlockType)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setInstance:(id)arg1;
- (void)activate;
- (void)setService:(id)arg1;
- (void)didReceiveConnection:(id)arg1;
- (id)_initWithManager:(id)arg1 config:(CDUnknownBlockType)arg2;

@end
