/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOMapRegion;

@interface GEOLogMsgStateMapView : PBCodable

{
    GEOMapRegion *_mapRegion;
    double _zoomLevel;
    int _mapType;
    struct {
        unsigned int has_zoomLevel:1;
        unsigned int has_mapType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) _Bool hasZoomLevel;
@property (nonatomic) double zoomLevel;
@property (nonatomic) _Bool hasMapType;
@property (nonatomic) int mapType;

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
- (id)mapTypeAsString:(int)arg1;
- (int)StringAsMapType:(id)arg1;

@end
