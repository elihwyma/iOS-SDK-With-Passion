/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/_HKFilter.h>

@class NSUUID;

@interface _HKWorkoutFilter : _HKFilter

{
    NSUUID *_workoutUUID;
}

@property (nonatomic, readonly) NSUUID *workoutUUID;

+ (_Bool)supportsSecureCoding;
+ (id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned long long)arg2 value:(id)arg3 dataTypes:(id)arg4;
+ (id)filterWithWorkoutUUID:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)acceptsDataObject:(id)arg1;

@end
