/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class HKQuantity, NSUUID;

@interface HKWorkoutConfiguration : NSObject <Swift>

{
    unsigned long long _activityType;
    long long _locationType;
    long long _swimmingLocationType;
    HKQuantity *_lapLength;
    NSUUID *_fitnessMachineSessionUUID;
    NSUUID *_predictionSessionUUID;
}

@property (retain, nonatomic) NSUUID *fitnessMachineSessionUUID;
@property (retain, nonatomic) NSUUID *predictionSessionUUID;
@property unsigned long long activityType;
@property long long locationType;
@property long long swimmingLocationType;
@property (copy) HKQuantity *lapLength;

+ (_Bool)supportsSecureCoding;
+ (id)_workoutConfigurationFromDictionary:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (_Bool)validateAndReturnError:(id *)arg1;

@end
