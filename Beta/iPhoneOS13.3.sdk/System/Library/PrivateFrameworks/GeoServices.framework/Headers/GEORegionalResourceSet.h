/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORegionalResourceSet : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSMutableArray *_resources;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_regions:1;
        unsigned int read_resources:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_regions:1;
        unsigned int wrote_resources:1;
    } _flags;
}

@property (nonatomic, readonly) unsigned long long regionsCount;
@property (nonatomic, readonly) struct GEOTileSetRegion *regions;
@property (retain, nonatomic) NSMutableArray *resources;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)resourceType;

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
- (void)addRegion:(struct GEOTileSetRegion)arg1;
- (void)clearRegions;
- (void)readAll:(_Bool)arg1;
- (struct GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1;
- (void)setRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readRegions;
- (void)_addNoFlagsRegion:(struct GEOTileSetRegion)arg1;
- (void)_readResources;
- (void)_addNoFlagsResource:(id)arg1;
- (unsigned long long)resourcesCount;
- (void)clearResources;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (void)addResource:(id)arg1;

@end
