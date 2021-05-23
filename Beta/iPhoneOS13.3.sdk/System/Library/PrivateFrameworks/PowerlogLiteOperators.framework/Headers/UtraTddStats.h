/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface UtraTddStats : PBCodable

{
    unsigned long long _startTime;
    unsigned int _activeDuration;
    unsigned int _deepSleepCycleCount;
    unsigned int _deepSleepDuration;
    unsigned int _duration;
    unsigned int _normalSleepDuration;
    unsigned int _thClkOpt0Duration;
    unsigned int _thClkOpt1Duration;
    unsigned int _voltHighDuration;
    unsigned int _voltLowDuration;
    unsigned int _voltMedDuration;
    unsigned int _zspClkOpt0Duration;
    unsigned int _zspClkOpt1Duration;
    unsigned int _zspClkOpt2Duration;
    unsigned int _zspClkOpt3Duration;
    unsigned int _zspClkOpt4Duration;
    unsigned int _zspClkOpt5Duration;
    struct {
        unsigned int startTime:1;
        unsigned int activeDuration:1;
        unsigned int deepSleepCycleCount:1;
        unsigned int deepSleepDuration:1;
        unsigned int duration:1;
        unsigned int normalSleepDuration:1;
        unsigned int thClkOpt0Duration:1;
        unsigned int thClkOpt1Duration:1;
        unsigned int voltHighDuration:1;
        unsigned int voltLowDuration:1;
        unsigned int voltMedDuration:1;
        unsigned int zspClkOpt0Duration:1;
        unsigned int zspClkOpt1Duration:1;
        unsigned int zspClkOpt2Duration:1;
        unsigned int zspClkOpt3Duration:1;
        unsigned int zspClkOpt4Duration:1;
        unsigned int zspClkOpt5Duration:1;
    } _has;
}

@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) _Bool hasActiveDuration;
@property (nonatomic) unsigned int activeDuration;
@property (nonatomic) _Bool hasNormalSleepDuration;
@property (nonatomic) unsigned int normalSleepDuration;
@property (nonatomic) _Bool hasDeepSleepDuration;
@property (nonatomic) unsigned int deepSleepDuration;
@property (nonatomic) _Bool hasDeepSleepCycleCount;
@property (nonatomic) unsigned int deepSleepCycleCount;
@property (nonatomic) _Bool hasVoltLowDuration;
@property (nonatomic) unsigned int voltLowDuration;
@property (nonatomic) _Bool hasVoltMedDuration;
@property (nonatomic) unsigned int voltMedDuration;
@property (nonatomic) _Bool hasVoltHighDuration;
@property (nonatomic) unsigned int voltHighDuration;
@property (nonatomic) _Bool hasZspClkOpt0Duration;
@property (nonatomic) unsigned int zspClkOpt0Duration;
@property (nonatomic) _Bool hasZspClkOpt1Duration;
@property (nonatomic) unsigned int zspClkOpt1Duration;
@property (nonatomic) _Bool hasZspClkOpt2Duration;
@property (nonatomic) unsigned int zspClkOpt2Duration;
@property (nonatomic) _Bool hasZspClkOpt3Duration;
@property (nonatomic) unsigned int zspClkOpt3Duration;
@property (nonatomic) _Bool hasZspClkOpt4Duration;
@property (nonatomic) unsigned int zspClkOpt4Duration;
@property (nonatomic) _Bool hasZspClkOpt5Duration;
@property (nonatomic) unsigned int zspClkOpt5Duration;
@property (nonatomic) _Bool hasThClkOpt0Duration;
@property (nonatomic) unsigned int thClkOpt0Duration;
@property (nonatomic) _Bool hasThClkOpt1Duration;
@property (nonatomic) unsigned int thClkOpt1Duration;
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
