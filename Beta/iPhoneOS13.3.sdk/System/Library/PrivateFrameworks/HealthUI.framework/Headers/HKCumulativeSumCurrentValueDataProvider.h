/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKValueDataProvider.h>

@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider

- (id)currentValue;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sumFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
