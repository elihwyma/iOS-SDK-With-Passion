/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMWorkout.h>

@interface CMSwimWorkout : CMWorkout

{
    long long fLocation;
    double fPoolLength;
}

@property (nonatomic, readonly) long long location;
@property (nonatomic, readonly) double poolLength;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isAvailable;
+ (id)swimLocationName:(long long)arg1;
+ (id)swimWorkoutInstance:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (id)initWithSessionId:(id)arg1 location:(long long)arg2 poolLength:(double)arg3;
- (id)initWithSessionId:(id)arg1 locationType:(long long)arg2 poolLength:(double)arg3;

@end
