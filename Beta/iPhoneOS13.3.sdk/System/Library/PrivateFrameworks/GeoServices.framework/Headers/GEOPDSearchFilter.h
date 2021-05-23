/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDBrandFilter, GEOPDCategoryFilter, GEOPDPoiIconCategoryFilter, GEOPDSearchVenueFilter, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchFilter : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDBrandFilter *_brandFilter;
    GEOPDCategoryFilter *_categoryFilter;
    GEOPDPoiIconCategoryFilter *_poiIconCategoryFilter;
    GEOPDSearchVenueFilter *_venueFilter;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _searchIntentFilter;
    struct {
        unsigned int has_searchIntentFilter:1;
        unsigned int read_unknownFields:1;
        unsigned int read_brandFilter:1;
        unsigned int read_categoryFilter:1;
        unsigned int read_poiIconCategoryFilter:1;
        unsigned int read_venueFilter:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_brandFilter:1;
        unsigned int wrote_categoryFilter:1;
        unsigned int wrote_poiIconCategoryFilter:1;
        unsigned int wrote_venueFilter:1;
        unsigned int wrote_searchIntentFilter:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasVenueFilter;
@property (retain, nonatomic) GEOPDSearchVenueFilter *venueFilter;
@property (nonatomic, readonly) _Bool hasCategoryFilter;
@property (retain, nonatomic) GEOPDCategoryFilter *categoryFilter;
@property (nonatomic, readonly) _Bool hasBrandFilter;
@property (retain, nonatomic) GEOPDBrandFilter *brandFilter;
@property (nonatomic) _Bool hasSearchIntentFilter;
@property (nonatomic) int searchIntentFilter;
@property (nonatomic, readonly) _Bool hasPoiIconCategoryFilter;
@property (retain, nonatomic) GEOPDPoiIconCategoryFilter *poiIconCategoryFilter;
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
- (void)_readPoiIconCategoryFilter;
- (void)_readVenueFilter;
- (void)_readCategoryFilter;
- (void)_readBrandFilter;
- (id)searchIntentFilterAsString:(int)arg1;
- (int)StringAsSearchIntentFilter:(id)arg1;

@end
