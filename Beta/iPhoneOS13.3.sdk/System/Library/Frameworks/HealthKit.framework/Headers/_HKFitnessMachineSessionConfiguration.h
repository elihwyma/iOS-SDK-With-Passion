/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface _HKFitnessMachineSessionConfiguration : NSObject

{
    NSUUID *_sessionUUID;
    NSUUID *_connectionUUID;
    NSUUID *_machineUUID;
    unsigned long long _machineType;
    NSString *_machineName;
    NSString *_machineBrand;
}

@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) NSUUID *connectionUUID;
@property (nonatomic, readonly) NSUUID *machineUUID;
@property (nonatomic, readonly) unsigned long long machineType;
@property (nonatomic, readonly) NSString *machineName;
@property (nonatomic, readonly) NSString *machineBrand;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setConnectionUUID:(id)arg1;
- (void)_setSessionUUID:(id)arg1;
- (void)_setMachineUUID:(id)arg1;
- (void)_setMachineType:(unsigned long long)arg1;
- (void)_setMachineName:(id)arg1;
- (void)_setMachineBrand:(id)arg1;

@end
