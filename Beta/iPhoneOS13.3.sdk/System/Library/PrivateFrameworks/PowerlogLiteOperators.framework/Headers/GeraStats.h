/*
 Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

#import <ProtocolBuffer/PBCodable.h>

@interface GeraStats : PBCodable

{
    unsigned long long _startTime;
    unsigned int _duration;
    unsigned int _sleepCycleCount;
    unsigned int _sleepDuration;
    struct {
        unsigned int startTime:1;
        unsigned int duration:1;
        unsigned int sleepCycleCount:1;
        unsigned int sleepDuration:1;
    } _has;
}

@property (nonatomic) _Bool hasDuration;
@property (nonatomic) unsigned int duration;
@property (nonatomic) _Bool hasSleepDuration;
@property (nonatomic) unsigned int sleepDuration;
@property (nonatomic) _Bool hasSleepCycleCount;
@property (nonatomic) unsigned int sleepCycleCount;
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
