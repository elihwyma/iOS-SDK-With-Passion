/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicInt16Field : HDFitnessMachineCharacteristicField

{
    short _value;
}

@property (nonatomic) short value;

- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (id)valueAsData;

@end
