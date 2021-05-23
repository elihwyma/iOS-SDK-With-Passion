/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEORegionalResource : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_tileRanges;
    unsigned long long _tileRangesCount;
    unsigned long long _tileRangesSpace;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct {
        unsigned int has_x:1;
        unsigned int has_y:1;
        unsigned int has_z:1;
        unsigned int read_unknownFields:1;
        unsigned int read_tileRanges:1;
        unsigned int read_attributions:1;
        unsigned int read_iconChecksums:1;
        unsigned int read_icons:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_tileRanges:1;
        unsigned int wrote_attributions:1;
        unsigned int wrote_iconChecksums:1;
        unsigned int wrote_icons:1;
        unsigned int wrote_x:1;
        unsigned int wrote_y:1;
        unsigned int wrote_z:1;
    } _flags;
}

@property (nonatomic) _Bool hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) _Bool hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) _Bool hasZ;
@property (nonatomic) unsigned int z;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *iconChecksums;
@property (nonatomic, readonly) unsigned long long tileRangesCount;
@property (nonatomic, readonly) struct GEOTileSetRegion *tileRanges;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)attributionType;
+ (Class)iconType;
+ (Class)iconChecksumType;

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
- (void)_readAttributions;
- (void)_addNoFlagsAttribution:(id)arg1;
- (unsigned long long)attributionsCount;
- (void)clearAttributions;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (void)addAttribution:(id)arg1;
- (void)_readIcons;
- (void)_addNoFlagsIcon:(id)arg1;
- (void)_readIconChecksums;
- (void)_addNoFlagsIconChecksum:(id)arg1;
- (unsigned long long)iconsCount;
- (void)clearIcons;
- (id)iconAtIndex:(unsigned long long)arg1;
- (void)addIcon:(id)arg1;
- (unsigned long long)iconChecksumsCount;
- (void)clearIconChecksums;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)clearTileRanges;
- (void)_readTileRanges;
- (void)_addNoFlagsTileRange:(struct GEOTileSetRegion)arg1;
- (struct GEOTileSetRegion)tileRangeAtIndex:(unsigned long long)arg1;
- (void)addTileRange:(struct GEOTileSetRegion)arg1;
- (void)setTileRanges:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;

@end
