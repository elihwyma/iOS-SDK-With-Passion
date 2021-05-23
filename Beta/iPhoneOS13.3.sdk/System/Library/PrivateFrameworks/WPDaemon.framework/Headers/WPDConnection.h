/*
 Image: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
 */

#import <Foundation/NSObject.h>

@class CBCentral, CBCharacteristic, CBPeripheral, CBPeripheralManager, CBService, NSDictionary, NSMutableSet, NSString, WPCharacteristic, WPDClient;

@protocol OS_voucher;

@interface WPDConnection : NSObject

{
    _Bool _didConnectSent;
    _Bool _connectablePacket;
    WPDClient *_client;
    NSMutableSet *_subscribedCharacteristics;
    long long _connectionType;
    long long _recentRole;
    CBPeripheral *_peripheral;
    CBCentral *_central;
    NSDictionary *_charsAndServicesToDiscover;
    WPCharacteristic *_characteristicToSend;
    NSString *_characteristicService;
    unsigned long long _dataLeftToSend;
    CBCharacteristic *_centralCharacteristic;
    CBService *_centralService;
    CBPeripheralManager *_sendDataManager;
    NSObject<OS_voucher> *_voucher;
}

@property (retain) CBPeripheral *peripheral;
@property (retain) CBCentral *central;
@property (retain) NSDictionary *charsAndServicesToDiscover;
@property (retain) WPCharacteristic *characteristicToSend;
@property (retain) NSString *characteristicService;
@property unsigned long long dataLeftToSend;
@property (retain) CBCharacteristic *centralCharacteristic;
@property (retain) CBService *centralService;
@property (retain) CBPeripheralManager *sendDataManager;
@property _Bool connectablePacket;
@property (retain) NSObject<OS_voucher> *voucher;
@property (weak, nonatomic) WPDClient *client;
@property (retain, nonatomic) NSMutableSet *subscribedCharacteristics;
@property (nonatomic, getter=fetchConnectionType) long long connectionType;
@property (nonatomic) _Bool didConnectSent;
@property (nonatomic) long long recentRole;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (long long)connectionType;
- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (id)sendDataToCharacteristic:(id)arg1 inService:(id)arg2 forPeer:(id)arg3;
- (void)discoverCharacteristicsAndServices:(id)arg1 forPeripheral:(id)arg2;
- (id)initWithPeripheral:(id)arg1;
- (void)resetData;
- (void)updateWithPeripheral:(id)arg1;
- (id)getPeripheral;
- (id)getPeripheralUUID;
- (void)holdVoucher;
- (id)subscribe:(_Bool)arg1 toPeer:(id)arg2 withCharacteristic:(id)arg3 inService:(id)arg4;
- (void)readyForDataTransfer;
- (void)updateWithCentral:(id)arg1 characteristic:(id)arg2;
- (id)getCharacteristicWithUUID:(id)arg1 inService:(id)arg2 forPeripheral:(id)arg3;
- (void)sendDataToCentral;
- (void)sendDataToPeripheral;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2;
- (id)getCentral;

@end
