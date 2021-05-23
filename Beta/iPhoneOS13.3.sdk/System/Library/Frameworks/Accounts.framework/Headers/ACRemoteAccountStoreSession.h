/*
 Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, NSXPCListenerEndpoint;

@interface ACRemoteAccountStoreSession : NSObject

{
    NSXPCConnection *_connection;
    struct os_unfair_lock_s _connectionLock;
    _Bool _notificationsEnabled;
    NSXPCListenerEndpoint *_listenerEndpoint;
    NSString *_effectiveBundleID;
}

@property (nonatomic, readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (copy, nonatomic) NSString *effectiveBundleID;
@property (nonatomic) _Bool notificationsEnabled;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)_setConnectionInterrupted;
- (void)_setConnectionInvalidated;
- (void)_locked_configureRemoteAccountStoreWithConnection:(id)arg1;
- (void)_locked_connection:(id)arg1 setEffectiveBundleID:(id)arg2;
- (void)_locked_connection:(id)arg1 setNotificationsEnabled:(_Bool)arg2;

@end
