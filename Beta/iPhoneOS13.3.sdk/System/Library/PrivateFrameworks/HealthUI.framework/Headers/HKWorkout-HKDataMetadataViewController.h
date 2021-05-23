/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKWorkout.h>

@interface HKWorkout (HKDataMetadataViewController)

+ (id)hkui_localizedWorkoutStringForValue:(id)arg1;

- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)hkui_localizedActivityTypeName;
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;
- (id)subSamplePredicate;
- (id)subSampleSectionTitle;
- (id)hk_defaultDistanceQuantityType;
- (void)addDetailValuesToSection:(id)arg1;

@end
