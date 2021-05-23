/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKValueDataProvider.h>

@interface HKCountCurrentValueDataProvider : HKValueDataProvider

{
    long long _countStyle;
}

@property (nonatomic, readonly) long long countStyle;

- (id)currentValue;
- (id)fetchOperationWithCompletion:(CDUnknownBlockType)arg1;
- (id)_mostRecentValueQueryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dataProviderValueFromMostRecentSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_countAllSamplesQueryWithCompletion:(CDUnknownBlockType)arg1;
- (id)_dataProviderValueForCount:(id)arg1 sampleDate:(id)arg2;
- (void)_countFromDate:(id)arg1 toDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithHealthStore:(id)arg1 updateController:(id)arg2 dateCache:(id)arg3 displayType:(id)arg4 countStyle:(long long)arg5;

@end
