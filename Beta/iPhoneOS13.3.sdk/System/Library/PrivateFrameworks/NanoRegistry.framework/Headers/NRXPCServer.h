/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableArray, NSMutableDictionary, NSString, NSXPCInterface;

@protocol NRNSXPCListenerProtocol, NRXPCServerDelegate, OS_dispatch_queue;

@interface NRXPCServer : NSObject

{
    id <NRNSXPCListenerProtocol> _xpcListener;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    NSString *_machServiceName;
    NSMutableArray *_proxies;
    NSMutableDictionary *_appToProxy;
    BKSApplicationStateMonitor *_monitor;
    id <NRXPCServerDelegate> _serverDelegate;
    id _xpcTarget;
    NSMutableDictionary *_entitlements;
    _Bool _entitlementRequired;
    _Bool _listenerSuspended;
    _Bool _listenerInvalidated;
    Class _proxyClass;
    id _services;
    NSObject<OS_dispatch_queue> *_xpcIncomingMessageQueue;
    NSObject<OS_dispatch_queue> *_managementQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *managementQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_suspend;
- (void)_resume;
- (void)invalidate;
- (void)resume;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)suspend;
- (_Bool)hasEntitlement:(id)arg1 withBitmask:(unsigned int)arg2;
- (void)shouldMonitorProxy:(id)arg1 forSuspension:(_Bool)arg2;
- (id)initWithProxyClass:(Class)arg1 xpcListenerClass:(Class)arg2 serverDelegate:(id)arg3 xpcTarget:(id)arg4 services:(id)arg5;
- (void)enumerateClientProxies:(CDUnknownBlockType)arg1;
- (unsigned int)scanForEntitlementsWithConnection:(id)arg1;
- (void)_proxyDidDisconnect:(id)arg1;
- (void)_addAppToMonitorWithProxy:(id)arg1;
- (void)_removeAppFromMonitorWithProxy:(id)arg1;

@end
