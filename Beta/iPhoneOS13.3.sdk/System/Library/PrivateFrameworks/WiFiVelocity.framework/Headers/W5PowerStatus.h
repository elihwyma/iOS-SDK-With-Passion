/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@interface W5PowerStatus : NSObject

{
    int _batteryWarningLevel;
    unsigned int _powerStateCaps;
    long long _powerSourceType;
    double _internalBatteryLevel;
}

@property (nonatomic) long long powerSourceType;
@property (nonatomic) int batteryWarningLevel;
@property (nonatomic) double internalBatteryLevel;
@property (nonatomic) unsigned int powerStateCaps;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToPowerStatus:(id)arg1;

@end
