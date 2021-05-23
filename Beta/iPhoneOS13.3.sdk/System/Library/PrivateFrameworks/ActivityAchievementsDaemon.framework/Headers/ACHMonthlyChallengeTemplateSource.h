/*
 Image: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
 */

#import <NSObject.h>

@class ACHMonthlyChallengeDataSource, ACHMonthlyChallengeTemplateDataProvider, ACHSyncingMonthlyChallengeTemplateCache, NSCalendar, NSDate, NSString;

@protocol ACHTemplateSourceDelegate;

@interface ACHMonthlyChallengeTemplateSource : NSObject

{
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
    _Bool _isAppleWatch;
    NSCalendar *_currentCalendar;
    NSDate *_currentDate;
    ACHMonthlyChallengeDataSource *_dataSource;
    ACHMonthlyChallengeTemplateDataProvider *_templateDataProvider;
    ACHSyncingMonthlyChallengeTemplateCache *_templateCache;
}

@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (retain, nonatomic) NSDate *currentDate;
@property (retain, nonatomic) ACHMonthlyChallengeDataSource *dataSource;
@property (retain, nonatomic) ACHMonthlyChallengeTemplateDataProvider *templateDataProvider;
@property (retain, nonatomic) ACHSyncingMonthlyChallengeTemplateCache *templateCache;
@property (nonatomic) _Bool isAppleWatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long runCadence;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;

- (void)setCurrentDateOverride:(id)arg1;
- (_Bool)sourceShouldRunForDate:(id)arg1;
- (void)templatesForDate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)localizationBundleURLForTemplate:(id)arg1;
- (id)resourceBundleURLForTemplate:(id)arg1;
- (id)propertyListBundleURLForTemplate:(id)arg1;
- (id)stickerBundleURLForTemplate:(id)arg1;
- (void)templatesForDate:(id)arg1 databaseContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)customPlaceholderValuesForTemplate:(id)arg1;
- (id)_monthlyAchievementsAssetsDirectoryBasePath;
- (id)_modelsDirectoryBasePathForTemplate:(id)arg1;
- (id)_monthStringFromTemplateName:(id)arg1;
- (void)setCurrentCalendarOverride:(id)arg1;
- (id)_dateComponentIntervalForCurrentMonth;
- (_Bool)_createMonthlyChallengeWithMonthDateInterval:(id)arg1 monthlyChallengeTemplates:(id *)arg2 error:(id *)arg3;
- (void)_removeMonthlyChallengeTemplate:(id)arg1 monthlyChallengeTemplates:(id *)arg2 templatesToRemove:(id *)arg3;
- (_Bool)_shouldOverrideMonthlyChallengeCadence;
- (void)_didOverrideMonthlyChallengeCadence;
- (_Bool)_isInFirstWeekOfCurrentMonth:(id)arg1;
- (unsigned long long)_getRandomMonthlyChallengeType;
- (double)_goalValueForCurrentMonthForType:(unsigned long long)arg1;
- (id)_createMonthlyChallengeTemplateWithType:(unsigned long long)arg1 dateCompoonentInterval:(id)arg2 goalValue:(double)arg3;
- (id)_suffixForCurrentMonthForType:(unsigned long long)arg1 template:(id)arg2;
- (id)_dateComponentIntervalForLastMonth;
- (double)_targetGoalValueForCurrentMonthForType:(unsigned long long)arg1;
- (id)_maximumValueForMonthlyChallengeType:(unsigned long long)arg1;
- (_Bool)isGoalValueForMonthlyChallengeTypeValid:(unsigned long long)arg1;
- (_Bool)isMonthlyChallengeOfTypeAvailable:(unsigned long long)arg1;
- (id)_availableMonthlyChallengeTypes;
- (id)_dateComponentIntervalForTwoMonthsAgo;
- (double)_roundedGoalValue:(double)arg1 monthlyChallengeType:(unsigned long long)arg2;
- (id)possibleLocalizationSuffixesForTemplate:(id)arg1;
- (unsigned long long)_numberOfDaysInMonthForDate:(id)arg1;
- (id)initWithDataSource:(id)arg1 dataProvider:(id)arg2 templateCache:(id)arg3;
- (_Bool)subObjectsHaveDatabaseAssertions;

@end
