/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class HKWorkoutRoute;

__attribute__((visibility("hidden")))
@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration

{
    HKWorkoutRoute *_workoutRoute;
}

@property (retain, nonatomic) HKWorkoutRoute *workoutRoute;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
