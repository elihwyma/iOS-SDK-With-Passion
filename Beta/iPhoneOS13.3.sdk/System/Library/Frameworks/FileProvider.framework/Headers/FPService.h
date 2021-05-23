/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection, NSXPCInterface;

@protocol FPDLifetimeServicing, NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface FPService : NSObject

{
    id <FPDLifetimeServicing> _extender;
    NSXPCConnection *_connection;
    id <NSXPCProxyCreating> _proxy;
    NSXPCInterface *_interface;
}

@property (readonly) id remoteObjectProxy;
@property (readonly) id synchronousRemoteObjectProxy;

- (void)dealloc;
- (void)invalidate;
- (void)stopExtendingLifetime;
- (id)initWithProxy:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4;
- (id)initWithEndpoint:(id)arg1 interface:(id)arg2 lifetimeExtender:(id)arg3 providerDomainID:(id)arg4;
- (id)remoteObjectProxyCreating;

@end
