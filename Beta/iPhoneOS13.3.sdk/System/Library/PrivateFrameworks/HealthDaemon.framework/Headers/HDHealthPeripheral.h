/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class CBPeripheral, HDHealthServiceManager, HDProfile, HKDevice, NSMutableDictionary, NSString, NSUUID, _HKExpiringCompletionTimer;

@protocol OS_dispatch_queue;

@interface HDHealthPeripheral : NSObject

{
    _Bool _privateMode;
    _Bool _discoveredServices;
    CBPeripheral *_cbPeripheral;
    NSString *_name;
    HKDevice *_deviceInformation;
    NSMutableDictionary *_healthServices;
    HDHealthServiceManager *_serviceManager;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_servicesQueue;
    _HKExpiringCompletionTimer *_privateModeTimer;
    NSMutableDictionary *_serviceForProperty;
    NSMutableDictionary *_propertiesAwaiting;
}

@property (retain, nonatomic) NSMutableDictionary *healthServices;
@property (weak, nonatomic) HDHealthServiceManager *serviceManager;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *servicesQueue;
@property (retain, nonatomic) _HKExpiringCompletionTimer *privateModeTimer;
@property (nonatomic) _Bool discoveredServices;
@property (retain, nonatomic) NSMutableDictionary *serviceForProperty;
@property (retain, nonatomic) NSMutableDictionary *propertiesAwaiting;
@property (nonatomic, readonly) CBPeripheral *cbPeripheral;
@property (nonatomic, readonly) NSUUID *identifier;
@property (readonly) long long state;
@property (readonly) NSString *stateDescription;
@property (readonly) NSString *name;
@property (nonatomic, readonly) HKDevice *deviceInformation;
@property (nonatomic) _Bool privateMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)implementedProperties;

- (void)peripheral:(id)arg1 didModifyServices:(id)arg2;
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)_queue_setDeviceInformation:(id)arg1;
- (void)service:(id)arg1 didReadProperty:(id)arg2 value:(id)arg3 error:(id)arg4;
- (void)_queue_respond:(id)arg1 forProperty:(id)arg2 withError:(id)arg3;
- (void)writeCharacteristic:(id)arg1 expectResponse:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_queue_addPropertyHandler:(CDUnknownBlockType)arg1 forProperty:(id)arg2;
- (void)_queue_startReadProperty:(id)arg1;
- (void)_queue_setupTimer;
- (void)extendPrivateModeLease;
- (void)_queue_handleTimerExpiration;
- (id)initWithCBPeripheral:(id)arg1 name:(id)arg2 serviceManager:(id)arg3 profile:(id)arg4;
- (_Bool)updateCBPeripheral:(id)arg1;
- (void)discoverServices;
- (void)addHealthService:(id)arg1;
- (_Bool)hasServiceWithUUID:(id)arg1;
- (id)healthServiceForType:(long long)arg1;
- (void)disconnectServices;
- (void)performOperation:(id)arg1 withParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProperty:(id)arg1 withHandler:(CDUnknownBlockType)arg2;

@end
