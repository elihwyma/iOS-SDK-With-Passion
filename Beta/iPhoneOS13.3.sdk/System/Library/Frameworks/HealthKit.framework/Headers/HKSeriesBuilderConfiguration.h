/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, NSUUID;

@interface HKSeriesBuilderConfiguration : HKTaskConfiguration

{
    HKDevice *_device;
    NSUUID *_workoutBuilderID;
}

@property (copy, nonatomic, readonly) HKDevice *device;
@property (copy, nonatomic, readonly) NSUUID *workoutBuilderID;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 workoutBuilderID:(id)arg2;

@end
