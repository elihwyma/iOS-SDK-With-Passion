/*
 Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

#import <CoreHAP/HAPAccessoryServerBrowser.h>

@class CBCentralManager, CBConnectionsObserver, HAPAccessoryServerBrowserWiProxBTLE, NSMapTable, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSObject, NSString;

@protocol HAPAccessoryServerBrowserBTLEDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HAPAccessoryServerBrowserBTLE : HAPAccessoryServerBrowser

{
    _Bool _performingGeneralScan;
    unsigned long long _qosLimits;
    id <HAPAccessoryServerBrowserBTLEDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    CBCentralManager *_centralManager;
    CBConnectionsObserver *_connectionsObserver;
    HAPAccessoryServerBrowserWiProxBTLE *_hapWiProxBLEBrowser;
    NSMapTable *_discoveredPeripheralsWithAccessories;
    NSMutableSet *_pairedAccessoryIdentifiers;
    NSMapTable *_recentlySeenPairedPeripherals;
    NSMutableArray *_powerOnCentralManagerCompletions;
    CDUnknownBlockType _reachabilityCompletion;
    NSMutableOrderedSet *_peripheralsWithConnectionRequests;
    NSMutableArray *_peripheralsPendingConnection;
    NSObject<OS_dispatch_source> *_targetedScanTimer;
    NSMutableArray *_targetedScanAccessoryIdentifiers;
    NSMapTable *_identifersWithReachabilityScanTuples;
    long long _scanState;
}

@property (nonatomic) unsigned long long qosLimits;
@property (weak, nonatomic) id <HAPAccessoryServerBrowserBTLEDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) CBCentralManager *centralManager;
@property (retain, nonatomic) CBConnectionsObserver *connectionsObserver;
@property (retain, nonatomic) HAPAccessoryServerBrowserWiProxBTLE *hapWiProxBLEBrowser;
@property (retain, nonatomic) NSMapTable *discoveredPeripheralsWithAccessories;
@property (retain) NSMutableSet *pairedAccessoryIdentifiers;
@property (retain, nonatomic) NSMapTable *recentlySeenPairedPeripherals;
@property (nonatomic, getter=isPerformingGeneralScan) _Bool performingGeneralScan;
@property (retain, nonatomic) NSMutableArray *powerOnCentralManagerCompletions;
@property (copy, nonatomic) CDUnknownBlockType reachabilityCompletion;
@property (retain, nonatomic) NSMutableOrderedSet *peripheralsWithConnectionRequests;
@property (retain, nonatomic) NSMutableArray *peripheralsPendingConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *targetedScanTimer;
@property (retain, nonatomic) NSMutableArray *targetedScanAccessoryIdentifiers;
@property (retain, nonatomic) NSMapTable *identifersWithReachabilityScanTuples;
@property (nonatomic) long long scanState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithQueue:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (long long)linkType;
- (_Bool)_delegateRespondsToSelector:(SEL)arg1;
- (void)pauseScans;
- (void)_connectHAPPeripheralWhenAllowed:(id)arg1;
- (void)_removeFromPendingConnections:(id)arg1;
- (void)_disconectFromHAPPeripheral:(id)arg1;
- (void)saveCacheToDisk:(id)arg1;
- (id)cachedAccessoryForIdentifier:(id)arg1;
- (void)_startDiscoveringAccessoryServers;
- (void)_startScanningForPairingPeers;
- (void)_powerOnCentralManagerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_stopActiveScan;
- (void)_matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)_hasRecentlySeenAccessoriesWithIdentifiers:(id)arg1;
- (_Bool)_hasPairedAccessoriesOfType:(unsigned long long)arg1;
- (void)_discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)_performTimedConnectionRequestForIdentifier:(id)arg1;
- (void)_probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_performTimedScanForIdentifiers:(id)arg1 workQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateCachedStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (void)updateStateForIdentifier:(id)arg1 stateNumber:(id)arg2;
- (void)_forgetPairedAccesoryWithIdentifier:(id)arg1;
- (id)_getDiscoveredPeripheralMatchingIdentifier:(id)arg1;
- (void)_startScanningForReachability:(id)arg1;
- (void)_updateTargetedScanTimer;
- (void)_reportReachabilityForAccessoryWithIdentifier:(id)arg1;
- (id)hapCharacteristicsForEncryptedPayload:(id)arg1 identifier:(id)arg2 shouldConnect:(_Bool *)arg3;
- (void)_notifyDelegatesOfRemovedAccessoryServer:(id)arg1 error:(id)arg2;
- (_Bool)_shouldCreateHAPAccessoryServerWithIdentifier:(id)arg1 statusFlags:(id)arg2 stateNumber:(id)arg3 category:(id)arg4 configNumber:(id)arg5 forPeripheral:(id)arg6 advertisementFormat:(unsigned long long)arg7 setupHash:(id)arg8 stateChanged:(_Bool *)arg9 connectReason:(unsigned char *)arg10;
- (void)_createHAPAccessoryAndNotifyDelegateWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 stateChanged:(_Bool)arg6 connectReason:(unsigned char)arg7 configNumber:(id)arg8 category:(id)arg9 connectionIdleTime:(unsigned char)arg10 format:(unsigned long long)arg11 setupHash:(id)arg12 encryptedPayload:(id)arg13;
- (void)_callPowerOnCompletionsWithError:(id)arg1;
- (void)failedToConnectHAPPeripheral:(id)arg1 error:(id)arg2;
- (unsigned long long)_parseAdvertisementData:(id)arg1 forPeripheral:(id)arg2 name:(id *)arg3 pairingUsername:(id *)arg4 statusFlags:(id *)arg5 stateNumber:(id *)arg6 category:(id *)arg7 configNumber:(id *)arg8 setupHash:(id *)arg9;
- (void)_didDiscoverPeripheral:(id)arg1 accessoryName:(id)arg2 pairingIdentifier:(id)arg3 format:(unsigned long long)arg4 statusFlags:(id)arg5 stateNumber:(id)arg6 category:(id)arg7 configNumber:(id)arg8 setupHash:(id)arg9 encryptedPayload:(id)arg10;
- (void)connectedHAPPeripheral:(id)arg1;
- (void)_connectPendingConnections;
- (void)disconnectedHAPPeripheral:(id)arg1 error:(id)arg2;
- (void)updateBroadcastKeyForIdentifer:(id)arg1 key:(id)arg2 keyUpdatedStateNumber:(id)arg3 keyUpdatedTime:(double)arg4;
- (id)_cachedCharacteristicForInstanceID:(id)arg1 identifier:(id)arg2;
- (void)_performTargetedScanForAccessoryWithIdentifier:(id)arg1;
- (void)_addToPendingConnections:(id)arg1;
- (void)_handleTargetedScanTimeout;
- (void)_removeIdentifiersForReachabilityScan;
- (void)accessoryServerBrowserBTLE:(id)arg1 didDiscoverHAPPeripheral:(id)arg2 accessoryName:(id)arg3 pairingIdentifier:(id)arg4 advertisementFormat:(unsigned long long)arg5 statusFlags:(id)arg6 stateNumber:(id)arg7 category:(id)arg8 configurationNumber:(id)arg9 setupHash:(id)arg10 encryptedPayload:(id)arg11;
- (void)connectToBTLEAccessoryServer:(id)arg1;
- (void)disconnectFromBTLEAccessoryServer:(id)arg1;
- (void)setConnectionLatency:(long long)arg1 forPeripheral:(id)arg2;
- (void)removeCachedAccessoryWithIdentifier:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)setReachabilityCompletionHandler:(CDUnknownBlockType)arg1;
- (void)probeReachabilityForAccessoryServersWithIdentifiers:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)resetLastSeenForAccessoryServersWithIdentifers:(id)arg1;
- (void)configureAccessoryWithIdentifier:(id)arg1 trackState:(_Bool)arg2 connectionPriority:(unsigned long long)arg3;
- (void)retrieveCurrentStateForIdentifer:(id)arg1 onQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)stopTrackingBTLEAccessoriesWithIdentifiers:(id)arg1;
- (void)configureBTLEQoSLimits:(unsigned long long)arg1;
- (void)markNotifyingCharacteristicUpdatedForIdentifier:(id)arg1;
- (void)registerPairedAccessoryWithIdentifier:(id)arg1;
- (void)forgetPairedAccesoryWithIdentifier:(id)arg1;

@end
