/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceDomain, BSServiceSpecification, BSZeroingWeakReference, NSMutableArray, NSMutableDictionary;

@interface BSService : NSObject

{
    BSServiceDomain *_domain;
    BSServiceSpecification *_specification;
    struct os_unfair_lock_s _lock;
    BSZeroingWeakReference *_lock_globalListener;
    NSMutableDictionary *_lock_instanceToListener;
    NSMutableArray *_lock_pendedConnections;
}

- (id)_identifier;
- (id)_initWithSpecification:(id)arg1 domain:(id)arg2;
- (id)_registerListener:(id)arg1 forInstance:(id)arg2;
- (void)_disableConnectionPending;
- (void)_didReceiveConnection:(id)arg1;

@end
