/*
 Image: /System/Library/Frameworks/GameController.framework/GameController
 */

#import <Foundation/NSObject.h>

@class CBCentralManager, NSMutableArray, NSString;

@interface GCControllerCBDelegate : NSObject

{
    NSMutableArray *_foundPeripherals;
    NSMutableArray *_connectedPeripherals;
    CBCentralManager *_centralManager;
    CDUnknownBlockType _completionHandler;
}

@property (retain, nonatomic) CBCentralManager *centralManager;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)stopScan;
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;
- (void)startScan;
- (void)fireCompletionHandler;
- (void)startScanWithTimeout:(double)arg1;

@end
