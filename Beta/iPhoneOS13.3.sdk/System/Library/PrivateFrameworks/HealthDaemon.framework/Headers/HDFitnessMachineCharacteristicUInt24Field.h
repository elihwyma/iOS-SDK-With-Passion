/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicUInt24Field : HDFitnessMachineCharacteristicField

{
    unsigned int _value;
}

@property (nonatomic) unsigned int value;

- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (id)valueAsData;

@end
