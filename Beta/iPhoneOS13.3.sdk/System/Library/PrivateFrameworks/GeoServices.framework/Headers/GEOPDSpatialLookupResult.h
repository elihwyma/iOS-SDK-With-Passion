/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPDBounds, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialLookupResult : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _mappedCategorys;
    GEOPDBounds *_bounds;
    GEOLatLng *_center;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_mappedCategorys:1;
        unsigned int read_bounds:1;
        unsigned int read_center:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_mappedCategorys:1;
        unsigned int wrote_bounds:1;
        unsigned int wrote_center:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic, readonly) _Bool hasBounds;
@property (retain, nonatomic) GEOPDBounds *bounds;
@property (nonatomic, readonly) unsigned long long mappedCategorysCount;
@property (nonatomic, readonly) int *mappedCategorys;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)spatialLookupResultForPlaceData:(id)arg1;

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
- (void)_readBounds;
- (void)_readMappedCategorys;
- (void)_addNoFlagsMappedCategory:(int)arg1;
- (void)clearMappedCategorys;
- (int)mappedCategoryAtIndex:(unsigned long long)arg1;
- (void)addMappedCategory:(int)arg1;
- (void)setMappedCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (id)mappedCategorysAsString:(int)arg1;
- (int)StringAsMappedCategorys:(id)arg1;

@end
