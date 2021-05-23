/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitActivityRingEvent : PBCodable <Swift>

{
    unsigned long long _eventTimestamp;
    unsigned long long _timestamp;
    unsigned int _activeSeconds;
    unsigned int _age;
    unsigned int _biologicalSex;
    unsigned int _briskMinutes;
    unsigned int _energyBurned;
    unsigned int _energyBurnedGoal;
    unsigned int _height;
    unsigned int _weight;
    struct {
        unsigned int eventTimestamp:1;
        unsigned int timestamp:1;
        unsigned int activeSeconds:1;
        unsigned int age:1;
        unsigned int biologicalSex:1;
        unsigned int briskMinutes:1;
        unsigned int energyBurned:1;
        unsigned int energyBurnedGoal:1;
        unsigned int height:1;
        unsigned int weight:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) _Bool hasEnergyBurned;
@property (nonatomic) unsigned int energyBurned;
@property (nonatomic) _Bool hasBriskMinutes;
@property (nonatomic) unsigned int briskMinutes;
@property (nonatomic) _Bool hasActiveSeconds;
@property (nonatomic) unsigned int activeSeconds;
@property (nonatomic) _Bool hasEnergyBurnedGoal;
@property (nonatomic) unsigned int energyBurnedGoal;
@property (nonatomic) _Bool hasEventTimestamp;
@property (nonatomic) unsigned long long eventTimestamp;
@property (nonatomic) _Bool hasBiologicalSex;
@property (nonatomic) unsigned int biologicalSex;
@property (nonatomic) _Bool hasHeight;
@property (nonatomic) unsigned int height;
@property (nonatomic) _Bool hasWeight;
@property (nonatomic) unsigned int weight;
@property (nonatomic) _Bool hasAge;
@property (nonatomic) unsigned int age;

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
