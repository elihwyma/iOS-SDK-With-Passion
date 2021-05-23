/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class MuxNotificationSink, NSError, NSSet, NSXPCConnection, NSXPCListenerEndpoint;

__attribute__((visibility("hidden")))
@interface CoreTelephonyClientMux : NSObject

{
    struct map<__weak id, (anonymous namespace)::DelegateContext, std::__1::less<__weak id>, std::__1::allocator<std::__1::pair<const __weak id, (anonymous namespace)::DelegateContext>>> _delegates;
    NSSet *_currentSelectorSet;
    NSXPCConnection *_connection;
    struct queue _xpcQueue;
    NSXPCListenerEndpoint *_endpoint;
    MuxNotificationSink *_notificationSink;
    NSError *_reconnectError;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) struct queue xpcQueue;
@property (retain, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (retain, nonatomic) MuxNotificationSink *notificationSink;
@property (retain, nonatomic) NSError *reconnectError;

- (id)init;
- (void)dealloc;
- (id)_connection;
- (id).cxx_construct;
- (void)_connect_sync;
- (id)synchronousProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)sink:(id)arg1 handleNotification:(id)arg2;
- (id)initWithSink:(id)arg1;
- (void)_initializeConnection_sync;
- (void)_setReconnectError_sync:(id)arg1;
- (void)_ensureConnectionSetup_sync;
- (void)_computeNotificationSet_sync:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_registerForNotifications_sync:(id)arg1 shouldForce:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)proxyWithErrorHandler_sync:(CDUnknownBlockType)arg1;
- (void)_computeNotificationSetForced_sync:(CDUnknownBlockType)arg1;
- (void)_ensureConnectionSetup_sync:(_Bool)arg1;
- (void)_computeNotificationSetForced_sync;
- (id)initWithEndpoint:(id)arg1 sink:(id)arg2;
- (void)addDelegate:(id)arg1 queue:(struct queue)arg2;
- (id)proxyWithQueue:(struct queue)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_computeNotificationSet_sync:(CDUnknownBlockType)arg1;

@end
