/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineArea : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_displayMapRegions;
    GEOMapRegion *_mapRegion;
    GEOMapRegion *_maximumAllowedMapRegion;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_displayMapRegions:1;
        unsigned int read_mapRegion:1;
        unsigned int read_maximumAllowedMapRegion:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_displayMapRegions:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_maximumAllowedMapRegion:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) _Bool hasMaximumAllowedMapRegion;
@property (retain, nonatomic) GEOMapRegion *maximumAllowedMapRegion;
@property (retain, nonatomic) NSMutableArray *displayMapRegions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)displayMapRegionType;

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
- (void)_readMapRegion;
- (void)_readMaximumAllowedMapRegion;
- (void)_readDisplayMapRegions;
- (void)_addNoFlagsDisplayMapRegion:(id)arg1;
- (unsigned long long)displayMapRegionsCount;
- (void)clearDisplayMapRegions;
- (id)displayMapRegionAtIndex:(unsigned long long)arg1;
- (void)addDisplayMapRegion:(id)arg1;

@end
