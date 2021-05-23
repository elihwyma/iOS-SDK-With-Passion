/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDBodySensorLocation : HDHealthServiceCharacteristic

{
    long long _sensorLocation;
}

@property (nonatomic) long long sensorLocation;

+ (id)uuid;
+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;

- (id)description;

@end
