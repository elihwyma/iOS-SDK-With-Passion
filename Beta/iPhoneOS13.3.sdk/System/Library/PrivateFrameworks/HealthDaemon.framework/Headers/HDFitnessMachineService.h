/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthService.h>

@interface HDFitnessMachineService : HDHealthService

{
    unsigned long long _machineType;
}

@property (nonatomic, readonly) unsigned long long machineType;

+ (long long)serviceType;
+ (id)serviceUUID;
+ (id)implementedProperties;
+ (id)_characteristicsMap;
+ (id)_allCharacteristicClasses;
+ (unsigned long long)typeFromAdvertisementData:(id)arg1;

- (void)readProperty:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (id)servicesInProfile;
- (_Bool)processAdvertisementData:(id)arg1;

@end
