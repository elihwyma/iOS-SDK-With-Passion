/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <HearingUtilities/HUDeviceController.h>

@class AXDispatchTimer, CBCentralManager, NSLock, NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

@interface AXHearingAidDeviceController : HUDeviceController

{
    CBCentralManager *_bluetoothManager;
    NSLock *_centralRequestsLock;
    _Bool _isScanning;
    _Bool _centralIsOn;
    NSObject<OS_dispatch_queue> *_bluetoothCentralQueue;
    NSMutableArray *_availableSearchBlocks;
    NSMutableArray *_connectedSearchBlocks;
    NSMutableArray *_updateDeviceBlocks;
    NSObject<OS_dispatch_queue> *_deviceUpdatesQueue;
    NSMutableDictionary *_deviceUpdatesDescription;
    AXDispatchTimer *_advertisingTimeoutTimer;
    NSMutableDictionary *_advertisingTimestamps;
    AXDispatchTimer *_availableDeviceTimer;
    _Bool _shouldActiveScan;
    NSMutableArray *_availablePeripherals;
    NSMutableArray *_loadedDevices;
    NSMutableArray *_connectedDevices;
    NSMutableArray *centralRequestBlocks;
    NSMutableArray *_persistentDevices;
}

@property (retain, nonatomic) NSMutableArray *availablePeripherals;
@property (retain) NSMutableArray *loadedDevices;
@property (retain, nonatomic) NSMutableArray *connectedDevices;
@property (retain, nonatomic) NSMutableArray *persistentDevices;
@property (retain, nonatomic) NSMutableArray *updateDeviceBlocks;
@property (retain, nonatomic) NSMutableArray *centralRequestBlocks;
@property (retain, nonatomic) NSMutableArray *availableSearchBlocks;
@property (retain, nonatomic) NSMutableArray *connectedSearchBlocks;
@property (nonatomic) _Bool shouldActiveScan;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedController;

- (id)init;
- (void)dealloc;
- (_Bool)isConnected;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (_Bool)isPaired;
- (void)stopSearching;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
- (_Bool)isScanning;
- (void)pairingAgent:(id)arg1 peerDidCompletePairing:(id)arg2;
- (void)pairingAgent:(id)arg1 peerDidFailToCompletePairing:(id)arg2 error:(id)arg3;
- (void)pairingAgent:(id)arg1 peerDidUnpair:(id)arg2;
- (id)hearingAidForDeviceID:(id)arg1;
- (_Bool)representsLocalDevices;
- (void)connectToPeripheral:(id)arg1;
- (void)disconnectFromPeripheral:(id)arg1;
- (void)unpairPeripheralWithUUID:(id)arg1;
- (void)resetConnectionToPeripheral:(id)arg1;
- (void)mergeDevice:(id)arg1 withDevice:(id)arg2;
- (void)checkPeripheralPaired:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)hearingAidsForUUID:(id)arg1;
- (void)deviceDidFinishLoading:(id)arg1;
- (void)checkPartiallyPairedWithCompletion:(CDUnknownBlockType)arg1;
- (void)searchForAvailableDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)forgetDevice:(id)arg1;
- (void)disconnectFromHearingAidWithDeviceUUID:(id)arg1;
- (void)cancelPendingConnections;
- (id)valueForProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (_Bool)isPartiallyConnected;
- (void)persistPairedHearingAids;
- (_Bool)isBluetoothAvailable;
- (void)shouldRelinquishForPartialConnection:(CDUnknownBlockType)arg1;
- (void)searchForAvailableDevices;
- (void)pairedHearingAidsDidChange;
- (void)removeLoadedDevice:(id)arg1;
- (void)clearMissingHearingAids;
- (void)sendRequestToCentralManager:(CDUnknownBlockType)arg1;
- (void)loadedDevicesDidChange;
- (id)hearingAidForPeripheral:(id)arg1;
- (void)addLoadedDevice:(id)arg1;
- (void)addAvailableDevice:(id)arg1;
- (void)addConnectedDevice:(id)arg1;
- (void)removeAvailableDevice:(id)arg1;
- (void)removeConnectedDevice:(id)arg1;
- (void)clearAvailableDevices;
- (void)clearConnectedDevices;
- (void)clearLoadedDevices;
- (id)hearingAidsForPeripheral:(id)arg1;
- (void)searchForConnectedDevices;

@end
