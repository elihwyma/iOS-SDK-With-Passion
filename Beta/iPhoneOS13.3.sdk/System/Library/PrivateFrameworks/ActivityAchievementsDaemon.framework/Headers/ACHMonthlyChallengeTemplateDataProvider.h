/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHAchievementStore, ACHActivitySummaryUtility, HDProfile, NSCalendar, NSDate;

@interface ACHMonthlyChallengeTemplateDataProvider : NSObject

{
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
    ACHAchievementStore *_achievementStore;
    HDProfile *_profile;
    ACHActivitySummaryUtility *_activitySummaryUtility;
    NSCalendar *_currentCalendar;
    NSDate *_currentDate;
}

@property (weak, nonatomic) ACHAchievementStore *achievementStore;
@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHActivitySummaryUtility *activitySummaryUtility;
@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (retain, nonatomic) NSDate *currentDate;

- (_Bool)isWheelchairUser;
- (void)setCurrentDateOverride:(id)arg1;
- (_Bool)isDate:(id)arg1 betweenStartDate:(id)arg2 andEndDate:(id)arg3;
- (id)existingMonthlyChallengeTemplates;
- (unsigned long long)monthlyChallengeTypeForMonth:(id)arg1;
- (id)initWithProfile:(id)arg1 achievementStore:(id)arg2 activitySummaryUtility:(id)arg3;
- (long long)numberOfEarnedInstancesOfTemplateWithUniqueName:(id)arg1 inDateComponentInterval:(id)arg2 withCalendar:(id)arg3;
- (_Bool)monthlyChallengeExistsForMonth:(id)arg1;
- (_Bool)hasMinimumActiveDays;
- (void)setCurrentCalendarOverride:(id)arg1;

@end
