/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOTraitsTransitScheduleTimeRange : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _duration;
    double _startTime;
    struct {
        unsigned int has_duration:1;
        unsigned int has_startTime:1;
    } _flags;
}

@property (nonatomic) _Bool hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) _Bool hasDuration;
@property (nonatomic) double duration;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;

@end
