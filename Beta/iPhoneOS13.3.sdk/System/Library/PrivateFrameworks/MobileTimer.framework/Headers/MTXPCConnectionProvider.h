/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class MTXPCConnectionInfo, NSDate, NSXPCConnection;

@protocol MTScheduler, NAScheduler;

@interface MTXPCConnectionProvider : NSObject

{
    NSXPCConnection *_connection;
    MTXPCConnectionInfo *_info;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _reconnectHandler;
    id <MTScheduler> _serializer;
    id <NAScheduler> _callbackScheduler;
    NSDate *_lastLifecycleNotification;
}

@property (retain, nonatomic) id <MTScheduler> serializer;
@property (retain, nonatomic) id <NAScheduler> callbackScheduler;
@property (retain, nonatomic) MTXPCConnectionInfo *info;
@property (copy, nonatomic) CDUnknownBlockType errorHandler;
@property (copy, nonatomic) CDUnknownBlockType reconnectHandler;
@property (retain, nonatomic) NSDate *lastLifecycleNotification;

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
+ (id)providerWithConnectionInfo:(id)arg1 reconnectHandler:(CDUnknownBlockType)arg2;

- (void)dealloc;
- (id)description;
- (void)invalidate;
- (id)connection;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 reconnectHandler:(CDUnknownBlockType)arg3;
- (void)didReceiveLifecycleNotification;
- (void)_didInterruptConnection;
- (void)_didInvalidateConnection;
- (id)_connectionRebuildingIfNecessary;
- (void)_retryConnectionWithRecover:(_Bool)arg1;
- (void)performRemoteBlock:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (id)_retryConnection;
- (void)performRemoteBlock:(CDUnknownBlockType)arg1 withErrorHandler:(CDUnknownBlockType)arg2 isSynchronous:(_Bool)arg3;
- (id)_syncRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_asyncRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)connectionFuture;
- (id)_remoteObjectProxyWithXPCConnectionProvider:(CDUnknownBlockType)arg1 remoteObjectProxyProvider:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)performRemoteBlock:(CDUnknownBlockType)arg1;

@end
