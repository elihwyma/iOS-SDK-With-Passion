/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthService.h>

@class CBCharacteristic;

@interface HDBatteryService : HDHealthService

{
    CBCharacteristic *_batteryCharacteristic;
}

@property (retain, nonatomic) CBCharacteristic *batteryCharacteristic;

+ (long long)serviceType;
+ (id)serviceUUID;
+ (id)implementedProperties;

- (void)readProperty:(id)arg1;
- (void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4;
- (id)handleBatteryLevel:(id)arg1;

@end
