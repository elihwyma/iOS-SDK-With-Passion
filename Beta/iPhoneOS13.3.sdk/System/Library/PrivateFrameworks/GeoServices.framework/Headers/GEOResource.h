/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOResource : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSData *_checksum;
    NSString *_filename;
    NSMutableArray *_filters;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _connectionType;
    unsigned int _preferWiFiAllowedStaleThreshold;
    int _resourceType;
    struct {
        unsigned int has_connectionType:1;
        unsigned int has_preferWiFiAllowedStaleThreshold:1;
        unsigned int has_resourceType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_regions:1;
        unsigned int read_checksum:1;
        unsigned int read_filename:1;
        unsigned int read_filters:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_regions:1;
        unsigned int wrote_checksum:1;
        unsigned int wrote_filename:1;
        unsigned int wrote_filters:1;
        unsigned int wrote_connectionType:1;
        unsigned int wrote_preferWiFiAllowedStaleThreshold:1;
        unsigned int wrote_resourceType:1;
    } _flags;
}

@property (nonatomic) _Bool hasResourceType;
@property (nonatomic) int resourceType;
@property (nonatomic, readonly) _Bool hasFilename;
@property (retain, nonatomic) NSString *filename;
@property (nonatomic, readonly) _Bool hasChecksum;
@property (retain, nonatomic) NSData *checksum;
@property (nonatomic, readonly) unsigned long long regionsCount;
@property (nonatomic, readonly) struct GEOTileSetRegion *regions;
@property (retain, nonatomic) NSMutableArray *filters;
@property (nonatomic) _Bool hasConnectionType;
@property (nonatomic) int connectionType;
@property (nonatomic) _Bool hasPreferWiFiAllowedStaleThreshold;
@property (nonatomic) unsigned int preferWiFiAllowedStaleThreshold;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)filterType;
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
- (void)addRegion:(struct GEOTileSetRegion)arg1;
- (void)clearRegions;
- (void)readAll:(_Bool)arg1;
- (struct GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1;
- (void)setRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)_readRegions;
- (void)_readFilename;
- (void)_readChecksum;
- (void)_addNoFlagsRegion:(struct GEOTileSetRegion)arg1;
- (void)_readFilters;
- (void)_addNoFlagsFilter:(id)arg1;
- (unsigned long long)filtersCount;
- (void)clearFilters;
- (id)filterAtIndex:(unsigned long long)arg1;
- (void)addFilter:(id)arg1;
- (id)resourceTypeAsString:(int)arg1;
- (int)StringAsResourceType:(id)arg1;
- (id)connectionTypeAsString:(int)arg1;
- (int)StringAsConnectionType:(id)arg1;
- (_Bool)_geo_isRelevantForScales:(id)arg1 scenarios:(id)arg2;

@end
