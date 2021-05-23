/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableActivityCache : PBCodable <Swift>

{
    double _activeHours;
    double _activeHoursGoal;
    double _briskMinutes;
    double _briskMinutesGoal;
    long long _cacheIndex;
    double _deepBreathingDuration;
    double _energyBurned;
    double _energyBurnedGoal;
    double _energyBurnedGoalDate;
    long long _flightsClimbed;
    long long _pushCount;
    long long _sequence;
    long long _stepCount;
    double _walkingAndRunningDistance;
    long long _wheelchairUse;
    NSMutableArray *_dailyBriskMinutesStatistics;
    NSMutableArray *_dailyEnergyBurnedStatistics;
    HDCodableSample *_sample;
    struct {
        unsigned int activeHours:1;
        unsigned int activeHoursGoal:1;
        unsigned int briskMinutes:1;
        unsigned int briskMinutesGoal:1;
        unsigned int cacheIndex:1;
        unsigned int deepBreathingDuration:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int energyBurnedGoalDate:1;
        unsigned int flightsClimbed:1;
        unsigned int pushCount:1;
        unsigned int sequence:1;
        unsigned int stepCount:1;
        unsigned int walkingAndRunningDistance:1;
        unsigned int wheelchairUse:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) _Bool hasCacheIndex;
@property (nonatomic) long long cacheIndex;
@property (nonatomic) _Bool hasEnergyBurned;
@property (nonatomic) double energyBurned;
@property (nonatomic) _Bool hasBriskMinutes;
@property (nonatomic) double briskMinutes;
@property (nonatomic) _Bool hasActiveHours;
@property (nonatomic) double activeHours;
@property (nonatomic) _Bool hasStepCount;
@property (nonatomic) long long stepCount;
@property (nonatomic) _Bool hasEnergyBurnedGoal;
@property (nonatomic) double energyBurnedGoal;
@property (nonatomic) _Bool hasWalkingAndRunningDistance;
@property (nonatomic) double walkingAndRunningDistance;
@property (nonatomic) _Bool hasEnergyBurnedGoalDate;
@property (nonatomic) double energyBurnedGoalDate;
@property (nonatomic) _Bool hasDeepBreathingDuration;
@property (nonatomic) double deepBreathingDuration;
@property (nonatomic) _Bool hasPushCount;
@property (nonatomic) long long pushCount;
@property (nonatomic) _Bool hasFlightsClimbed;
@property (nonatomic) long long flightsClimbed;
@property (nonatomic) _Bool hasWheelchairUse;
@property (nonatomic) long long wheelchairUse;
@property (retain, nonatomic) NSMutableArray *dailyEnergyBurnedStatistics;
@property (retain, nonatomic) NSMutableArray *dailyBriskMinutesStatistics;
@property (nonatomic) _Bool hasSequence;
@property (nonatomic) long long sequence;
@property (nonatomic) _Bool hasBriskMinutesGoal;
@property (nonatomic) double briskMinutesGoal;
@property (nonatomic) _Bool hasActiveHoursGoal;
@property (nonatomic) double activeHoursGoal;

+ (Class)dailyEnergyBurnedStatisticsType;
+ (Class)dailyBriskMinutesStatisticsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)applyToObject:(id)arg1;
- (void)addDailyEnergyBurnedStatistics:(id)arg1;
- (void)addDailyBriskMinutesStatistics:(id)arg1;
- (id)decodedEnergyBurnedQuantity;
- (id)decodedWalkingAndRunningDistanceQuantity;
- (id)decodedEnergyBurnedGoalQuantity;
- (id)_decodeCodableActivityStatisticsQuantityInfos:(id)arg1;
- (unsigned long long)dailyEnergyBurnedStatisticsCount;
- (void)clearDailyEnergyBurnedStatistics;
- (id)dailyEnergyBurnedStatisticsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dailyBriskMinutesStatisticsCount;
- (void)clearDailyBriskMinutesStatistics;
- (id)dailyBriskMinutesStatisticsAtIndex:(unsigned long long)arg1;

@end
