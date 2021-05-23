/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceManager, NSDictionary, NSMutableSet, NSString;

@protocol BSInvalidatable, BSServiceConnectionEndpointMonitorDelegate;

@interface BSServiceConnectionEndpointMonitor : NSObject

{
    BSServiceManager *_manager;
    NSString *_service;
    struct os_unfair_lock_s _lock;
    id <BSServiceConnectionEndpointMonitorDelegate> _lock_delegate;
    NSDictionary *_lock_endpointToEnvironments;
    NSMutableSet *_lock_serialCallOut_endpoints;
    _Bool _lock_activated;
    _Bool _lock_invalidated;
    struct os_unfair_lock_s _registrationLock;
    id <BSInvalidatable> _registrationLock_assertion;
}

@property (copy, nonatomic, readonly) NSString *service;
@property (retain, nonatomic) id <BSServiceConnectionEndpointMonitorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)monitorForService:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)activate;
- (id)endpointsForEnvironment:(id)arg1;
- (void)serialCallOut_didUpdateEndpointEnvironments:(id)arg1;
- (id)_initWithManager:(id)arg1 service:(id)arg2;

@end
