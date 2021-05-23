/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTraitsTransitScheduleModeFilter, GEOTraitsTransitScheduleTimeRange, PBDataReader, PBUnknownFields;

@interface GEOTraitsTransitScheduleFilter : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTraitsTransitScheduleModeFilter *_highFrequencyFilter;
    GEOTraitsTransitScheduleModeFilter *_lowFrequencyFilter;
    GEOTraitsTransitScheduleTimeRange *_operatingHoursRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_highFrequencyFilter:1;
        unsigned int read_lowFrequencyFilter:1;
        unsigned int read_operatingHoursRange:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_highFrequencyFilter:1;
        unsigned int wrote_lowFrequencyFilter:1;
        unsigned int wrote_operatingHoursRange:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasHighFrequencyFilter;
@property (retain, nonatomic) GEOTraitsTransitScheduleModeFilter *highFrequencyFilter;
@property (nonatomic, readonly) _Bool hasLowFrequencyFilter;
@property (retain, nonatomic) GEOTraitsTransitScheduleModeFilter *lowFrequencyFilter;
@property (nonatomic, readonly) _Bool hasOperatingHoursRange;
@property (retain, nonatomic) GEOTraitsTransitScheduleTimeRange *operatingHoursRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
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
- (void)_readHighFrequencyFilter;
- (void)_readLowFrequencyFilter;
- (void)_readOperatingHoursRange;

@end
