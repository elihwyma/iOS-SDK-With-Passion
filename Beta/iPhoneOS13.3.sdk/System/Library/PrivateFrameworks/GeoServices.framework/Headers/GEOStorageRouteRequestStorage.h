/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOURLRouteHandle, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOStorageRouteRequestStorage : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOURLRouteHandle *_routeHandle;
    NSMutableArray *_waypoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _transportType;
    struct {
        unsigned int has_transportType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeHandle:1;
        unsigned int read_waypoints:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_routeHandle:1;
        unsigned int wrote_waypoints:1;
        unsigned int wrote_transportType:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *waypoints;
@property (nonatomic) _Bool hasTransportType;
@property (nonatomic) int transportType;
@property (nonatomic, readonly) _Bool hasRouteHandle;
@property (retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)waypointsType;

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
- (void)_readRouteHandle;
- (id)transportTypeAsString:(int)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)_readWaypoints;
- (void)_addNoFlagsWaypoints:(id)arg1;
- (unsigned long long)waypointsCount;
- (void)clearWaypoints;
- (id)waypointsAtIndex:(unsigned long long)arg1;
- (void)addWaypoints:(id)arg1;

@end
