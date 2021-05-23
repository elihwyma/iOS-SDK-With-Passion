/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@protocol PLXPCProxyCreating><PLXPCAsyncProxyCreating;

@interface PLAssetsdBaseClient : NSObject

{
    id <PLXPCProxyCreating><PLXPCAsyncProxyCreating> _proxyFactory;
}

@property (readonly) id <PLXPCProxyCreating><PLXPCAsyncProxyCreating> proxyFactory;

- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3;

@end
