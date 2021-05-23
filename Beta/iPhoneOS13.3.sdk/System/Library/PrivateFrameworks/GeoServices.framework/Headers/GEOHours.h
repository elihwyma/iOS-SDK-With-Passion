/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOHours : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _days;
    NSMutableArray *_timeRanges;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_days:1;
        unsigned int read_timeRanges:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_days:1;
        unsigned int wrote_timeRanges:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long daysCount;
@property (nonatomic, readonly) int *days;
@property (retain, nonatomic) NSMutableArray *timeRanges;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)timeRangeType;

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
- (unsigned long long)timeRangesCount;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (id)daysAsString:(int)arg1;
- (int)StringAsDays:(id)arg1;
- (void)addTimeRange:(id)arg1;
- (void)addDay:(int)arg1;
- (id)initWithPlaceDataHours:(id)arg1;
- (id)timeRangeAtIndex:(unsigned long long)arg1;
- (void)_addNoFlagsDay:(int)arg1;
- (void)_addNoFlagsTimeRange:(id)arg1;
- (int)dayAtIndex:(unsigned long long)arg1;

@end
