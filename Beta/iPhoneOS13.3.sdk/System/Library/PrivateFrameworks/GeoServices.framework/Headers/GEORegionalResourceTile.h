/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORegionalResourceTile : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_attributions;
    NSMutableArray *_childrens;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_attributions:1;
        unsigned int read_childrens:1;
        unsigned int read_iconChecksums:1;
        unsigned int read_icons:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_attributions:1;
        unsigned int wrote_childrens:1;
        unsigned int wrote_iconChecksums:1;
        unsigned int wrote_icons:1;
        unsigned int wrote_x:1;
        unsigned int wrote_y:1;
        unsigned int wrote_z:1;
    } _flags;
}

@property (nonatomic) unsigned int x;
@property (nonatomic) unsigned int y;
@property (nonatomic) unsigned int z;
@property (retain, nonatomic) NSMutableArray *childrens;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *attributions;
@property (retain, nonatomic) NSMutableArray *iconChecksums;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)attributionType;
+ (Class)iconType;
+ (Class)iconChecksumType;
+ (Class)childrenType;

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
- (_Bool)containsTileKey:(const struct _GEOTileKey *)arg1;
- (void)_readChildrens;
- (void)_addNoFlagsChildren:(id)arg1;
- (unsigned long long)childrensCount;
- (void)clearChildrens;
- (id)childrenAtIndex:(unsigned long long)arg1;
- (void)addChildren:(id)arg1;

@end
