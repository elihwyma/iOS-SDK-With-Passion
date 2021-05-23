/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

#import <HealthKit/Swift-Protocol.h>

@class NSDate, NSNumber, NSTimeZone, NSUUID;

@interface _HKFitnessFriendActivitySnapshot : HKSample <Swift>

{
    _Bool _hasCarriedForwardGoals;
    NSUUID *_friendUUID;
    NSUUID *_sourceUUID;
    long long _snapshotIndex;
    NSDate *_snapshotUploadedDate;
    NSNumber *_timeZoneOffsetFromUTCForNoon;
    double _activeHours;
    double _activeHoursGoal;
    double _briskMinutes;
    double _briskMinutesGoal;
    double _energyBurned;
    double _energyBurnedGoal;
    double _mmv;
    double _mmg;
    double _stepCount;
    double _pushCount;
    long long _wheelchairUse;
    double _walkingAndRunningDistance;
    long long _amm;
}

@property (retain, nonatomic) NSUUID *friendUUID;
@property (retain, nonatomic) NSUUID *sourceUUID;
@property (nonatomic) long long snapshotIndex;
@property (retain, nonatomic) NSDate *snapshotUploadedDate;
@property (retain, nonatomic) NSNumber *timeZoneOffsetFromUTCForNoon;
@property (nonatomic) double activeHours;
@property (nonatomic) double activeHoursGoal;
@property (nonatomic) double briskMinutes;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) double energyBurned;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic) double mmv;
@property (nonatomic) double mmg;
@property (nonatomic) double stepCount;
@property (nonatomic) double pushCount;
@property (nonatomic) long long wheelchairUse;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic, readonly) double energyBurnedGoalPercentage;
@property (nonatomic, readonly) double mmgp;
@property (nonatomic, readonly) double briskMinutesGoalPercentage;
@property (nonatomic, readonly) double activeHoursGoalPercentage;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic) long long amm;
@property (nonatomic) _Bool hasCarriedForwardGoals;

+ (_Bool)supportsSecureCoding;
+ (id)_fitnessFriendActivitySnapshotWithSnapshotIndex:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 sourceUUID:(id)arg4;
+ (id)_fitnessFriendActivitySnapshotWithFriendUUID:(id)arg1 sourceUUID:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 snapshotIndex:(long long)arg5 snapshotUploadedDate:(id)arg6;
+ (id)snapshotWithActivitySummary:(id)arg1;
+ (id)_mostSignificantSnapshotAmongSnapshots:(id)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_mostSignificantSnapshot:(id)arg1;
- (id)activitySummary;

@end
