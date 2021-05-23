/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HKQuantity;

@interface HDDemoDataGeneratorWorkoutConfiguration : NSObject <Swift>

{
    _Bool _createdFromNSKeyedUnarchiver;
    _Bool _indoor;
    unsigned long long _activityType;
    unsigned long long _goalType;
    HKQuantity *_goal;
    double _startTime;
    double _endTime;
    double _kcalRate;
    double _distanceWalkingRateInMiles;
    double _distanceCyclingRateInMiles;
    double _distanceSwimmingRateInYards;
    double _distanceSwimmingSegmentInYards;
    long long _numSwimmingSegments;
    long long _swimmingNumLapsPerSegment;
    double _swimmingSwimSegmentTime;
    double _swimmingRestSegmentTime;
    long long _swimmingStrokeStyle;
}

@property (nonatomic) unsigned long long activityType;
@property (nonatomic) _Bool indoor;
@property (nonatomic) unsigned long long goalType;
@property (retain, nonatomic) HKQuantity *goal;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double kcalRate;
@property (nonatomic) double distanceWalkingRateInMiles;
@property (nonatomic) double distanceCyclingRateInMiles;
@property (nonatomic) double distanceSwimmingRateInYards;
@property (nonatomic) double distanceSwimmingSegmentInYards;
@property (nonatomic) long long numSwimmingSegments;
@property (nonatomic) long long swimmingNumLapsPerSegment;
@property (nonatomic) double swimmingSwimSegmentTime;
@property (nonatomic) double swimmingRestSegmentTime;
@property (nonatomic) long long swimmingStrokeStyle;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)createdFromNSKeyedUnarchiver;
- (id)initWithPrototype:(id)arg1 currentDemoDataTime:(double)arg2;

@end
