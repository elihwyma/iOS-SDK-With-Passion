/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKWorkoutEvent.h>

@class NSDictionary;

@interface HKWorkoutEvent (HKDataMetadataDetailSection)

@property (nonatomic, readonly) NSDictionary *metadata;

- (id)startDate;
- (void)addDetailValuesToSection:(id)arg1;

@end
