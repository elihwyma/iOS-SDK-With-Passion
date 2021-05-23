/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Accounts/ACRemoteAccountStoreSession.h>

@class NSObject;

__attribute__((visibility("hidden")))
@interface ACDFakeRemoteAccountStoreSession : ACRemoteAccountStoreSession

{
    NSObject *_proxy;
}

- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (id)initWithFakeProxy:(id)arg1;

@end
