/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, NSXPCInterface;

@protocol OS_os_log;

@interface _PASXPCClientHelper : NSObject

{
    struct _opaque_pthread_mutex_t _connLock;
    NSXPCConnection *_conn;
    NSString *_serviceName;
    NSXPCInterface *_whitelistedServerInterface;
    NSXPCInterface *_whitelistedClientInterface;
    id _serverInitiatedRequestHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSObject<OS_os_log> *_logHandle;
}

- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 whitelistedClientInterface:(id)arg3 serverInitiatedRequestHandler:(id)arg4 interruptionHandler:(CDUnknownBlockType)arg5 invalidationHandler:(CDUnknownBlockType)arg6 logHandle:(id)arg7;
- (void)_locked_establishConnection;

@end
