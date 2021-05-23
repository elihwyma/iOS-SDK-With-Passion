/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray;

@interface GEOLogMsgStateTileSet : PBCodable

{
    NSMutableArray *_tileSetInfos;
}

@property (retain, nonatomic) NSMutableArray *tileSetInfos;

+ (_Bool)isValid:(id)arg1;
+ (Class)tileSetInfoType;

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
- (void)addTileSetInfo:(id)arg1;
- (unsigned long long)tileSetInfosCount;
- (void)clearTileSetInfos;
- (id)tileSetInfoAtIndex:(unsigned long long)arg1;

@end
