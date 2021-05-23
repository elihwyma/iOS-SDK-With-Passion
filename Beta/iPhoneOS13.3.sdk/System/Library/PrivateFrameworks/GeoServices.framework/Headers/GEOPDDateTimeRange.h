/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDateTimeRange : PBCodable

{
    PBUnknownFields *_unknownFields;
    struct GEOPDLocalTimeRange *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    unsigned long long _endDate;
    unsigned long long _startDate;
    struct {
        unsigned int has_endDate:1;
        unsigned int has_startDate:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasValidStartAndEndDates;
@property (nonatomic) _Bool hasStartDate;
@property (nonatomic) unsigned long long startDate;
@property (nonatomic) _Bool hasEndDate;
@property (nonatomic) unsigned long long endDate;
@property (nonatomic, readonly) unsigned long long timeRangesCount;
@property (nonatomic, readonly) struct GEOPDLocalTimeRange *timeRanges;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
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
- (void)clearTimeRanges;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange *)arg1 count:(unsigned long long)arg2;
- (void)addTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (struct GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1;

@end
