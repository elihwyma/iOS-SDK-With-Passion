/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

#import <ActionKit/Swift-Protocol.h>

@class HKUnit, HKWorkout, NSString;

@interface WFHKWorkoutContainer : NSObject <Swift>

{
    HKWorkout *_workout;
    HKUnit *_distanceUnit;
    HKUnit *_caloriesUnit;
}

@property (retain, nonatomic) HKWorkout *workout;
@property (retain, nonatomic) HKUnit *distanceUnit;
@property (retain, nonatomic) HKUnit *caloriesUnit;
@property (nonatomic, readonly) double caloriesValue;
@property (nonatomic, readonly) double distanceValue;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkout:(id)arg1;
- (id)initWithWorkout:(id)arg1 distanceUnit:(id)arg2 caloriesUnit:(id)arg3;

@end
