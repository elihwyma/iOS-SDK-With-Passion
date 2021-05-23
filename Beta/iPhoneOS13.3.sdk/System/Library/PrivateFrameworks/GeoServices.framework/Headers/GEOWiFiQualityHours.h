/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader;

@interface GEOWiFiQualityHours : PBCodable

{
    PBDataReader *_reader;
    CDStruct_95bda58d _days;
    struct GEOWiFiQualityTimeRange *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_days:1;
        unsigned int read_timeRanges:1;
        unsigned int wrote_days:1;
        unsigned int wrote_timeRanges:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long daysCount;
@property (nonatomic, readonly) int *days;
@property (nonatomic, readonly) unsigned long long timeRangesCount;
@property (nonatomic, readonly) struct GEOWiFiQualityTimeRange *timeRanges;

+ (_Bool)isValid:(id)arg1;

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
- (void)clearTimeRanges;
- (void)_readDays;
- (void)_addNoFlagsDays:(int)arg1;
- (void)_readTimeRanges;
- (void)_addNoFlagsTimeRanges:(struct GEOWiFiQualityTimeRange)arg1;
- (void)clearDays;
- (int)daysAtIndex:(unsigned long long)arg1;
- (void)addDays:(int)arg1;
- (struct GEOWiFiQualityTimeRange)timeRangesAtIndex:(unsigned long long)arg1;
- (void)addTimeRanges:(struct GEOWiFiQualityTimeRange)arg1;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (id)daysAsString:(int)arg1;
- (int)StringAsDays:(id)arg1;
- (void)setTimeRanges:(struct GEOWiFiQualityTimeRange *)arg1 count:(unsigned long long)arg2;

@end
