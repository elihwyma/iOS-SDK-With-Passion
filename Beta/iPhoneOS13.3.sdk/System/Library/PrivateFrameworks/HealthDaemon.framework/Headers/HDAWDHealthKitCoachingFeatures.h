/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDAWDHealthKitCoachingFeatures : PBCodable <Swift>

{
    unsigned int _activeCalories;
    unsigned int _automotive;
    unsigned int _briskMinutes;
    unsigned int _cycling;
    unsigned int _duration;
    unsigned int _heartRate;
    unsigned int _other;
    unsigned int _running;
    unsigned int _unknown;
    unsigned int _walking;
    unsigned int _workout;
    struct {
        unsigned int activeCalories:1;
        unsigned int automotive:1;
        unsigned int briskMinutes:1;
        unsigned int cycling:1;
        unsigned int duration:1;
        unsigned int heartRate:1;
        unsigned int other:1;
        unsigned int running:1;
        unsigned int unknown:1;
        unsigned int walking:1;
        unsigned int workout:1;
    } _has;
}

@property (nonatomic) _Bool hasWalking;
@property (nonatomic) unsigned int walking;
@property (nonatomic) _Bool hasAutomotive;
@property (nonatomic) unsigned int automotive;
@property (nonatomic) _Bool hasCycling;
@property (nonatomic) unsigned int cycling;
@property (nonatomic) _Bool hasRunning;
@property (nonatomic) unsigned int running;
@property (nonatomic) _Bool hasOther;
@property (nonatomic) unsigned int other;
@property (nonatomic) _Bool hasWorkout;
@property (nonatomic) unsigned int workout;
@property (nonatomic) _Bool hasHeartRate;
@property (nonatomic) unsigned int heartRate;
@property (nonatomic) _Bool hasActiveCalories;
@property (nonatomic) unsigned int activeCalories;
@property (nonatomic) _Bool hasBriskMinutes;
@property (nonatomic) unsigned int briskMinutes;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) _Bool hasUnknown;
@property (nonatomic) unsigned int unknown;

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
