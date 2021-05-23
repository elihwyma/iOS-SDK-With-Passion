/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMWorkout.h>

@interface CMGenericWorkout : CMWorkout

{
    unsigned long long fWorkoutLabel;
}

@property (nonatomic, readonly) unsigned long long workoutLabel;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isAvailable;
+ (id)genericWorkoutInstance:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 workoutLabel:(unsigned long long)arg2;

@end
