//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class HDAWDHealthKitAchievementStatistics, HDAWDHealthKitConcurrentCalendarItem, HDAWDHealthKitUserCharacteristics;

@interface HDAWDHealthKitWristOnSettings : PBCodable <NSCopying>
{
    long long _daysSinceFirstCalorieGoal;
    long long _eventBusyTime;
    long long _numberOfEvents;
    long long _progressUpdateFrequency;
    long long _timeZoneOffset;
    NSUInteger _timestamp;
    HDAWDHealthKitAchievementStatistics *_achievementStatistics;
    HDAWDHealthKitConcurrentCalendarItem *_firstCalendarItemOfDay;
    HDAWDHealthKitUserCharacteristics *_userCharacteristics;
    BOOL _enableAchievements;
    BOOL _enableGoalCompletions;
    BOOL _enableStandReminders;
    BOOL _enableWeeklySummary;
    BOOL _wellnessComplicationOnWatchFace;
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

@property(retain, nonatomic) HDAWDHealthKitConcurrentCalendarItem *firstCalendarItemOfDay; // @synthesize firstCalendarItemOfDay=_firstCalendarItemOfDay;
@property(nonatomic) BOOL wellnessComplicationOnWatchFace; // @synthesize wellnessComplicationOnWatchFace=_wellnessComplicationOnWatchFace;
@property(retain, nonatomic) HDAWDHealthKitAchievementStatistics *achievementStatistics; // @synthesize achievementStatistics=_achievementStatistics;
@property(retain, nonatomic) HDAWDHealthKitUserCharacteristics *userCharacteristics; // @synthesize userCharacteristics=_userCharacteristics;
@property(nonatomic) long long daysSinceFirstCalorieGoal; // @synthesize daysSinceFirstCalorieGoal=_daysSinceFirstCalorieGoal;
@property(nonatomic) long long eventBusyTime; // @synthesize eventBusyTime=_eventBusyTime;
@property(nonatomic) long long numberOfEvents; // @synthesize numberOfEvents=_numberOfEvents;
@property(nonatomic) long long timeZoneOffset; // @synthesize timeZoneOffset=_timeZoneOffset;
@property(nonatomic) BOOL enableWeeklySummary; // @synthesize enableWeeklySummary=_enableWeeklySummary;
@property(nonatomic) BOOL enableAchievements; // @synthesize enableAchievements=_enableAchievements;
@property(nonatomic) BOOL enableGoalCompletions; // @synthesize enableGoalCompletions=_enableGoalCompletions;
@property(nonatomic) long long progressUpdateFrequency; // @synthesize progressUpdateFrequency=_progressUpdateFrequency;
@property(nonatomic) BOOL enableStandReminders; // @synthesize enableStandReminders=_enableStandReminders;
@property(nonatomic) NSUInteger timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasFirstCalendarItemOfDay;
@property(nonatomic) BOOL hasWellnessComplicationOnWatchFace;
@property(readonly, nonatomic) BOOL hasAchievementStatistics;
@property(readonly, nonatomic) BOOL hasUserCharacteristics;
@property(nonatomic) BOOL hasDaysSinceFirstCalorieGoal;
@property(nonatomic) BOOL hasEventBusyTime;
@property(nonatomic) BOOL hasNumberOfEvents;
@property(nonatomic) BOOL hasTimeZoneOffset;
@property(nonatomic) BOOL hasEnableWeeklySummary;
@property(nonatomic) BOOL hasEnableAchievements;
@property(nonatomic) BOOL hasEnableGoalCompletions;
@property(nonatomic) BOOL hasProgressUpdateFrequency;
@property(nonatomic) BOOL hasEnableStandReminders;
@property(nonatomic) BOOL hasTimestamp;

@end
