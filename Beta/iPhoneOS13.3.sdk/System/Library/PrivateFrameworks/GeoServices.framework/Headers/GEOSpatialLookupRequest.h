/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupRequest : PBCodable

{
    PBDataReader *_reader;
    CDStruct_95bda58d _categorys;
    GEOLatLng *_center;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maxResults;
    int _radius;
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_radius:1;
        unsigned int read_categorys:1;
        unsigned int read_center:1;
        unsigned int wrote_categorys:1;
        unsigned int wrote_center:1;
        unsigned int wrote_maxResults:1;
        unsigned int wrote_radius:1;
    } _flags;
}

@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) _Bool hasRadius;
@property (nonatomic) int radius;
@property (nonatomic) _Bool hasMaxResults;
@property (nonatomic) int maxResults;
@property (nonatomic, readonly) unsigned long long categorysCount;
@property (nonatomic, readonly) int *categorys;

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
- (void)_readCenter;
- (void)_readCategorys;
- (void)_addNoFlagsCategory:(int)arg1;
- (void)clearCategorys;
- (int)categoryAtIndex:(unsigned long long)arg1;
- (void)addCategory:(int)arg1;
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;
- (id)categorysAsString:(int)arg1;
- (int)StringAsCategorys:(id)arg1;

@end
