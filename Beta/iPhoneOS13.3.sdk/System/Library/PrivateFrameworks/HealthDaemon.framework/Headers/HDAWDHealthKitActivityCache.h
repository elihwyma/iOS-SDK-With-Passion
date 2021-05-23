/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitActivityCache : PBCodable <Swift>

{
    long long _activeHours;
    long long _briskMinutes;
    long long _cacheIndex;
    long long _endDate;
    long long _energyBurned;
    long long _energyBurnedGoal;
    long long _energyBurnedGoalDate;
    long long _startDate;
    long long _stepCount;
    long long _walkingAndRunningDistance;
    struct {
        unsigned int activeHours:1;
        unsigned int briskMinutes:1;
        unsigned int cacheIndex:1;
        unsigned int endDate:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int energyBurnedGoalDate:1;
        unsigned int startDate:1;
        unsigned int stepCount:1;
        unsigned int walkingAndRunningDistance:1;
    } _has;
}

@property (nonatomic) _Bool hasCacheIndex;
@property (nonatomic) long long cacheIndex;
@property (nonatomic) _Bool hasEnergyBurned;
@property (nonatomic) long long energyBurned;
@property (nonatomic) _Bool hasBriskMinutes;
@property (nonatomic) long long briskMinutes;
@property (nonatomic) _Bool hasActiveHours;
@property (nonatomic) long long activeHours;
@property (nonatomic) _Bool hasStepCount;
@property (nonatomic) long long stepCount;
@property (nonatomic) _Bool hasEnergyBurnedGoal;
@property (nonatomic) long long energyBurnedGoal;
@property (nonatomic) _Bool hasWalkingAndRunningDistance;
@property (nonatomic) long long walkingAndRunningDistance;
@property (nonatomic) _Bool hasEnergyBurnedGoalDate;
@property (nonatomic) long long energyBurnedGoalDate;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) long long startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) long long endDate;

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
