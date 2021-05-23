/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTraitsTransitScheduleTimeRange, PBUnknownFields;

@interface GEOTraitsTransitScheduleModeFilter : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOTraitsTransitScheduleTimeRange *_timeRange;
    unsigned int _numAdditionalDepartures;
    struct {
        unsigned int has_numAdditionalDepartures:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasTimeRange;
@property (retain, nonatomic) GEOTraitsTransitScheduleTimeRange *timeRange;
@property (nonatomic) _Bool hasNumAdditionalDepartures;
@property (nonatomic) unsigned int numAdditionalDepartures;
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
- (void)configureWithDefaultStartTime:(double)arg1 duration:(double)arg2 numAdditionalDepartures:(unsigned int)arg3;

@end
