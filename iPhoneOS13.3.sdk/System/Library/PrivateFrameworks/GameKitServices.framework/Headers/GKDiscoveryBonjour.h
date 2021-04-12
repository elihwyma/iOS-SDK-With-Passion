//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface GKDiscoveryBonjour : NSObject
{
    NSString *_serviceType;
    NSString *_serviceDomain;
    struct _DNSServiceRef_t _browseRef;
    struct _DNSServiceRef_t _advertiseRef;
    id /* CDUnknownBlockType */ _browseCallback;
    id /* CDUnknownBlockType */ _connectionCallback;
    id /* CDUnknownBlockType */ _collisionCallback;
    id /* CDUnknownBlockType */ _serviceNameCollisionCallback;
    NSMutableArray *_launchdSources;
    int _listeningPort;
    NSMutableDictionary *_resolveContainers;
    NSObject<OS_dispatch_queue> *_resolveContainersSyncQueue;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ serviceNameCollisionCallback; // @synthesize serviceNameCollisionCallback=_serviceNameCollisionCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *resolveContainersSyncQueue; // @synthesize resolveContainersSyncQueue=_resolveContainersSyncQueue;
@property(copy, nonatomic) id /* CDUnknownBlockType */ connectionCallback; // @synthesize connectionCallback=_connectionCallback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ browseCallback; // @synthesize browseCallback=_browseCallback;
@property(retain, nonatomic) NSMutableDictionary *resolveContainers; // @synthesize resolveContainers=_resolveContainers;
@property(retain, nonatomic) NSMutableArray *launchdSources; // @synthesize launchdSources=_launchdSources;
@property(nonatomic) struct _DNSServiceRef_t advertiseRef; // @synthesize advertiseRef=_advertiseRef;
@property(nonatomic) struct _DNSServiceRef_t browseRef; // @synthesize browseRef=_browseRef;
@property(copy, nonatomic) NSString *serviceDomain; // @synthesize serviceDomain=_serviceDomain;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
- (void)stopAdvertising;
- (void)startAdvertisingServiceName:(id)arg1 discoveryInfo:(id)arg2;
- (void)sendBonjourRegistrationEvent:(id)arg1 discoveryInfo:(id)arg2;
- (void)closeListeningSockets;
- (void)setupListeningSockets;
- (void)setupBothListeningSockets;
- (int)ipV6Socket;
- (int)ipV4Socket;
- (void)createDispatchEventWithSocket:(int)arg1;
- (void)stopResolve:(id)arg1;
- (int)resolveName:(id)arg1 onIndex:(unsigned int)arg2 withCompletionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)stopBrowsing;
- (int)startBrowsing:(id /* CDUnknownBlockType */)arg1;
- (void)dealloc;
- (BOOL)isAppleTV;
- (id)initWithDomain:(id)arg1 type:(id)arg2;
- (id)init;

@end

