/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

__attribute__((visibility("hidden")))
@interface _HKHourlyActivitySummary : HKActivitySummary

{
    NSDateComponents *_hourlyDateComponents;
}

@property (retain, nonatomic) NSDateComponents *hourlyDateComponents;

- (id)dateComponentsForCalendar:(id)arg1;

@end
