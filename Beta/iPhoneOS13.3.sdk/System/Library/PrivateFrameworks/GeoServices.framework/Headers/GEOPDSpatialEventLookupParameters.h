/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialEventLookupParameters : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _categoryFilters;
    GEOLatLng *_center;
    struct GEOPDTimeRange _timeRange;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _count;
    int _radius;
    struct {
        unsigned int has_timeRange:1;
        unsigned int has_count:1;
        unsigned int has_radius:1;
        unsigned int read_unknownFields:1;
        unsigned int read_categoryFilters:1;
        unsigned int read_center:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_categoryFilters:1;
        unsigned int wrote_center:1;
        unsigned int wrote_timeRange:1;
        unsigned int wrote_count:1;
        unsigned int wrote_radius:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) _Bool hasRadius;
@property (nonatomic) int radius;
@property (nonatomic) _Bool hasCount;
@property (nonatomic) int count;
@property (nonatomic, readonly) unsigned long long categoryFiltersCount;
@property (nonatomic, readonly) int *categoryFilters;
@property (nonatomic) _Bool hasTimeRange;
@property (nonatomic) struct GEOPDTimeRange timeRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readCenter;
- (void)_readCategoryFilters;
- (void)_addNoFlagsCategoryFilter:(int)arg1;
- (void)clearCategoryFilters;
- (int)categoryFilterAtIndex:(unsigned long long)arg1;
- (void)addCategoryFilter:(int)arg1;
- (void)setCategoryFilters:(int *)arg1 count:(unsigned long long)arg2;
- (id)categoryFiltersAsString:(int)arg1;
- (int)StringAsCategoryFilters:(id)arg1;

@end
