/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, PLXPCProxyCreating;

@interface PLAssetsdServiceProxyFactory : NSObject

{
    SEL _proxyGetterSelector;
    id <PLXPCProxyCreating> _serviceProxy;
    id <PLXPCProxyCreating> _proxyCreating;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_unboostingRemoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (id)serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3;
- (id)_inq_createServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_inq_createServiceProxyWithCallStackSymbols:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_logReplyError:(id)arg1 withCallStackSymbols:(id)arg2;

@end
