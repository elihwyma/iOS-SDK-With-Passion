/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <Foundation/NSObject.h>

@class BSServiceDomainSpecification, BSXPCServiceConnectionListener, NSDictionary, NSMutableArray, NSString;

@protocol OS_xpc_object;

@interface BSServiceDomain : NSObject

{
    BSServiceDomainSpecification *_specification;
    struct os_unfair_lock_s _lock;
    BSXPCServiceConnectionListener *_xpcListener;
    NSString *_listenerEndpointDescription;
    NSDictionary *_identifierToService;
    NSMutableArray *_lock_incomingConnections;
}

@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *listenerEndpoint;
@property (nonatomic, readonly) _Bool listenerEndpointIsNonLaunching;
@property (nonatomic, readonly) NSString *listenerEndpointDescription;

- (id)init;
- (id)_initWithSpecification:(id)arg1;
- (void)_disableLaunchWhitelist;
- (id)registerListener:(id)arg1;

@end
