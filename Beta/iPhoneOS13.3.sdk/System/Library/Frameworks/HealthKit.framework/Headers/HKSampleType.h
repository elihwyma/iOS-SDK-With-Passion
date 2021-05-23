/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/HKObjectType.h>

@interface HKSampleType : HKObjectType

@property (nonatomic, readonly) _Bool isMaximumDurationRestricted;
@property (nonatomic, readonly) double maximumAllowedDuration;
@property (nonatomic, readonly) _Bool isMinimumDurationRestricted;
@property (nonatomic, readonly) double minimumAllowedDuration;

+ (id)medicalRecordTypes;

- (id)_earliestAllowedStartDateForSampleOverlappingDate:(id)arg1;
- (_Bool)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id *)arg3;
- (double)_maximumAllowedDuration;
- (double)_minimumAllowedDuration;

@end
