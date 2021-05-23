/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSUUID;

@interface _HKWorkoutBuilderSampleQueryConfiguration : HKQueryServerConfiguration

{
    _Bool _needsHistoricalData;
    NSUUID *_workoutBuilderIdentifier;
}

@property (nonatomic) _Bool needsHistoricalData;
@property (copy, nonatomic) NSUUID *workoutBuilderIdentifier;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
