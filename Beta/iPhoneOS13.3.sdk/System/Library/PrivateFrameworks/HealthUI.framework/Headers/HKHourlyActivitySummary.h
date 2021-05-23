/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthKit/HKActivitySummary.h>

@class NSDateComponents;

@interface HKHourlyActivitySummary : HKActivitySummary

{
    NSDateComponents *_hourlyDateComponents;
}

@property (retain, nonatomic) NSDateComponents *hourlyDateComponents;

- (id)dateComponentsForCalendar:(id)arg1;
- (_Bool)_useHourlyGoalComparison;

@end
