/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicUInt16Field : HDFitnessMachineCharacteristicField

{
    unsigned short _value;
}

@property (nonatomic) unsigned short value;

- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (id)valueAsData;

@end
