/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <WPDaemon/WPDManager.h>

@class CBCentralManager, NSDictionary, NSIndexSet, NSMutableDictionary, NSMutableSet, NSObject, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface WPDScanManager : WPDManager

{
    _Bool _scanning;
    _Bool _scanningDisabled;
    _Bool _isRanging;
    NSMutableDictionary *_scanRequests;
    NSMutableDictionary *_peerRequests;
    NSMutableDictionary *_connectionsInProgress;
    NSMutableSet *_peripheralConnections;
    NSIndexSet *_currentScanners;
    CBCentralManager *_centralManager;
    NSMutableSet *_spyScanClients;
    NSDictionary *_scanOptions;
    NSSet *_scanRequestHashes;
    NSSet *_scanRuleHashes;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_queue> *_centralQueue;
    NSIndexSet *_rangingTypes;
}

@property (retain) NSMutableDictionary *scanRequests;
@property (retain) NSMutableDictionary *peerRequests;
@property (retain) NSMutableDictionary *connectionsInProgress;
@property (retain) NSMutableSet *peripheralConnections;
@property (retain) NSIndexSet *currentScanners;
@property (retain) CBCentralManager *centralManager;
@property _Bool scanning;
@property (retain) NSMutableSet *spyScanClients;
@property (retain) NSDictionary *scanOptions;
@property (retain) NSSet *scanRequestHashes;
@property (retain) NSSet *scanRuleHashes;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *centralQueue;
@property (nonatomic) _Bool isRanging;
@property (nonatomic, readonly) NSIndexSet *rangingTypes;
@property _Bool scanningDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)zonesAvailableForType:(unsigned char)arg1;

- (void)cleanup;
- (void)update;
- (id)initWithServer:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didFindPeripheral:(id)arg2 forType:(id)arg3;
- (void)centralManager:(id)arg1 didLosePeripheral:(id)arg2 forType:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverMultiplePeripherals:(id)arg2;
- (void)enableRanging:(_Bool)arg1;
- (id)generateStateDump;
- (void)updateScanner;
- (void)removeScanRequestsForClient:(id)arg1;
- (void)removePeripheralConnectionsForClient:(id)arg1;
- (void)removeAllPeerTrackingRequestsForClient:(id)arg1;
- (void)removeSpyScanClient:(id)arg1;
- (void)addSpyScanClient:(id)arg1;
- (id)addScanRequest:(id)arg1 forClient:(id)arg2;
- (id)removeScanRequest:(id)arg1 forClient:(id)arg2;
- (id)addPeerTrackingRequest:(id)arg1 forClient:(id)arg2;
- (id)removePeerTrackingRequest:(id)arg1 checkZonesAvailable:(_Bool)arg2 forClient:(id)arg3;
- (id)connectToPeripheral:(id)arg1 fromClient:(id)arg2 withOptions:(id)arg3;
- (void)removePeripheralConnection:(id)arg1 forClient:(id)arg2;
- (id)disconnectFromPeripheral:(id)arg1 withSubscribedCharacteristics:(id)arg2 forClient:(id)arg3;
- (void)disconnectFromCentral:(id)arg1 forClient:(id)arg2;
- (id)getScanRequestsForClient:(id)arg1;
- (_Bool)updateScanRules;
- (_Bool)scanOptionsChanged:(id)arg1 ForRequests:(id)arg2;
- (void)logScanRequests:(id)arg1 method:(_Bool)arg2 window:(long long)arg3 interval:(long long)arg4;
- (id)ruleHashesFromScanOptions:(id)arg1;
- (id)scanRequestHashesFromScanRequests:(id)arg1;
- (void)clearExistingConnections;
- (_Bool)startTrackingPeripheral:(id)arg1 ofType:(id)arg2;
- (void)stopTrackingPeripheral:(id)arg1 ofType:(id)arg2;
- (id)retrievePeripheralWithUUID:(id)arg1;

@end
