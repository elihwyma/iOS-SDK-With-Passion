/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HKQuantity;

@interface HDDemoDataWorkoutPrototype : NSObject

{
    unsigned long long _workoutActivityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    double _startTimeOffsetInDay;
    double _duration;
    double _totalEnergyBurnedInKcal;
    double _totalDistanceWalkingInMiles;
    double _totalDistanceCyclingInMiles;
    double _totalDistanceSwimmingInYards;
    double _swimmingSegmentDistanceInYards;
    long long _totalSwimmingSegments;
    long long _numLapsPerSegment;
    double _swimTimePerSegment;
    double _restTimePerSegment;
    long long _swimmingStrokeStyle;
}

@property (nonatomic) unsigned long long workoutActivityType;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) HKQuantity *goal;
@property (nonatomic) double startTimeOffsetInDay;
@property (nonatomic) double duration;
@property (nonatomic) double totalEnergyBurnedInKcal;
@property (nonatomic) double totalDistanceWalkingInMiles;
@property (nonatomic) double totalDistanceCyclingInMiles;
@property (nonatomic) double totalDistanceSwimmingInYards;
@property (nonatomic) double swimmingSegmentDistanceInYards;
@property (nonatomic) long long totalSwimmingSegments;
@property (nonatomic) long long numLapsPerSegment;
@property (nonatomic) double swimTimePerSegment;
@property (nonatomic) double restTimePerSegment;
@property (nonatomic) long long swimmingStrokeStyle;

+ (id)swimmingPrototype;
+ (id)runningPrototype;
+ (id)thirdPartyWorkoutPrototype;
+ (id)HIITPrototype;
+ (id)walkingPrototype;
+ (id)hikingPrototype;
+ (id)ellipticalPrototype;
+ (id)yogaPrototype;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8;
+ (id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8 distanceSwimming:(double)arg9 distanceSwimmingSegment:(double)arg10 totalSwimmingSegments:(long long)arg11 numLapsPerSegment:(long long)arg12 swimTimePerSegment:(double)arg13 restTimePerSegment:(double)arg14 swimmingStrokeStyle:(long long)arg15;
+ (id)yogaAndRunningPrototypes;

@end
