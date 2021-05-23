/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <Foundation/NSObject.h>

@class HKActivitySummaryDataProvider, NSString, WDProfile;

__attribute__((visibility("hidden")))
@interface WDActivityQueryTestController : NSObject

{
    WDProfile *_profile;
    HKActivitySummaryDataProvider *_provider;
}

@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) HKActivitySummaryDataProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithProfile:(id)arg1;
- (void)runTest;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)arg1;
- (id)_stringForDateComponents:(id)arg1;
- (id)_quantityValue:(id)arg1 title:(id)arg2;
- (void)_logActivitySummary:(id)arg1 calendar:(id)arg2;
- (id)_buildActivitySummaryFromDate:(id)arg1 calendar:(id)arg2 moveQuantity:(id)arg3 exerciseQuantity:(id)arg4 standQuantity:(id)arg5;
- (id)_summariesFromStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3 moveData:(id)arg4 exerciseData:(id)arg5 standData:(id)arg6;
- (id)_dateDaysAgo:(id)arg1;
- (void)_logTrialQuery;
- (void)_logDataFromTimeScope:(long long)arg1 title:(id)arg2;
- (void)_logDataFromAllTimeScopes;
- (id)_stringForDate:(id)arg1;
- (void)_hourlyActivityDataForStartDate:(id)arg1 endDate:(id)arg2 healthStore:(id)arg3 calendar:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end
