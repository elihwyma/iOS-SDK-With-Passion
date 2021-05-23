/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTileGroup : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_9f2792e4 _attributionIndexs;
    CDStruct_9f2792e4 _fontIndexs;
    struct GEOTileSetRegion *_hybridUnavailableRegions;
    unsigned long long _hybridUnavailableRegionsCount;
    unsigned long long _hybridUnavailableRegionsSpace;
    CDStruct_9f2792e4 _iconIndexs;
    struct GEORegionalResourceIndex *_regionalResourceIndexs;
    unsigned long long _regionalResourceIndexsCount;
    unsigned long long _regionalResourceIndexsSpace;
    CDStruct_9f2792e4 _resourceIndexs;
    CDStruct_9f2792e4 _styleSheetIndexs;
    CDStruct_9f2792e4 _textureIndexs;
    struct GEOVersionedTileSet *_tileSets;
    unsigned long long _tileSetsCount;
    unsigned long long _tileSetsSpace;
    CDStruct_9f2792e4 _xmlIndexs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _identifier;
    unsigned int _muninVersionIndex;
    struct {
        unsigned int has_muninVersionIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attributionIndexs:1;
        unsigned int read_fontIndexs:1;
        unsigned int read_hybridUnavailableRegions:1;
        unsigned int read_iconIndexs:1;
        unsigned int read_regionalResourceIndexs:1;
        unsigned int read_resourceIndexs:1;
        unsigned int read_styleSheetIndexs:1;
        unsigned int read_textureIndexs:1;
        unsigned int read_tileSets:1;
        unsigned int read_xmlIndexs:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attributionIndexs:1;
        unsigned int wrote_fontIndexs:1;
        unsigned int wrote_hybridUnavailableRegions:1;
        unsigned int wrote_iconIndexs:1;
        unsigned int wrote_regionalResourceIndexs:1;
        unsigned int wrote_resourceIndexs:1;
        unsigned int wrote_styleSheetIndexs:1;
        unsigned int wrote_textureIndexs:1;
        unsigned int wrote_tileSets:1;
        unsigned int wrote_xmlIndexs:1;
        unsigned int wrote_identifier:1;
        unsigned int wrote_muninVersionIndex:1;
    } _flags;
}

@property (nonatomic) unsigned int identifier;
@property (nonatomic, readonly) unsigned long long tileSetsCount;
@property (nonatomic, readonly) struct GEOVersionedTileSet *tileSets;
@property (nonatomic, readonly) unsigned long long styleSheetIndexsCount;
@property (nonatomic, readonly) unsigned int *styleSheetIndexs;
@property (nonatomic, readonly) unsigned long long textureIndexsCount;
@property (nonatomic, readonly) unsigned int *textureIndexs;
@property (nonatomic, readonly) unsigned long long fontIndexsCount;
@property (nonatomic, readonly) unsigned int *fontIndexs;
@property (nonatomic, readonly) unsigned long long iconIndexsCount;
@property (nonatomic, readonly) unsigned int *iconIndexs;
@property (nonatomic, readonly) unsigned long long regionalResourceIndexsCount;
@property (nonatomic, readonly) struct GEORegionalResourceIndex *regionalResourceIndexs;
@property (nonatomic, readonly) unsigned long long xmlIndexsCount;
@property (nonatomic, readonly) unsigned int *xmlIndexs;
@property (nonatomic, readonly) unsigned long long attributionIndexsCount;
@property (nonatomic, readonly) unsigned int *attributionIndexs;
@property (nonatomic, readonly) unsigned long long hybridUnavailableRegionsCount;
@property (nonatomic, readonly) struct GEOTileSetRegion *hybridUnavailableRegions;
@property (nonatomic, readonly) unsigned long long resourceIndexsCount;
@property (nonatomic, readonly) unsigned int *resourceIndexs;
@property (nonatomic) _Bool hasMuninVersionIndex;
@property (nonatomic) unsigned int muninVersionIndex;
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
- (void)addTileSet:(struct GEOVersionedTileSet)arg1;
- (void)clearTileSets;
- (struct GEOVersionedTileSet)tileSetAtIndex:(unsigned long long)arg1;
- (unsigned int)resourceIndexAtIndex:(unsigned long long)arg1;
- (unsigned int)attributionIndexAtIndex:(unsigned long long)arg1;
- (void)_readTileSets;
- (void)_addNoFlagsTileSet:(struct GEOVersionedTileSet)arg1;
- (void)clearRegionalResourceIndexs;
- (void)clearHybridUnavailableRegions;
- (void)_readStyleSheetIndexs;
- (void)_addNoFlagsStyleSheetIndex:(unsigned int)arg1;
- (void)_readTextureIndexs;
- (void)_addNoFlagsTextureIndex:(unsigned int)arg1;
- (void)_readFontIndexs;
- (void)_addNoFlagsFontIndex:(unsigned int)arg1;
- (void)_readIconIndexs;
- (void)_addNoFlagsIconIndex:(unsigned int)arg1;
- (void)_readRegionalResourceIndexs;
- (void)_addNoFlagsRegionalResourceIndex:(struct GEORegionalResourceIndex)arg1;
- (void)_readXmlIndexs;
- (void)_addNoFlagsXmlIndex:(unsigned int)arg1;
- (void)_readAttributionIndexs;
- (void)_addNoFlagsAttributionIndex:(unsigned int)arg1;
- (void)_readHybridUnavailableRegions;
- (void)_addNoFlagsHybridUnavailableRegion:(struct GEOTileSetRegion)arg1;
- (void)_readResourceIndexs;
- (void)_addNoFlagsResourceIndex:(unsigned int)arg1;
- (void)clearStyleSheetIndexs;
- (unsigned int)styleSheetIndexAtIndex:(unsigned long long)arg1;
- (void)addStyleSheetIndex:(unsigned int)arg1;
- (void)clearTextureIndexs;
- (unsigned int)textureIndexAtIndex:(unsigned long long)arg1;
- (void)addTextureIndex:(unsigned int)arg1;
- (void)clearFontIndexs;
- (unsigned int)fontIndexAtIndex:(unsigned long long)arg1;
- (void)addFontIndex:(unsigned int)arg1;
- (void)clearIconIndexs;
- (unsigned int)iconIndexAtIndex:(unsigned long long)arg1;
- (void)addIconIndex:(unsigned int)arg1;
- (struct GEORegionalResourceIndex)regionalResourceIndexAtIndex:(unsigned long long)arg1;
- (void)addRegionalResourceIndex:(struct GEORegionalResourceIndex)arg1;
- (void)clearXmlIndexs;
- (unsigned int)xmlIndexAtIndex:(unsigned long long)arg1;
- (void)addXmlIndex:(unsigned int)arg1;
- (void)clearAttributionIndexs;
- (void)addAttributionIndex:(unsigned int)arg1;
- (struct GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (void)addHybridUnavailableRegion:(struct GEOTileSetRegion)arg1;
- (void)clearResourceIndexs;
- (void)addResourceIndex:(unsigned int)arg1;
- (void)setTileSets:(struct GEOVersionedTileSet *)arg1 count:(unsigned long long)arg2;
- (void)setStyleSheetIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTextureIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setFontIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setIconIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setRegionalResourceIndexs:(struct GEORegionalResourceIndex *)arg1 count:(unsigned long long)arg2;
- (void)setXmlIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setAttributionIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setHybridUnavailableRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (void)setResourceIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;

@end
