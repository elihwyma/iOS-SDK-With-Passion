/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOMapRegion, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOWaypointPlace : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    GEOMapRegion *_mapRegion;
    NSMutableArray *_roadAccessPoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_mapRegion:1;
        unsigned int read_roadAccessPoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_center:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_roadAccessPoints:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (retain, nonatomic) NSMutableArray *roadAccessPoints;
@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)roadAccessPointType;

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
- (void)_readCenter;
- (void)_readRoadAccessPoints;
- (void)_addNoFlagsRoadAccessPoint:(id)arg1;
- (void)_readMapRegion;
- (unsigned long long)roadAccessPointsCount;
- (void)clearRoadAccessPoints;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (void)addRoadAccessPoint:(id)arg1;

@end
