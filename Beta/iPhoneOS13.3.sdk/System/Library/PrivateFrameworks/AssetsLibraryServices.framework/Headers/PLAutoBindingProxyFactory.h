/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL, PLLazyObject, PLResult;

@protocol PLXPCProxyCreating;

@interface PLAutoBindingProxyFactory : NSObject

{
    struct os_unfair_lock_s _bindLock;
    PLLazyObject *_lazyBindToPhotoLibrary;
    PLResult *_cachedBindResult;
    id <PLXPCProxyCreating> _proxyFactory;
    NSURL *_photoLibraryURL;
}

@property (readonly) id <PLXPCProxyCreating> proxyFactory;
@property (copy, readonly) NSURL *photoLibraryURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)clientToServiceBookmarkForURL:(id)arg1;
+ (unsigned long long)maxBindAttemptCount;

- (id)_unboostingRemoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;
- (void)_connectionInterrupted:(id)arg1;
- (id)_cachedBindResult;
- (id)initWithProxyFactory:(id)arg1 photoLibraryURL:(id)arg2;
- (id)_blackholeProxyForProxy:(id)arg1;
- (_Bool)_bindToPhotoLibraryIfNecessaryWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_bindToPhotoLibraryIfNecessary;
- (id)_bindToPhotoLibraryAndCacheResult;
- (void)_updateCachedBindResult:(id)arg1;
- (id)_lazilyBindToPhotoLibrary;
- (id)_bindToPhotoLibrary;
- (id)_attemptBindToPhotoLibrary;
- (_Bool)_isResultAnInterruptionError:(id)arg1;

@end
