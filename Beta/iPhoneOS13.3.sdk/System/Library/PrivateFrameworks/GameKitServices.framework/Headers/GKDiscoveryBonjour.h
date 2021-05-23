/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface GKDiscoveryBonjour : NSObject

{
    NSString *_serviceType;
    NSString *_serviceDomain;
    struct _DNSServiceRef_t *_browseRef;
    struct _DNSServiceRef_t *_advertiseRef;
    CDUnknownBlockType _browseCallback;
    CDUnknownBlockType _connectionCallback;
    CDUnknownBlockType _collisionCallback;
    CDUnknownBlockType _serviceNameCollisionCallback;
    NSMutableArray *_launchdSources;
    int _listeningPort;
    NSMutableDictionary *_resolveContainers;
    NSObject<OS_dispatch_queue> *_resolveContainersSyncQueue;
}

@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *serviceDomain;
@property (nonatomic) struct _DNSServiceRef_t *browseRef;
@property (nonatomic) struct _DNSServiceRef_t *advertiseRef;
@property (retain, nonatomic) NSMutableArray *launchdSources;
@property (retain, nonatomic) NSMutableDictionary *resolveContainers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resolveContainersSyncQueue;
@property (copy, nonatomic) CDUnknownBlockType browseCallback;
@property (copy, nonatomic) CDUnknownBlockType connectionCallback;
@property (copy, nonatomic) CDUnknownBlockType serviceNameCollisionCallback;

- (id)init;
- (void)dealloc;
- (void)stopAdvertising;
- (void)stopBrowsing;
- (_Bool)isAppleTV;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (void)stopResolve:(id)arg1;
- (int)resolveName:(id)arg1 onIndex:(unsigned int)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)startAdvertisingServiceName:(id)arg1 discoveryInfo:(id)arg2;
- (int)startBrowsing:(CDUnknownBlockType)arg1;
- (void)closeListeningSockets;
- (int)ipV4Socket;
- (int)ipV6Socket;
- (void)createDispatchEventWithSocket:(int)arg1;
- (void)setupBothListeningSockets;
- (void)sendBonjourRegistrationEvent:(id)arg1 discoveryInfo:(id)arg2;
- (void)setupListeningSockets;

@end
