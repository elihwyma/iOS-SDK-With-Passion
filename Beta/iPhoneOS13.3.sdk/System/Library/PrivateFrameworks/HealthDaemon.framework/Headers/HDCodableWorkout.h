/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@class HDCodableSample, NSMutableArray, NSString;

@interface HDCodableWorkout : PBCodable <Swift>

{
    double _duration;
    double _goal;
    long long _goalType;
    double _totalBasalEnergyBurnedInCanonicalUnit;
    double _totalDistanceInCanonicalUnit;
    double _totalEnergyBurnedInCanonicalUnit;
    double _totalFlightsClimbedInCanonicalUnit;
    double _totalSwimmingStrokeCountInCanonicalUnit;
    long long _type;
    NSMutableArray *_events;
    HDCodableSample *_sample;
    struct {
        unsigned int duration:1;
        unsigned int goal:1;
        unsigned int goalType:1;
        unsigned int totalBasalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalDistanceInCanonicalUnit:1;
        unsigned int totalEnergyBurnedInCanonicalUnit:1;
        unsigned int totalFlightsClimbedInCanonicalUnit:1;
        unsigned int totalSwimmingStrokeCountInCanonicalUnit:1;
        unsigned int type:1;
    } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hasSample;
@property (retain, nonatomic) HDCodableSample *sample;
@property (nonatomic) _Bool hasType;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSMutableArray *events;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) _Bool hasTotalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalEnergyBurnedInCanonicalUnit;
@property (nonatomic) _Bool hasTotalDistanceInCanonicalUnit;
@property (nonatomic) double totalDistanceInCanonicalUnit;
@property (nonatomic) _Bool hasGoalType;
@property (nonatomic) long long goalType;
@property (nonatomic) _Bool hasGoal;
@property (nonatomic) double goal;
@property (nonatomic) _Bool hasTotalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) double totalBasalEnergyBurnedInCanonicalUnit;
@property (nonatomic) _Bool hasTotalSwimmingStrokeCountInCanonicalUnit;
@property (nonatomic) double totalSwimmingStrokeCountInCanonicalUnit;
@property (nonatomic) _Bool hasTotalFlightsClimbedInCanonicalUnit;
@property (nonatomic) double totalFlightsClimbedInCanonicalUnit;

+ (Class)eventsType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)addEvents:(id)arg1;
- (unsigned long long)eventsCount;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)arg1;
- (_Bool)applyToObject:(id)arg1;
- (id)decodedWorkoutEvents;
- (id)decodedTotalEnergyBurned;
- (id)decodedTotalBasalEnergyBurned;
- (id)decodedTotalDistance;
- (id)decodedTotalSwimmingStrokeCount;
- (id)decodedTotalFlightsClimbed;
- (unsigned long long)decodedGoalType;
- (id)decodedGoal;

@end
