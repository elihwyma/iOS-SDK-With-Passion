/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthService.h>

@interface HDHeartRateService : HDHealthService

{
    _Bool _deliverData;
    long long _preferredSensorLocation;
}

@property (nonatomic) long long preferredSensorLocation;

+ (long long)serviceType;
+ (id)serviceUUID;

- (id)initWithServiceManager:(id)arg1 peripheral:(id)arg2 advertisementData:(id)arg3 profile:(id)arg4;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (_Bool)supportsOperation:(id)arg1;
- (void)performOperation:(id)arg1 onPeripheral:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetEnergyExpendedOnPeripheral:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)deliverData;
- (void)handleHeartRate:(id)arg1;
- (void)handleBodyLocation:(id)arg1;
- (void)setDeliverData:(_Bool)arg1;

@end
