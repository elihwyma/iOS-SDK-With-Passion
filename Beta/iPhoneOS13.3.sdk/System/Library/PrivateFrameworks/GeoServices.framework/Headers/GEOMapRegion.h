/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class NSMutableArray, PBUnknownFields;

@interface GEOMapRegion : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _eastLng;
    double _northLat;
    double _southLat;
    NSMutableArray *_vertexs;
    double _westLng;
    int _mapRegionSourceType;
    struct {
        unsigned int has_eastLng:1;
        unsigned int has_northLat:1;
        unsigned int has_southLat:1;
        unsigned int has_westLng:1;
        unsigned int has_mapRegionSourceType:1;
    } _flags;
}

@property (nonatomic, readonly) double centerLat;
@property (nonatomic, readonly) double centerLng;
@property (nonatomic, readonly) double spanLat;
@property (nonatomic, readonly) double spanLng;
@property (nonatomic, readonly) _Bool hasRectangleVertices;
@property (nonatomic) _Bool hasSouthLat;
@property (nonatomic) double southLat;
@property (nonatomic) _Bool hasWestLng;
@property (nonatomic) double westLng;
@property (nonatomic) _Bool hasNorthLat;
@property (nonatomic) double northLat;
@property (nonatomic) _Bool hasEastLng;
@property (nonatomic) double eastLng;
@property (retain, nonatomic) NSMutableArray *vertexs;
@property (nonatomic) _Bool hasMapRegionSourceType;
@property (nonatomic) int mapRegionSourceType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (id)_geo_mapRegionForGEOCoordinateRegion:(CDStruct_90e2a262)arg1;
+ (Class)vertexType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)initWithMapRect:(CDStruct_90e2a262)arg1;
- (void)setMapRect:(CDStruct_90e2a262)arg1;
- (unsigned long long)vertexsCount;
- (id)initWithCoordinateRegion:(CDStruct_90e2a262)arg1;
- (id)initWithRadialPlace:(id)arg1;
- (id)coordinates;
- (id)vertexAtIndex:(unsigned long long)arg1;
- (void)addVertex:(id)arg1;
- (void)clearVertexs;
- (id)mapRegionSourceTypeAsString:(int)arg1;
- (int)StringAsMapRegionSourceType:(id)arg1;
- (_Bool)containsRegion:(id)arg1;
- (_Bool)containsCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2;
- (_Bool)containsMapRect:(CDStruct_90e2a262)arg1;
- (_Bool)intersectsMapRect:(CDStruct_90e2a262)arg1;

@end
