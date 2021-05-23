/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDDeviceEntity, HDHealthPeripheral, HDHealthServiceManager, HDProfile, NSMutableArray, NSMutableDictionary, NSString, NSUUID;

@protocol OS_dispatch_queue;

@interface HDHealthService : NSObject

{
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSMutableArray *_pendingObjectBuffer;
    NSMutableArray *_pendingCharacteristicBuffer;
    HDDeviceEntity *_deviceEntity;
    _Atomic _Bool _deviceInformationLoaded;
    _Bool _deliverData;
    _Bool _characteristicsDiscovered;
    HDProfile *_profile;
    HDHealthPeripheral *_healthPeripheral;
    NSUUID *_peripheralUUID;
    NSString *_serviceId;
    HDHealthServiceManager *_serviceManager;
    NSMutableDictionary *_writableCharacteristics;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSMutableArray *_pendingWrites;
}

@property (retain, nonatomic) HDHealthServiceManager *serviceManager;
@property (retain, nonatomic) NSMutableDictionary *writableCharacteristics;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *writeQueue;
@property (retain, nonatomic) NSMutableArray *pendingWrites;
@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic, readonly) HDHealthPeripheral *healthPeripheral;
@property (nonatomic, readonly) NSUUID *peripheralUUID;
@property _Bool deliverData;
@property (retain, nonatomic) NSString *serviceId;
@property (nonatomic, readonly) _Bool characteristicsDiscovered;

+ (long long)serviceType;
+ (id)serviceUUID;
+ (id)implementedProperties;

- (id)description;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;
- (void)readProperty:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (void)characteristicDataReceived:(id)arg1;
- (id)servicesInProfile;
- (_Bool)processAdvertisementData:(id)arg1;
- (void)deviceDisconnecting;
- (_Bool)supportsOperation:(id)arg1;
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)supportsWritingCharacteristic:(id)arg1;
- (void)writeCharacteristic:(id)arg1 expectResponse:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deviceInformationSetOnPeripheral;
- (void)peripheral:(id)arg1 didDiscoverCharacteristics:(id)arg2;
- (void)setWritableCharacteristic:(id)arg1;
- (_Bool)_shouldNotifyReceivedData;
- (void)_dataQueue_persistData:(id)arg1;
- (void)_bufferObjectToBePersisted:(id)arg1;
- (id)_dataQueue_deviceEntity;
- (void)_dataQueue_notifyCharacteristic:(id)arg1;
- (void)_bufferCharacteristicToBeNotified:(id)arg1;
- (void)executeFirstWrite;
- (void)respondFirstWriteWithData:(id)arg1 error:(id)arg2;
- (void)markCharacteristicsDiscovered;
- (void)_dataQueue_deliverDataIfPossible;
- (void)serviceDataReceived:(id)arg1;
- (void)mfaSucceededOnPeripheral;

@end
