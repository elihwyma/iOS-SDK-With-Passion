/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <Swift>

{
    long long _exerciseMinutes;
    long long _hourSinceMidnight;
    struct {
        unsigned int exerciseMinutes:1;
        unsigned int hourSinceMidnight:1;
    } _has;
}

@property (nonatomic) _Bool hasHourSinceMidnight;
@property (nonatomic) long long hourSinceMidnight;
@property (nonatomic) _Bool hasExerciseMinutes;
@property (nonatomic) long long exerciseMinutes;

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
