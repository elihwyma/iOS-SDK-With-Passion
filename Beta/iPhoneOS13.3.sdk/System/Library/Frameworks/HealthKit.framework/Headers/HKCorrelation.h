/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKSample.h>

@class HKCorrelationType, NSMutableDictionary, NSSet, NSUUID;

@interface HKCorrelation : HKSample

{
    NSMutableDictionary *_objects;
}

@property (readonly, getter=_UUID) NSUUID *UUID;
@property (readonly) HKCorrelationType *correlationType;
@property (copy, readonly) NSSet *objects;

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 device:(id)arg5 metadata:(id)arg6;
+ (_Bool)_allowEmptyCorrelations;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4;
+ (id)correlationWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 objects:(id)arg4 metadata:(id)arg5;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)_allTypes;
- (id)_validateConfigurationWithOptions:(unsigned long long)arg1;
- (void)_addCorrelatedObjects:(id)arg1;
- (void)_addCorrelatedObject:(id)arg1;
- (_Bool)_containsObjects;
- (id)objectsForType:(id)arg1;
- (void)_filterCorrelatedObjectsWithFilterDictionary:(id)arg1;
- (_Bool)_correlatedObjectsMatchFilterDictionary:(id)arg1;
- (void)_removeAllCorrelatedObjects;

@end
