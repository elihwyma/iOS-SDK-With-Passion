/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class NSDate, NSUUID;

@interface CMWorkout : NSObject

{
    NSUUID *fSessionId;
    long long fType;
    long long fLocationType;
    NSDate *fStartDate;
    NSDate *fEndDate;
    _Bool fIsUserInitiated;
    _Bool _isUserInitiated;
}

@property (nonatomic, readonly) _Bool isUserInitiated;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long locationType;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isAvailable;
+ (id)workoutName:(long long)arg1;
+ (_Bool)workoutIsTypeWalking:(long long)arg1;
+ (_Bool)workoutIsTypeRunning:(long long)arg1;
+ (long long)workoutLocationTypeFromCMWorkoutType:(long long)arg1;
+ (id)workoutLocationName:(long long)arg1;
+ (int)CLMotionActivityTypeFromCMWorkoutType:(long long)arg1;
+ (long long)CMWorkoutTypeFromCLMotionActivityType:(int)arg1;
+ (long long)CMWorkoutLocationTypeFromCMSwimWorkoutLocation:(long long)arg1;
+ (long long)CMSwimWorkoutLocationFromCMWorkoutLocationType:(long long)arg1;
+ (_Bool)workoutIsTypePedestrian:(long long)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2 locationType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (void)setLocationType:(long long)arg1;
- (void)setIsUserInitiated:(_Bool)arg1;
- (void)setWorkoutType:(long long)arg1;

@end
