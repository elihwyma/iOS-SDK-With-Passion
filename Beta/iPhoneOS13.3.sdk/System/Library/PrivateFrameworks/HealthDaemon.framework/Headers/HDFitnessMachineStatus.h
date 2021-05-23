/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDHealthServiceCharacteristic.h>

@interface HDFitnessMachineStatus : HDHealthServiceCharacteristic

{
    unsigned long long _machineState;
}

@property (nonatomic) unsigned long long machineState;

+ (id)uuid;
+ (id)_buildWithBinaryValue:(id)arg1 error:(id *)arg2;
+ (id)unitTest_fakeStatusUpdateForState:(unsigned long long)arg1;

- (id)description;

@end
