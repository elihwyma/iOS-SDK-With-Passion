/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PPPBDateComponents : PBCodable

{
    NSString *_calendarIdentifier;
    int _day;
    int _month;
    NSString *_timeZoneName;
    int _year;
    struct {
        unsigned int day:1;
        unsigned int month:1;
        unsigned int year:1;
    } _has;
}

@property (nonatomic) _Bool hasDay;
@property (nonatomic) int day;
@property (nonatomic) _Bool hasMonth;
@property (nonatomic) int month;
@property (nonatomic) _Bool hasYear;
@property (nonatomic) int year;
@property (nonatomic, readonly) _Bool hasCalendarIdentifier;
@property (retain, nonatomic) NSString *calendarIdentifier;
@property (nonatomic, readonly) _Bool hasTimeZoneName;
@property (retain, nonatomic) NSString *timeZoneName;

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
