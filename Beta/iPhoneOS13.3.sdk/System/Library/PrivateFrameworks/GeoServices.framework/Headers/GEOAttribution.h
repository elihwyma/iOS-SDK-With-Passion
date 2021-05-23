/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOAttribution : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_regions;
    unsigned long long _regionsCount;
    unsigned long long _regionsSpace;
    NSString *_badgeChecksum;
    NSString *_badge;
    NSString *_logoChecksum;
    NSString *_logo;
    NSString *_name;
    NSMutableArray *_resources;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _dataSet;
    unsigned int _linkDisplayStringIndex;
    struct {
        unsigned int has_dataSet:1;
        unsigned int has_linkDisplayStringIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_regions:1;
        unsigned int read_badgeChecksum:1;
        unsigned int read_badge:1;
        unsigned int read_logoChecksum:1;
        unsigned int read_logo:1;
        unsigned int read_name:1;
        unsigned int read_resources:1;
        unsigned int read_url:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_regions:1;
        unsigned int wrote_badgeChecksum:1;
        unsigned int wrote_badge:1;
        unsigned int wrote_logoChecksum:1;
        unsigned int wrote_logo:1;
        unsigned int wrote_name:1;
        unsigned int wrote_resources:1;
        unsigned int wrote_url:1;
        unsigned int wrote_dataSet:1;
        unsigned int wrote_linkDisplayStringIndex:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasBadge;
@property (retain, nonatomic) NSString *badge;
@property (nonatomic, readonly) _Bool hasLogo;
@property (retain, nonatomic) NSString *logo;
@property (nonatomic, readonly) _Bool hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic, readonly) _Bool hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic, readonly) _Bool hasBadgeChecksum;
@property (retain, nonatomic) NSString *badgeChecksum;
@property (nonatomic, readonly) _Bool hasLogoChecksum;
@property (retain, nonatomic) NSString *logoChecksum;
@property (retain, nonatomic) NSMutableArray *resources;
@property (nonatomic, readonly) unsigned long long regionsCount;
@property (nonatomic, readonly) struct GEOTileSetRegion *regions;
@property (nonatomic) _Bool hasDataSet;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic) _Bool hasLinkDisplayStringIndex;
@property (nonatomic) unsigned int linkDisplayStringIndex;
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
- (void)_readName;
- (void)_readRegions;
- (void)_addNoFlagsRegion:(struct GEOTileSetRegion)arg1;
- (void)_readUrl;
- (void)_readResources;
- (void)_addNoFlagsResource:(id)arg1;
- (unsigned long long)resourcesCount;
- (void)clearResources;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (void)addResource:(id)arg1;
- (void)_readBadge;
- (void)_readLogo;
- (void)_readBadgeChecksum;
- (void)_readLogoChecksum;

@end
