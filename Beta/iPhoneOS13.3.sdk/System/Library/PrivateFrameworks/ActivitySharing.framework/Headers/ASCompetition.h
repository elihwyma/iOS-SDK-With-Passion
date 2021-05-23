/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSDateComponents, NSUUID;

@interface ASCompetition : NSObject

{
    NSUUID *_UUID;
    long long _currentCacheIndex;
    long long _lastPushedCacheIndex;
    NSArray *_scores;
    NSArray *_opponentScores;
    NSDateComponents *_startDateComponents;
    NSDateComponents *_durationDateComponents;
    NSArray *_preferredVictoryBadgeStyles;
    unsigned long long _maximumNumberOfPointsPerDay;
    NSDate *_currentDateOverride;
}

@property (retain, nonatomic) NSUUID *UUID;
@property (nonatomic) long long currentCacheIndex;
@property (nonatomic) long long lastPushedCacheIndex;
@property (retain, nonatomic) NSArray *scores;
@property (retain, nonatomic) NSArray *opponentScores;
@property (retain, nonatomic) NSDateComponents *startDateComponents;
@property (retain, nonatomic) NSDateComponents *durationDateComponents;
@property (retain, nonatomic) NSArray *preferredVictoryBadgeStyles;
@property (nonatomic) unsigned long long maximumNumberOfPointsPerDay;
@property (nonatomic, readonly) _Bool isDailyScoreCapped;
@property (nonatomic, readonly) unsigned int victoryBadgeStyle;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *lastDayOfCompetition;
@property (nonatomic, readonly) _Bool isFirstDayOfCompetition;
@property (nonatomic, readonly) _Bool isLastDayOfCompetition;
@property (nonatomic, readonly) long long endDateCacheIndex;
@property (nonatomic, readonly) unsigned long long numberOfDaysRemaining;
@property (nonatomic, readonly) unsigned long long myTotalScore;
@property (nonatomic, readonly) unsigned long long myDailyAverageScore;
@property (nonatomic, readonly) unsigned long long opponentTotalScore;
@property (nonatomic, readonly) unsigned long long opponentDailyAverageScore;
@property (nonatomic, readonly) _Bool isScoreTied;
@property (nonatomic, readonly) long long stage;
@property (nonatomic, readonly) _Bool hasCalculatedFinalScore;
@property (nonatomic, readonly) _Bool hasPushedFinalScore;
@property (retain, nonatomic) NSDate *currentDateOverride;

+ (id)competitionWithCodableCompetition:(id)arg1;
+ (id)codableDatabaseCompetitionsFromCompetitions:(id)arg1 withFriendWithUUID:(id)arg2 withType:(long long)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)currentDate;
- (id)codableCompetition;
- (_Bool)isEqualToCompetition:(id)arg1;
- (id)_scoresForParticipant:(long long)arg1;
- (unsigned long long)dailyScoreForParticipant:(long long)arg1 onDate:(id)arg2;
- (id)daysWonByParticipant:(long long)arg1;
- (_Bool)isParticipantWinning:(long long)arg1;

@end
