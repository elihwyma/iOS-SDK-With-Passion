/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, WPDAdvertisingManager, WPDClient, WPDObjectDiscoveryManager, WPDPersistence, WPDPipeManager, WPDScanManager, WPDState, WPDStatsManager, WPDZoneManager;

@protocol OS_dispatch_queue;

@interface WPDaemonServer : NSObject

{
    unsigned char _coreBluetoothState;
    _Bool _isHomePod;
    _Bool _screenOff;
    _Bool _systemLocked;
    _Bool _isTesting;
    int _lockStatusChangedToken;
    int _screenStateToken;
    int _firstUnlockStatusChangedToken;
    long long _cbState;
    WPDState *_wpdState;
    NSObject<OS_dispatch_queue> *_serverQueue;
    WPDScanManager *_scanManager;
    WPDAdvertisingManager *_advertisingManager;
    WPDZoneManager *_zoneManager;
    WPDPipeManager *_pipeManager;
    WPDObjectDiscoveryManager *_objectDiscoveryManager;
    WPDClient *_spObjectDiscoveryClient;
    WPDPersistence *_persistence;
    NSArray *_managers;
    WPDStatsManager *_statsManager;
    NSMutableDictionary *_clients;
    NSMutableSet *_testClients;
    NSMutableSet *_privilegedClients;
    NSMapTable *_clientsWithMach;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCListener *_listener;
    unsigned long long _stateCaptureHandle;
}

@property (retain, nonatomic) WPDState *wpdState;
@property (nonatomic) long long cbState;
@property unsigned char coreBluetoothState;
@property (retain) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain) WPDScanManager *scanManager;
@property (retain) WPDAdvertisingManager *advertisingManager;
@property (retain) WPDZoneManager *zoneManager;
@property (retain) WPDPipeManager *pipeManager;
@property (retain) WPDObjectDiscoveryManager *objectDiscoveryManager;
@property (readonly) WPDClient *spObjectDiscoveryClient;
@property (retain) WPDPersistence *persistence;
@property (retain, nonatomic) NSArray *managers;
@property (retain, nonatomic) WPDStatsManager *statsManager;
@property _Bool isHomePod;
@property (retain) NSMutableDictionary *clients;
@property (retain) NSMutableSet *testClients;
@property (retain) NSMutableSet *privilegedClients;
@property (retain) NSMapTable *clientsWithMach;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSXPCListener *listener;
@property (readonly) unsigned long long stateCaptureHandle;
@property (nonatomic) int lockStatusChangedToken;
@property (nonatomic) int screenStateToken;
@property (nonatomic) int firstUnlockStatusChangedToken;
@property _Bool screenOff;
@property _Bool systemLocked;
@property _Bool isTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)isHomePod;

- (id)init;
- (void)dealloc;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)addClient:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)startListening;
- (void)updateState;
- (void)enableTestMode;
- (void)enableRanging:(_Bool)arg1;
- (void)dumpDaemonState;
- (void)registerForSpringboardNotifications;
- (id)generateStateDump;
- (void)cbManagerDidUpdateState:(id)arg1;
- (_Bool)isRangingEnabled;
- (struct os_state_data_s *)dumpToLog:(_Bool)arg1 State:(_Bool)arg2;
- (void)notifyClientsOfStateChange;
- (void)notifyManagersOfStateChange;
- (void)enableTestMode:(_Bool)arg1;
- (void)initManagers;
- (void)initClients;
- (void)screenStateUpdate;
- (void)lockStateUpdate;
- (_Bool)isClientTestMode:(id)arg1;
- (id)getClientForUUID:(id)arg1;
- (id)getAllClients;
- (void)registerClient:(id)arg1 withMachName:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)clientForMachName:(id)arg1;
- (void)disableScanningForClient:(id)arg1;

@end
