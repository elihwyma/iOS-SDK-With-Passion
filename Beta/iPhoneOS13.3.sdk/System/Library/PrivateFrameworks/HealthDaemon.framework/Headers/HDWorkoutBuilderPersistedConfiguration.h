/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDDeviceEntity, HDSourceEntity, HKQuantity, HKWorkoutConfiguration, NSString, NSUUID;

@interface HDWorkoutBuilderPersistedConfiguration : NSObject <Swift>

{
    NSUUID *_builderIdentifier;
    HKWorkoutConfiguration *_workoutConfiguration;
    HDSourceEntity *_sourceEntity;
    NSString *_sourceVersion;
    HDDeviceEntity *_deviceEntity;
    unsigned long long _goalType;
    HKQuantity *_goal;
}

@property (copy, nonatomic) NSUUID *builderIdentifier;
@property (copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration;
@property (retain, nonatomic) HDSourceEntity *sourceEntity;
@property (copy, nonatomic) NSString *sourceVersion;
@property (retain, nonatomic) HDDeviceEntity *deviceEntity;
@property (nonatomic) unsigned long long goalType;
@property (copy, nonatomic) HKQuantity *goal;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
