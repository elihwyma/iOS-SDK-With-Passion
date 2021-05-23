/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <WPDaemon/WPDManager.h>

@class CBCentralManager, CBPeripheralManager, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSObject, NSString, NSUUID, WPAdvertisingRequest;

@protocol OS_dispatch_queue;

@interface WPDObjectDiscoveryManager : WPDManager

{
    _Bool _scanning;
    _Bool _scanningDisabled;
    _Bool _advertising;
    NSObject<OS_dispatch_queue> *_serverQueue;
    CBPeripheralManager *_peripheralManager;
    WPAdvertisingRequest *_advertRequest;
    NSUUID *_advertClientUUID;
    NSDictionary *_advertOptions;
    unsigned long long _advertHash;
    CBCentralManager *_centralManager;
    NSMutableDictionary *_scanRequests;
    NSMutableSet *_currentScanners;
    NSDictionary *_scanOptions;
    NSArray *_nearbyTokensRequest;
    NSArray *_matchActionRules;
}

@property (weak, readonly) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain) CBPeripheralManager *peripheralManager;
@property _Bool advertising;
@property (retain) WPAdvertisingRequest *advertRequest;
@property (weak) NSUUID *advertClientUUID;
@property (retain) NSDictionary *advertOptions;
@property unsigned long long advertHash;
@property _Bool scanning;
@property (retain) CBCentralManager *centralManager;
@property (retain) NSMutableDictionary *scanRequests;
@property (retain) NSMutableSet *currentScanners;
@property (retain) NSDictionary *scanOptions;
@property (retain) NSArray *nearbyTokensRequest;
@property (retain) NSArray *matchActionRules;
@property _Bool scanningDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)cleanup;
- (void)update;
- (id)initWithServer:(id)arg1;
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2;
- (void)peripheralManager:(id)arg1 didStopAdvertisingWithError:(id)arg2;
- (id)generateStateDump;
- (void)updateScanner;
- (id)updateAdvertiser;
- (void)removeScanRequestsForClient:(id)arg1;
- (void)removeAdvertisingRequestsForClient:(id)arg1;
- (id)addAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (id)removeAdvertisingRequest:(id)arg1 forClient:(id)arg2;
- (id)addScanRequest:(id)arg1 forClient:(id)arg2;
- (id)getScanRequestsForClient:(id)arg1;
- (void)updateNearbyTokens:(id)arg1;
- (void)resetAdvertiser;
- (_Bool)advertOptionsChanged:(id)arg1;
- (id)spoofNearOwnerWithPayload:(id)arg1;
- (_Bool)updateAdvertisingOptionsWithError:(id *)arg1;
- (void)stopAdvertiser;
- (void)startAdvertiser;
- (void)updateReports:(id)arg1 Peripheral:(id)arg2 AdvertisementData:(id)arg3 RSSI:(id)arg4;
- (void)updateClientsWithReports:(id)arg1;
- (void)updateReports:(id)arg1 fromReport:(id)arg2;
- (id)rulesFromTokens:(id)arg1;
- (_Bool)changedScanOptions:(id)arg1 Clients:(id)arg2;
- (_Bool)updateScanRules;

@end
