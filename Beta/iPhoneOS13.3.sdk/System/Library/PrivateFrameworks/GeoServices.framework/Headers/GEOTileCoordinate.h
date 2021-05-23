/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOTileCoordinate : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _x;
    int _y;
    int _zoom;
    struct {
        unsigned int has_x:1;
        unsigned int has_y:1;
        unsigned int has_zoom:1;
    } _flags;
}

@property (nonatomic) _Bool hasX;
@property (nonatomic) int x;
@property (nonatomic) _Bool hasY;
@property (nonatomic) int y;
@property (nonatomic) _Bool hasZoom;
@property (nonatomic) int zoom;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)clearUnknownFields:(_Bool)arg1;

@end
