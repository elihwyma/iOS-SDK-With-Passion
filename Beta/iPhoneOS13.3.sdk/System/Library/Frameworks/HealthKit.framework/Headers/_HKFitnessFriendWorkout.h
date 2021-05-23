/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

#import <HealthKit/Swift-Protocol.h>

@class HKQuantity, NSString, NSUUID;

@interface _HKFitnessFriendWorkout : HKSample <Swift>

{
    _Bool _isWatchWorkout;
    _Bool _isIndoorWorkout;
    NSUUID *_friendUUID;
    unsigned long long _workoutActivityType;
    double _duration;
    HKQuantity *_totalEnergyBurned;
    HKQuantity *_totalBasalEnergyBurned;
    HKQuantity *_totalDistance;
    HKQuantity *_goal;
    unsigned long long _goalType;
    NSString *_bundleID;
    NSString *_deviceManufacturer;
    NSString *_deviceModel;
    long long _amm;
}

@property (retain, nonatomic) NSUUID *friendUUID;
@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic) double duration;
@property (retain, nonatomic) HKQuantity *totalEnergyBurned;
@property (retain, nonatomic) HKQuantity *totalBasalEnergyBurned;
@property (retain, nonatomic) HKQuantity *totalDistance;
@property (retain, nonatomic) HKQuantity *goal;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) _Bool isWatchWorkout;
@property (nonatomic) _Bool isIndoorWorkout;
@property (retain, nonatomic) NSString *deviceManufacturer;
@property (retain, nonatomic) NSString *deviceModel;
@property (nonatomic) long long amm;

+ (_Bool)supportsSecureCoding;
+ (id)fitnessFriendworkoutWithActivityType:(unsigned long long)arg1 friendUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 duration:(double)arg5 totalActiveEnergyBurned:(id)arg6 totalBasalEnergyBurned:(id)arg7 totalDistance:(id)arg8 goalType:(unsigned long long)arg9 goal:(id)arg10 bundleID:(id)arg11 isWatchWorkout:(_Bool)arg12 isIndoorWorkout:(_Bool)arg13 deviceManufacturer:(id)arg14 deviceModel:(id)arg15 amm:(long long)arg16;
+ (id)fitnessFriendWorkoutFromHKWorkout:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)hkWorkoutFromFriendWorkout;

@end
