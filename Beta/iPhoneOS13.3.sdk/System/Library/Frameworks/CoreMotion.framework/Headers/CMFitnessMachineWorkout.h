/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMWorkout.h>

@class NSString;

@interface CMFitnessMachineWorkout : CMWorkout

{
    NSString *fManufacturerName;
    NSString *fModel;
}

@property (nonatomic, readonly) NSString *manufacturerName;
@property (nonatomic, readonly) NSString *model;

+ (_Bool)supportsSecureCoding;
+ (_Bool)isAvailable;
+ (id)fitnessMachineWorkoutInstance:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 workoutType:(long long)arg2 manufacturerName:(id)arg3 model:(id)arg4;

@end
