/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDTileList : PBCodable

{
    NSMutableArray *_tiles;
}

@property (retain, nonatomic) NSMutableArray *tiles;

+ (_Bool)isValid:(id)arg1;
+ (Class)tileType;

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
- (void)addTile:(id)arg1;
- (unsigned long long)tilesCount;
- (void)clearTiles;
- (id)tileAtIndex:(unsigned long long)arg1;

@end
