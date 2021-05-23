/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOLocalTime : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _timeRoundedToHour;
    float _timezoneOffsetFromGmtInHours;
    struct {
        unsigned int has_timeRoundedToHour:1;
        unsigned int has_timezoneOffsetFromGmtInHours:1;
    } _flags;
}

@property (nonatomic) _Bool hasTimeRoundedToHour;
@property (nonatomic) unsigned long long timeRoundedToHour;
@property (nonatomic) _Bool hasTimezoneOffsetFromGmtInHours;
@property (nonatomic) float timezoneOffsetFromGmtInHours;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDate:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)initWithCFAbsoluteTime:(double)arg1;

@end
