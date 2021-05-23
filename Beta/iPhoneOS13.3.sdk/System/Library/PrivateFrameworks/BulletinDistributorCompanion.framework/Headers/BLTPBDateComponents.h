/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <ProtocolBuffer/PBCodable.h>

@interface BLTPBDateComponents : PBCodable

{
    int _hour;
    int _minute;
    int _second;
    int _weekday;
    struct {
        unsigned int hour:1;
        unsigned int minute:1;
        unsigned int second:1;
        unsigned int weekday:1;
    } _has;
}

@property (nonatomic) _Bool hasSecond;
@property (nonatomic) int second;
@property (nonatomic) _Bool hasHour;
@property (nonatomic) int hour;
@property (nonatomic) _Bool hasMinute;
@property (nonatomic) int minute;
@property (nonatomic) _Bool hasWeekday;
@property (nonatomic) int weekday;

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
