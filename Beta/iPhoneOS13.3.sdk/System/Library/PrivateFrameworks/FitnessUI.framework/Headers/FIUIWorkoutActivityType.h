/*
 Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

#import <Foundation/NSObject.h>

@class HKQuantity, NSDictionary, NSString;

@interface FIUIWorkoutActivityType : NSObject

{
    _Bool _isIndoor;
    unsigned long long _identifier;
    unsigned long long _auxiliaryTypeIdentifier;
    NSDictionary *_metadata;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) unsigned long long auxiliaryTypeIdentifier;
@property (nonatomic, readonly) unsigned long long effectiveTypeIdentifier;
@property (nonatomic, readonly) _Bool isIndoor;
@property (nonatomic, readonly) _Bool isCategorizedOtherWorkout;
@property (nonatomic, readonly) NSDictionary *metadata;
@property (nonatomic, readonly) long long swimmingLocationType;
@property (nonatomic, readonly) HKQuantity *lapLength;
@property (nonatomic, readonly) _Bool isWaterLockActivity;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2 metadata:(id)arg3;
+ (id)activityTypeWithHKWorkoutActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
+ (id)wheelchairActivityTypes;
+ (id)swimmingOptimizedActivityTypes;
+ (id)swimmingOtherActivityTypes;
+ (_Bool)shouldDisambiguateOnLocationType:(unsigned long long)arg1;
+ (id)optimizedActivityTypesWithIsWheelchairUser:(_Bool)arg1 isSwimmingSupported:(_Bool)arg2;
+ (id)activityTypeWithWorkout:(id)arg1;
+ (id)defaultActivityTypesWithIsWheelchairUser:(_Bool)arg1 isSwimmingSupported:(_Bool)arg2;
+ (id)unsupportedActivityTypesWithIsWheelchairUser:(_Bool)arg1 isSwimmingSupported:(_Bool)arg2;
+ (id)possibleActivityTypesForIdentifier:(unsigned long long)arg1 locationType:(long long)arg2 swimmingLocationType:(long long)arg3 wheelchairUser:(_Bool)arg4;
+ (unsigned long long)mapWheelchairUserActivityType:(unsigned long long)arg1 isWheelchairUser:(_Bool)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2 metadata:(id)arg3;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2 metadata:(id)arg3 auxiliaryTypeIdentifier:(unsigned long long)arg4;
- (id)initWithActivityTypeIdentifier:(unsigned long long)arg1 isIndoor:(_Bool)arg2;
- (id)localizedNameComponents;
- (id)activityTypeByAddingLapLength:(double)arg1;
- (_Bool)hasLocationTypePool;
- (id)activityTypePlistKey;

@end
