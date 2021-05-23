/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class NSDate, NSString, NSUUID;

@interface HDFitnessMachineSessionRecoveryConfiguration : NSObject <Swift>

{
    NSUUID *_sessionUUID;
    NSUUID *_machineUUID;
    unsigned long long _machineType;
    NSString *_machineName;
    NSString *_machineBrand;
    unsigned long long _activityType;
    NSDate *_machineStartDate;
    NSDate *_machinePreferredUntilDate;
}

@property (nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) NSUUID *machineUUID;
@property (nonatomic, readonly) unsigned long long machineType;
@property (copy, nonatomic, readonly) NSString *machineName;
@property (copy, nonatomic) NSString *machineBrand;
@property (nonatomic, readonly) unsigned long long activityType;
@property (nonatomic, readonly) NSDate *machineStartDate;
@property (nonatomic, readonly) NSDate *machinePreferredUntilDate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionUUID:(id)arg1 machineUUID:(id)arg2 machineType:(unsigned long long)arg3 machineName:(id)arg4 machineBrand:(id)arg5 activityType:(unsigned long long)arg6 machineStartDate:(id)arg7 machinePreferredUntilDate:(id)arg8;

@end
