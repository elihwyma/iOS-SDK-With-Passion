/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <ProtocolBuffer/PBCodable.h>

@interface ASCodableCloudKitDateComponents : PBCodable

{
    long long _day;
    long long _era;
    long long _hour;
    long long _month;
    long long _year;
    struct {
        unsigned int day:1;
        unsigned int era:1;
        unsigned int hour:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
}

@property (nonatomic) _Bool hasYear;
@property (nonatomic) long long year;
@property (nonatomic) _Bool hasMonth;
@property (nonatomic) long long month;
@property (nonatomic) _Bool hasDay;
@property (nonatomic) long long day;
@property (nonatomic) _Bool hasHour;
@property (nonatomic) long long hour;
@property (nonatomic) _Bool hasEra;
@property (nonatomic) long long era;

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
