/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDHoursThreshold, PBDataReader, PBUnknownFields;

@interface GEOPDHours : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _days;
    struct GEOPDLocalTimeRange *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    GEOPDHoursThreshold *_hoursThreshold;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_days:1;
        unsigned int read_timeRanges:1;
        unsigned int read_hoursThreshold:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_days:1;
        unsigned int wrote_timeRanges:1;
        unsigned int wrote_hoursThreshold:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long daysCount;
@property (nonatomic, readonly) int *days;
@property (nonatomic, readonly) unsigned long long timeRangesCount;
@property (nonatomic, readonly) struct GEOPDLocalTimeRange *timeRanges;
@property (nonatomic, readonly) _Bool hasHoursThreshold;
@property (retain, nonatomic) GEOPDHoursThreshold *hoursThreshold;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)_allHoursForPlaceData:(id)arg1;
+ (_Bool)operatingHoursAvailableForPlaceData:(id)arg1;
+ (_Bool)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (id)completeOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearTimeRanges;
- (void)_readDays;
- (void)_readTimeRanges;
- (void)clearDays;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (id)daysAsString:(int)arg1;
- (int)StringAsDays:(id)arg1;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange *)arg1 count:(unsigned long long)arg2;
- (void)_readHoursThreshold;
- (void)addTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (void)addDay:(int)arg1;
- (struct GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsDay:(int)arg1;
- (void)_addNoFlagsTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (int)dayAtIndex:(unsigned long long)arg1;

@end
