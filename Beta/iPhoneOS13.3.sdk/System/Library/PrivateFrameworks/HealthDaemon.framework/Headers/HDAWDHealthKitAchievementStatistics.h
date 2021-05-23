/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitAchievementStatistics : PBCodable <Swift>

{
    long long _consecutiveBriskMinuteGoalsMet;
    long long _consecutiveCompleteDays;
    long long _consecutiveStandingHoursGoalsMet;
    long long _currentCalorieGoalConsecutiveCompleteDays;
    struct {
        unsigned int consecutiveBriskMinuteGoalsMet:1;
        unsigned int consecutiveCompleteDays:1;
        unsigned int consecutiveStandingHoursGoalsMet:1;
        unsigned int currentCalorieGoalConsecutiveCompleteDays:1;
    } _has;
}

@property (nonatomic) _Bool hasConsecutiveStandingHoursGoalsMet;
@property (nonatomic) long long consecutiveStandingHoursGoalsMet;
@property (nonatomic) _Bool hasConsecutiveBriskMinuteGoalsMet;
@property (nonatomic) long long consecutiveBriskMinuteGoalsMet;
@property (nonatomic) _Bool hasCurrentCalorieGoalConsecutiveCompleteDays;
@property (nonatomic) long long currentCalorieGoalConsecutiveCompleteDays;
@property (nonatomic) _Bool hasConsecutiveCompleteDays;
@property (nonatomic) long long consecutiveCompleteDays;

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
