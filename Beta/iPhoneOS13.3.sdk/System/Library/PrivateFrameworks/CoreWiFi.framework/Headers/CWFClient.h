/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSXPCConnection, SFAuthorization;

@protocol OS_dispatch_queue;

@interface CWFClient : NSObject

{
    NSObject<OS_dispatch_queue> *_mutex;
    NSMutableSet *_mutableEventIDs;
    NSMutableDictionary *_mutableEventCallbackMap;
    NSMutableDictionary *_mutableActivityMap;
    _Bool _activated;
    _Bool _invalidated;
    SFAuthorization *_authorization;
    long long _XPCServiceType;
    NSXPCConnection *_XPCConnection;
}

@property (nonatomic, readonly) NSXPCConnection *XPCConnection;
@property _Bool activated;
@property _Bool invalidated;
@property (copy) SFAuthorization *authorization;
@property (readonly) long long XPCServiceType;
@property (retain) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy) CDUnknownBlockType invalidationHandler;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)deviceUUID;
- (id)activities;
- (id)IPv6Addresses;
- (id)IPv4Addresses;
- (void)activate;
- (unsigned int)reachabilityFlags;
- (void)proxy:(id)arg1 receivedEvent:(id)arg2;
- (void)stopMonitoringAllEvents;
- (id)initWithXPCServiceType:(long long)arg1;
- (id)DNSServerAddresses;
- (id)IPv4InterfaceName;
- (id)IPv6InterfaceName;
- (id)IPv4ServiceID;
- (id)IPv6ServiceID;
- (id)IPv4ServiceName;
- (id)IPv6ServiceName;
- (id)virtualInterfaceNames;
- (id)interfaceWithName:(id)arg1;
- (id)IPv4RouterAddress;
- (id)IPv6RouterAddress;
- (_Bool)startMonitoringEvent:(id)arg1 error:(id *)arg2;
- (_Bool)beginActivity:(id)arg1 error:(id *)arg2;
- (void)endActivityWithUUID:(id)arg1;
- (id)interfaceNames;
- (_Bool)cancelRequestWithUUID:(id)arg1 error:(id *)arg2;
- (void)endAllActivities;
- (void)performActivity:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)systemActivities;
- (id)eventIDs;
- (id)systemEventIDs;
- (void)stopMonitoringEvent:(id)arg1;
- (void)setEventHandler:(CDUnknownBlockType)arg1 matching:(id)arg2;
- (void)clearAllEventHandlers;
- (id)mainInterface;
- (id)knownNetworkProfilesWithProperties:(id)arg1;
- (id)knownNetworkProfileMatchingScanResult:(id)arg1;
- (id)knownNetworkProfileMatchingNetworkProfile:(id)arg1;
- (_Bool)updateKnownNetworkProfile:(id)arg1 properties:(id)arg2 error:(id *)arg3;
- (_Bool)addKnownNetworkProfile:(id)arg1 error:(id *)arg2;
- (_Bool)removeKnownNetworkProfile:(id)arg1 reason:(long long)arg2 error:(id *)arg3;
- (long long)thermalIndex;
- (_Bool)setThermalIndex:(long long)arg1 error:(id *)arg2;

@end
