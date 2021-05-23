/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEORPVisibleTileSet : PBCodable

{
    struct GEORPVisibleTileKey *_tileKeys;
    unsigned long long _tileKeysCount;
    unsigned long long _tileKeysSpace;
    unsigned int _identifier;
    int _style;
    struct {
        unsigned int has_identifier:1;
        unsigned int has_style:1;
    } _flags;
}

@property (nonatomic) _Bool hasStyle;
@property (nonatomic) int style;
@property (nonatomic) _Bool hasIdentifier;
@property (nonatomic) unsigned int identifier;
@property (nonatomic, readonly) unsigned long long tileKeysCount;
@property (nonatomic, readonly) struct GEORPVisibleTileKey *tileKeys;

+ (_Bool)isValid:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)styleAsString:(int)arg1;
- (int)StringAsStyle:(id)arg1;
- (void)clearTileKeys;
- (struct GEORPVisibleTileKey)tileKeyAtIndex:(unsigned long long)arg1;
- (void)addTileKey:(struct GEORPVisibleTileKey)arg1;
- (void)setTileKeys:(struct GEORPVisibleTileKey *)arg1 count:(unsigned long long)arg2;

@end
