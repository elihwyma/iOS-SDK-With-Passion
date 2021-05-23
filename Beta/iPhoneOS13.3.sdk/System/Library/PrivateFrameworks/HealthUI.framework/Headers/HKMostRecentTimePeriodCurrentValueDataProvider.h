/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKValueDataProvider.h>

@interface HKMostRecentTimePeriodCurrentValueDataProvider : HKValueDataProvider

- (id)currentValue;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_queryDateRangeFromSampleDate:(id)arg1;
- (void)_totalDurationFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
