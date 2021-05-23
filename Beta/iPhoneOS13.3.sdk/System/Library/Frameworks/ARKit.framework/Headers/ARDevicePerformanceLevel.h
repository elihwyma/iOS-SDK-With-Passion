/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@interface ARDevicePerformanceLevel : NSObject <Swift>

{
    unsigned long long _thermalLevel;
    unsigned long long _batteryLevel;
}

@property (nonatomic, readonly) unsigned long long thermalLevel;
@property (nonatomic, readonly) unsigned long long batteryLevel;

+ (unsigned long long)ARDevicethermalStateFromNSProcessInfoThermalState:(long long)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNSProcessInfoThermalState:(long long)arg1 initWithBatteryLevel:(unsigned long long)arg2;
- (id)initWithThermalLevel:(unsigned long long)arg1 initWithBatteryLevel:(unsigned long long)arg2;

@end
