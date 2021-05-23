/*
 Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

#import <NSDateComponents.h>

@interface NSDateComponents (WFAdditions)

+ (id)wf_nowDateComponents;
+ (id)wf_weatherDataClosestToDate:(id)arg1 inArray:(id)arg2;
+ (long long)wf_minutesBetweenDateComponents:(id)arg1 andComponents:(id)arg2;
+ (_Bool)wf_isSameDayWithComponents:(id)arg1 andComponents:(id)arg2;
+ (id)wf_weatherDatasOnDate:(id)arg1 inArray:(id)arg2;
+ (id)wf_weatherDataOnDate:(id)arg1 inArray:(id)arg2;

- (id)wf_componentsWithoutTimeZone;
- (long long)wf_minutesFromNow;
- (long long)wf_minutesDifferenceFromDate:(id)arg1;
- (_Bool)wf_componentsAreTimeless;
- (long long)wf_dateComponentsCompare:(id)arg1;

@end
