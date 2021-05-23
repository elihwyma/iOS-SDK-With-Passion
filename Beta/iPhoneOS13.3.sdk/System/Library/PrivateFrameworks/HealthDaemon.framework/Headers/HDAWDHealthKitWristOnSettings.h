/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDAWDHealthKitAchievementStatistics, HDAWDHealthKitConcurrentCalendarItem, HDAWDHealthKitUserCharacteristics;

@interface HDAWDHealthKitWristOnSettings : PBCodable <Swift>

{
    long long _daysSinceFirstCalorieGoal;
    long long _eventBusyTime;
    long long _numberOfEvents;
    long long _progressUpdateFrequency;
    long long _timeZoneOffset;
    unsigned long long _timestamp;
    HDAWDHealthKitAchievementStatistics *_achievementStatistics;
    HDAWDHealthKitConcurrentCalendarItem *_firstCalendarItemOfDay;
    HDAWDHealthKitUserCharacteristics *_userCharacteristics;
    _Bool _enableAchievements;
    _Bool _enableGoalCompletions;
    _Bool _enableStandReminders;
    _Bool _enableWeeklySummary;
    _Bool _wellnessComplicationOnWatchFace;
    struct {
        unsigned int daysSinceFirstCalorieGoal:1;
        unsigned int eventBusyTime:1;
        unsigned int numberOfEvents:1;
        unsigned int progressUpdateFrequency:1;
        unsigned int timeZoneOffset:1;
        unsigned int timestamp:1;
        unsigned int enableAchievements:1;
        unsigned int enableGoalCompletions:1;
        unsigned int enableStandReminders:1;
        unsigned int enableWeeklySummary:1;
        unsigned int wellnessComplicationOnWatchFace:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasEnableStandReminders;
@property (nonatomic) _Bool enableStandReminders;
@property (nonatomic) _Bool hasProgressUpdateFrequency;
@property (nonatomic) long long progressUpdateFrequency;
@property (nonatomic) _Bool hasEnableGoalCompletions;
@property (nonatomic) _Bool enableGoalCompletions;
@property (nonatomic) _Bool hasEnableAchievements;
@property (nonatomic) _Bool enableAchievements;
@property (nonatomic) _Bool hasEnableWeeklySummary;
@property (nonatomic) _Bool enableWeeklySummary;
@property (nonatomic) _Bool hasTimeZoneOffset;
@property (nonatomic) long long timeZoneOffset;
@property (nonatomic) _Bool hasNumberOfEvents;
@property (nonatomic) long long numberOfEvents;
@property (nonatomic) _Bool hasEventBusyTime;
@property (nonatomic) long long eventBusyTime;
@property (nonatomic) _Bool hasDaysSinceFirstCalorieGoal;
@property (nonatomic) long long daysSinceFirstCalorieGoal;
@property (nonatomic, readonly) _Bool hasUserCharacteristics;
@property (retain, nonatomic) HDAWDHealthKitUserCharacteristics *userCharacteristics;
@property (nonatomic, readonly) _Bool hasAchievementStatistics;
@property (retain, nonatomic) HDAWDHealthKitAchievementStatistics *achievementStatistics;
@property (nonatomic) _Bool hasWellnessComplicationOnWatchFace;
@property (nonatomic) _Bool wellnessComplicationOnWatchFace;
@property (nonatomic, readonly) _Bool hasFirstCalendarItemOfDay;
@property (retain, nonatomic) HDAWDHealthKitConcurrentCalendarItem *firstCalendarItemOfDay;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
