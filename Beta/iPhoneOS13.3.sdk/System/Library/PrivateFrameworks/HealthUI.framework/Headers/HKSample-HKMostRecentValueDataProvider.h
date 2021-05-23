/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKSample.h>

@class NSDictionary;

@interface HKSample (HKMostRecentValueDataProvider)

@property (nonatomic, readonly) NSDictionary *metadata;

- (id)dataProviderValue;
- (id)hk_additionalMetadataSectionsWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;
- (id)dataForSharingWithHealthStore:(id)arg1;
- (void)fetchSubSampleTypesWithHealthStore:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)detailedReportName;
- (id)fixedAggregateValuesWithDisplayTypeController:(id)arg1 unitController:(id)arg2;
- (id)subSamplePredicate;
- (id)subSampleSectionTitle;
- (void)addDetailValuesToSection:(id)arg1;

@end
