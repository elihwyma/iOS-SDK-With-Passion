/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicUInt8Field : HDFitnessMachineCharacteristicField

{
    unsigned char _value;
}

@property (nonatomic) unsigned char value;

- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (id)valueAsData;

@end
