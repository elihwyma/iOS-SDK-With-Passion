//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDTileList : PBCodable <NSCopying>
{
    NSMutableArray *_tiles;
}

+ (BOOL)isValid:(id)arg1;
+ (Class)tileType;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)tileAtIndex:(NSUInteger)arg1;
- (NSUInteger)tilesCount;
- (void)addTile:(id)arg1;
- (void)clearTiles;
@property(retain, nonatomic) NSMutableArray *tiles;

@end

