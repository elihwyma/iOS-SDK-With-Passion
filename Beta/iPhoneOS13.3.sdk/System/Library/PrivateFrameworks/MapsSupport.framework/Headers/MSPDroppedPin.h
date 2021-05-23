/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOMapRegion, PBUnknownFields;

@interface MSPDroppedPin : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _timestamp;
    int _floorOrdinal;
    GEOLatLng *_latLng;
    GEOMapRegion *_mapRegion;
    struct {
        unsigned int timestamp:1;
        unsigned int floorOrdinal:1;
    } _has;
}

@property (nonatomic, readonly) _Bool hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;
@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasFloorOrdinal;
@property (nonatomic) int floorOrdinal;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
