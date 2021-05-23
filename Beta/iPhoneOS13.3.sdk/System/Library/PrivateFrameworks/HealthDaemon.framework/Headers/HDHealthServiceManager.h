/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CBCentralManager, CBUUID, HDDataCollectionManager, HDIdentifierTable, HDProfile, NSLock, NSMutableDictionary, NSSet, NSString;

@protocol OS_dispatch_queue;

@interface HDHealthServiceManager : NSObject

{
    int _privacyNotificationToken;
    CBCentralManager *_central;
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectionManager *_dataCollectionManager;
    HDProfile *_profile;
    NSLock *_discoveryLock;
    HDIdentifierTable *_discoveryInfosTable;
    NSMutableDictionary *_discoveryInfosByServiceUUID;
    NSSet *_scanServiceUUIDs;
    CBUUID *_allServicesUUID;
    NSLock *_connectionLock;
    HDIdentifierTable *_connectionInfosTable;
    NSMutableDictionary *_connectionInfosByPeripheralUUID;
    NSMutableDictionary *_connectedPeripheralsByPeripheralUUID;
    NSMutableDictionary *_bluetoothUpdateHandlers;
}

@property (retain, nonatomic) CBCentralManager *central;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSLock *discoveryLock;
@property (retain, nonatomic) HDIdentifierTable *discoveryInfosTable;
@property (retain, nonatomic) NSMutableDictionary *discoveryInfosByServiceUUID;
@property (retain, nonatomic) NSSet *scanServiceUUIDs;
@property (retain, nonatomic) CBUUID *allServicesUUID;
@property (retain, nonatomic) NSLock *connectionLock;
@property (retain, nonatomic) HDIdentifierTable *connectionInfosTable;
@property (retain, nonatomic) NSMutableDictionary *connectionInfosByPeripheralUUID;
@property (retain, nonatomic) NSMutableDictionary *connectedPeripheralsByPeripheralUUID;
@property (retain, nonatomic) NSMutableDictionary *bluetoothUpdateHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (long long)_isBTLESupportedWithCentral:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (id)shortDescription;
- (void)centralManager:(id)arg1 willRestoreState:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)pairingAgent:(id)arg1 peerDidRequestPairing:(id)arg2 type:(long long)arg3 passkey:(id)arg4;
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;
- (void)unpairHealthServiceIfNecessary:(id)arg1;
- (unsigned long long)connectHealthService:(id)arg1 connectionOptions:(unsigned long long)arg2 sessionHandler:(CDUnknownBlockType)arg3 dataHandler:(CDUnknownBlockType)arg4 mfaSuccessHandler:(CDUnknownBlockType)arg5 autoPairData:(id)arg6 error:(id *)arg7;
- (void)disconnectHealthService:(unsigned long long)arg1;
- (void)sendBluetoothStatusUpdatesForServer:(id)arg1 updateHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetOOBState;
- (id)retrieveOOBData:(id *)arg1;
- (void)extendPrivateModeLease:(id)arg1 forDuration:(unsigned short)arg2;
- (void)servicesInvalidatedForDevice:(id)arg1 withError:(id)arg2;
- (void)discoveredServices:(id)arg1 forPeripheral:(id)arg2;
- (void)discoveredCharacteristics:(id)arg1 forDevice:(id)arg2 service:(id)arg3;
- (id)reviewSavedHealthServiceSessionsWithError:(id *)arg1;
- (unsigned long long)connectHealthService:(id)arg1 sessionHandler:(CDUnknownBlockType)arg2 dataHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)writeCharacteristic:(id)arg1 onSession:(unsigned long long)arg2 expectResponse:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dataReceived:(id)arg1 deviceEntity:(id)arg2;
- (void)characteristicReceived:(id)arg1 device:(id)arg2;
- (unsigned long long)discoverHealthServicesWithType:(long long)arg1 timeout:(unsigned long long)arg2 alwaysNotify:(_Bool)arg3 handler:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (void)stopDiscoveryWithIdentifier:(unsigned long long)arg1;
- (unsigned long long)connectHealthService:(id)arg1 sessionHandler:(CDUnknownBlockType)arg2 dataHandler:(CDUnknownBlockType)arg3 characteristicsHandler:(CDUnknownBlockType)arg4 error:(id *)arg5;
- (_Bool)healthUpdatesEnabledFromDevice:(id)arg1 error:(id *)arg2;
- (_Bool)setHealthUpdatesEnabled:(_Bool)arg1 fromDevice:(id)arg2 error:(id *)arg3;
- (void)getSupportedPropertyNamesWithHandler:(CDUnknownBlockType)arg1;
- (void)getProperty:(id)arg1 forSession:(unsigned long long)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)performOperation:(id)arg1 onSession:(unsigned long long)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithProfile:(id)arg1 centralManager:(id)arg2 queue:(id)arg3;
- (void)_queue_handleMFASuccessNotification;
- (void)_disconnectPeripheralWithDeviceIdentifier:(id)arg1 error:(id)arg2;
- (id)_createDiscoveryTimeout:(unsigned long long)arg1 forIdentifier:(unsigned long long)arg2;
- (void)_queue_reportExistingDiscoveriesForService:(id)arg1;
- (void)_queue_updateScan;
- (id)_copyDiscoveryInfosForServiceUUID:(id)arg1;
- (id)_serviceFromUUID:(id)arg1 peripheral:(id)arg2 serviceAdvertisementData:(id)arg3 peripheralAdvertisementData:(id)arg4;
- (unsigned long long)_connectHealthService:(id)arg1 connectionInfo:(id)arg2 error:(id *)arg3;
- (unsigned long long)_addConnectedPeripheral:(id)arg1 service:(id)arg2 connectionInfo:(id)arg3;
- (void)_removeConnectedPeripheral:(unsigned long long)arg1 withError:(id)arg2;
- (id)_copyConnectionInfosForPeripheralUUID:(id)arg1;
- (void)_createConnectionTimeoutForConnectionInfo:(id)arg1;
- (void)updateConnectionInfosForPeripheralUUID:(id)arg1 withMutation:(CDUnknownBlockType)arg2;
- (id)_scanOptionsForDiscoveryInfos:(id)arg1;
- (id)_allServiceUUIDs;
- (void)_queue_stopScan;
- (void)retrieveAndRemoveDisconnectedPeripherals;
- (void)removeConnectingPeripheralsWithError:(id)arg1;
- (void)_queue_notifyBluetoothStatusUpdates:(long long)arg1 error:(id)arg2;
- (id)_reportPeripheral:(id)arg1 serviceUUID:(id)arg2 serviceAdvertisementData:(id)arg3 peripheralAdvertisementData:(id)arg4;
- (void)_notifyDiscoveryForInfos:(id)arg1 peripheral:(id)arg2 healthService:(id)arg3 alwaysNotify:(_Bool)arg4;
- (id)allServicesWithError:(id *)arg1;
- (id)_healthServiceForPeriperalID:(id)arg1 serviceType:(long long)arg2;

@end
