/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitWeeklySummaryDetail : PBCodable <Swift>

{
    long long _mostRecentGoal;
    long long _numTimesGoalAchieved;
    long long _selectedGoal;
    struct {
        unsigned int mostRecentGoal:1;
        unsigned int numTimesGoalAchieved:1;
        unsigned int selectedGoal:1;
    } _has;
}

@property (nonatomic) _Bool hasMostRecentGoal;
@property (nonatomic) long long mostRecentGoal;
@property (nonatomic) _Bool hasNumTimesGoalAchieved;
@property (nonatomic) long long numTimesGoalAchieved;
@property (nonatomic) _Bool hasSelectedGoal;
@property (nonatomic) long long selectedGoal;

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
