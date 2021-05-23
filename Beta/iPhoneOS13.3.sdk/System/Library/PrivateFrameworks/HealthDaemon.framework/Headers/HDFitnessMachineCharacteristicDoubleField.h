/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDFitnessMachineCharacteristicField.h>

@interface HDFitnessMachineCharacteristicDoubleField : HDFitnessMachineCharacteristicField

{
    _Bool _isSigned;
    double _value;
}

@property (nonatomic) double value;
@property (nonatomic) _Bool isSigned;

- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (id)valueAsData;

@end
