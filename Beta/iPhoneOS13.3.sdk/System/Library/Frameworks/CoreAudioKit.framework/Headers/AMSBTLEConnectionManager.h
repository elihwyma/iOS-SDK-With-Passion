/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <Foundation/NSObject.h>

@class CBCentralManager, NSMutableArray, NSString, NSTimer;

@protocol BTLEConnectionTable;

__attribute__((visibility("hidden")))
@interface AMSBTLEConnectionManager : NSObject

{
    CBCentralManager *centralManager;
    NSMutableArray *peripheralList;
    NSMutableArray *connectedBTPeripherals;
    NSMutableArray *connectedAMSPeripherals;
    NSTimer *refreshTimer;
    NSTimer *connectionTimer;
    id <BTLEConnectionTable> controller;
    long long centralState;
    _Bool isAdvertising;
}

@property (readonly) NSMutableArray *peripheralList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)startTimer;
- (void)timerFired:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (long long)bluetoothState;
- (void)stopScan;
- (void)killTimer;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)startScan;
- (_Bool)isLECapableHardware;
- (void)createPeripheralList;
- (void)updateAdvertisingState:(id)arg1;
- (unsigned int)midiDeviceForUUID:(id)arg1;
- (id)amsPeripheralForCBPeripheral:(id)arg1;
- (void)checkAlreadyConnectedPeripherals;
- (void)connectionTimerFired:(id)arg1;
- (_Bool)peripheralIsConnectedCentral:(id)arg1;
- (id)initWithUIController:(id)arg1;
- (void)setUIController:(id)arg1;
- (void)removeAMSPeripheralForCBPeripheral:(id)arg1;

@end
