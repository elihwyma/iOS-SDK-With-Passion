/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFileReactorProxy.h>

@class NSFileProviderXPCMessenger, NSString, NSUUID;

@protocol NSFileProviderXPCInterface><NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface NSFileProviderProxy : NSFileReactorProxy

{
    NSString *_secureID;
    NSUUID *_uniqueID;
    id <NSFileProviderXPCInterface><NSXPCProxyCreating> _remoteProvider;
    NSFileProviderXPCMessenger *_forwardedMessenger;
    _Bool _wantsWriteNotifications;
}

@property (readonly) NSString *secureID;
@property (readonly) NSUUID *uniqueID;
@property (readonly) id <NSFileProviderXPCInterface><NSXPCProxyCreating> remoteProvider;
@property _Bool wantsWriteNotifications;

- (void)dealloc;
- (void)invalidate;
- (void)setItemLocation:(id)arg1;
- (void)providePhysicalURLForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)provideLogicalURLForURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4;
- (CDUnknownBlockType)provideItemForKernelRequestWithOperation:(unsigned int)arg1 atURL:(id)arg2 forProcess:(int)arg3 withOptions:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (_Bool)allowedForURL:(id)arg1;
- (void)forwardUsingProxy:(id)arg1;
- (id)initWithClient:(id)arg1 remoteProvider:(id)arg2 reactorID:(id)arg3 secureID:(id)arg4 uniqueID:(id)arg5;
- (CDUnknownBlockType)provideItemAtURL:(id)arg1 withOptions:(unsigned long long)arg2 forAccessClaim:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)movingItemAtLocation:(id)arg1 requiresProvidingWithDestinationLocation:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2;
- (id)_clientProxy;

@end
