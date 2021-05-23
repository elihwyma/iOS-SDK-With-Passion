/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HKQuantity, NSDate, NSMutableArray, NSMutableData;

@interface _HDDemoDataActivityWorkoutState : NSObject <Swift>

{
    NSMutableData *_associatedObjectUUIDs;
    NSMutableArray *_workoutEvents;
    unsigned long long _workoutActivityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    NSDate *_startDate;
    double _totalEnergyBurnedInKilocalories;
    double _totalDistanceWalkingInMeters;
    double _totalDistanceCyclingInMeters;
    double _totalDistanceSwimmingInYards;
    double _totalSwimmingStrokes;
    long long _swimmingStrokeStyle;
}

@property (retain, nonatomic) NSMutableData *associatedObjectUUIDs;
@property (retain, nonatomic) NSMutableArray *workoutEvents;
@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) HKQuantity *goal;
@property (retain, nonatomic) NSDate *startDate;
@property (nonatomic) double totalEnergyBurnedInKilocalories;
@property (nonatomic) double totalDistanceWalkingInMeters;
@property (nonatomic) double totalDistanceCyclingInMeters;
@property (nonatomic) double totalDistanceSwimmingInYards;
@property (nonatomic) double totalSwimmingStrokes;
@property (nonatomic) long long swimmingStrokeStyle;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)lapCount;
- (void)addAssociatedObjectUUID:(id)arg1;
- (id)generateWorkoutWithEndDate:(id)arg1 profile:(id)arg2 provenance:(id)arg3;
- (void)addWorkoutEvent:(id)arg1;
- (void)addWorkoutRouteFromFilePath:(id)arg1 profile:(id)arg2 provenance:(id)arg3 workout:(id)arg4;

@end
