/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDDemoDataGeneratorWorkoutConfiguration, NSDate;

@interface HDDemoDataGeneratorState : NSObject <Swift>

{
    _Bool _createdFromNSKeyedUnarchiver;
    _Bool _finished;
    _Bool _firstRun;
    NSDate *_firstSampleDate;
    NSDate *_lastSampleDate;
    NSDate *_lastRunDate;
    long long _currentDay;
    double _startTime;
    double _currentTime;
    double _endTime;
    HDDemoDataGeneratorWorkoutConfiguration *_workoutConfiguration;
}

@property (retain, nonatomic) NSDate *firstSampleDate;
@property (retain, nonatomic) NSDate *lastSampleDate;
@property (retain, nonatomic) NSDate *lastRunDate;
@property (nonatomic) long long currentDay;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic) double startTime;
@property (nonatomic) double currentTime;
@property (nonatomic) double endTime;
@property (nonatomic, getter=isFinished) _Bool finished;
@property (nonatomic, getter=isFirstRun) _Bool firstRun;
@property (nonatomic, readonly, getter=isExercising) _Bool exercising;
@property (nonatomic, readonly, getter=isRunning) _Bool running;
@property (nonatomic, readonly, getter=isCycling) _Bool cycling;
@property (nonatomic, readonly, getter=isSwimming) _Bool swimming;
@property (nonatomic, readonly, getter=isDoingHIIT) _Bool doingHIIT;
@property (nonatomic, readonly, getter=isWalking) _Bool walking;
@property (nonatomic, readonly, getter=isDoingElliptical) _Bool doingElliptical;
@property (nonatomic, readonly, getter=isDoingYoga) _Bool doingYoga;
@property (nonatomic, readonly, getter=isHiking) _Bool hiking;
@property (retain, nonatomic) HDDemoDataGeneratorWorkoutConfiguration *workoutConfiguration;
@property (nonatomic, readonly) long long calendarDay;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)createdFromNSKeyedUnarchiver;

@end
