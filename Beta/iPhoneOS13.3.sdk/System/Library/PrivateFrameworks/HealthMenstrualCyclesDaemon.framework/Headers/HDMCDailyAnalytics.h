/*
 Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon
 */

#import <Foundation/NSObject.h>

@class HDKeyValueDomain, HDProfile, HKMCAnalysis;

__attribute__((visibility("hidden")))
@interface HDMCDailyAnalytics : NSObject

{
    HDProfile *_profile;
    HKMCAnalysis *_analysis;
    HDKeyValueDomain *_keyValueDomain;
}

+ (_Bool)shouldSubmit;

- (_Bool)_collectDiagnosticFieldsForMetric:(id)arg1 gregorianCalendar:(id)arg2 error:(id *)arg3;
- (_Bool)_collectSensitiveFieldsForMetric:(id)arg1 gregorianCalendar:(id)arg2 error:(id *)arg3;
- (id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
- (id)_yearsBetweenStartDateComponents:(id)arg1 endDate:(id)arg2 calendar:(id)arg3;
- (id)initWithProfile:(id)arg1 analysis:(id)arg2;
- (_Bool)submitMetricWithError:(id *)arg1;

@end
