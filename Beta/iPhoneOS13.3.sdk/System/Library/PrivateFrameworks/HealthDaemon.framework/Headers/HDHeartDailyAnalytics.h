/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface HDHeartDailyAnalytics : NSObject

{
    NSMutableDictionary *_payload;
}

- (id)init;
- (void)submit;
- (void)updateIrregularRhythmNotificationClassificationCount:(long long)arg1;
- (void)updateIsImproveHealthAndActivityAllowed:(_Bool)arg1;
- (void)updateElectrocardiogramClassificationCount:(long long)arg1;
- (void)updateIsEcgOnboarded:(_Bool)arg1;
- (void)updateWeeksSinceElectrocardiogramOnboardedWithFirstOnboardingCompletedDate:(id)arg1;
- (void)updateWithElectrocardiogramClassifications:(id)arg1;
- (id)_weeksBetweenStartDate:(id)arg1 endDate:(id)arg2;
- (id)_ecgClassificationWithin24HoursPostIRNKeyFromClassification:(unsigned long long)arg1;

@end
