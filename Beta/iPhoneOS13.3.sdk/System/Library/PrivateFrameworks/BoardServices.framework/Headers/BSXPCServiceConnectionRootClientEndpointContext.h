/*
 Image: /System/Library/PrivateFrameworks/BoardServices.framework/BoardServices
 */

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@class NSObject;

@protocol OS_xpc_object;

@interface BSXPCServiceConnectionRootClientEndpointContext : BSXPCServiceConnectionRootContext

{
    NSObject<OS_xpc_object> *_endpoint;
    _Bool _nonLaunching;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *endpoint;
@property (nonatomic, readonly, getter=isNonLaunching) _Bool nonLaunching;

+ (id)uniqueClientContextWithEndpoint:(id)arg1 nonLaunching:(_Bool)arg2 description:(id)arg3;

- (_Bool)isClient;
- (id)_initWithEndpoint:(id)arg1 nonLaunching:(_Bool)arg2 eDesc:(id)arg3;

@end
