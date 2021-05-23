/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKValueDataProvider.h>

@interface HKSleepCurrentValueDataProvider : HKValueDataProvider

- (id)currentValue;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_queryDateRangeFromSampleDate:(id)arg1;
- (id)_currentSleepQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchQueryResultFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
