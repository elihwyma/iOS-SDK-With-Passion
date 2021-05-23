/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface UtraFddStats : PBCodable

{
    unsigned long long _startTime;
    unsigned int _activeDuration;
    unsigned int _clkHighDuration;
    unsigned int _clkLowDuration;
    unsigned int _clkMedDuration;
    unsigned int _deepSleepCycleCount;
    unsigned int _deepSleepDuration;
    unsigned int _duration;
    unsigned int _lightSleepCycleCount;
    unsigned int _lightSleepDuration;
    unsigned int _voltHighDuration;
    unsigned int _voltLowDuration;
    unsigned int _voltMedDuration;
    struct {
        unsigned int startTime:1;
        unsigned int activeDuration:1;
        unsigned int clkHighDuration:1;
        unsigned int clkLowDuration:1;
        unsigned int clkMedDuration:1;
        unsigned int deepSleepCycleCount:1;
        unsigned int deepSleepDuration:1;
        unsigned int duration:1;
        unsigned int lightSleepCycleCount:1;
        unsigned int lightSleepDuration:1;
        unsigned int voltHighDuration:1;
        unsigned int voltLowDuration:1;
        unsigned int voltMedDuration:1;
    } _has;
}

@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) _Bool hasActiveDuration;
@property (nonatomic) unsigned int activeDuration;
@property (nonatomic) _Bool hasLightSleepDuration;
@property (nonatomic) unsigned int lightSleepDuration;
@property (nonatomic) _Bool hasDeepSleepDuration;
@property (nonatomic) unsigned int deepSleepDuration;
@property (nonatomic) _Bool hasLightSleepCycleCount;
@property (nonatomic) unsigned int lightSleepCycleCount;
@property (nonatomic) _Bool hasDeepSleepCycleCount;
@property (nonatomic) unsigned int deepSleepCycleCount;
@property (nonatomic) _Bool hasVoltLowDuration;
@property (nonatomic) unsigned int voltLowDuration;
@property (nonatomic) _Bool hasVoltMedDuration;
@property (nonatomic) unsigned int voltMedDuration;
@property (nonatomic) _Bool hasVoltHighDuration;
@property (nonatomic) unsigned int voltHighDuration;
@property (nonatomic) _Bool hasClkLowDuration;
@property (nonatomic) unsigned int clkLowDuration;
@property (nonatomic) _Bool hasClkMedDuration;
@property (nonatomic) unsigned int clkMedDuration;
@property (nonatomic) _Bool hasClkHighDuration;
@property (nonatomic) unsigned int clkHighDuration;
@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) unsigned long long startTime;

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
