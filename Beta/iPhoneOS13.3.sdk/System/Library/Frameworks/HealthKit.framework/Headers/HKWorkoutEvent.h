/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSDate, NSDateInterval, NSDictionary, NSError, NSUUID;

@interface HKWorkoutEvent : NSObject <Swift>

{
    long long _type;
    NSDateInterval *_dateInterval;
    NSDictionary *_metadata;
}

@property (readonly) long long type;
@property (copy, readonly) NSDate *date;
@property (copy, readonly) NSDateInterval *dateInterval;
@property (copy, readonly) NSDictionary *metadata;
@property (copy, nonatomic, readonly) NSUUID *sessionUUID;
@property (nonatomic, readonly) long long workoutEventType;
@property (copy, nonatomic, readonly) NSError *error;

+ (_Bool)supportsSecureCoding;
+ (id)_workoutEventWithInternalEvent:(id)arg1;
+ (id)_newWorkoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)_workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;
+ (id)_workoutEventWithType:(long long)arg1 dateInterval:(id)arg2 metadata:(id)arg3;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2;
+ (id)workoutEventWithType:(long long)arg1 date:(id)arg2 metadata:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)_validateConfiguration;
- (void)_assertPropertiesValid;
- (id)initWithWorkoutEventType:(long long)arg1 sessionUUID:(id)arg2 dateInterval:(id)arg3 metadata:(id)arg4 error:(id)arg5;

@end
