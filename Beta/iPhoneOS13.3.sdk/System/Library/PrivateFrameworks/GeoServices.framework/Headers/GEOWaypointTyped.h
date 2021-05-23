/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOWaypointID, GEOWaypointLocation, GEOWaypointPlace, PBDataReader, PBUnknownFields;

@interface GEOWaypointTyped : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOWaypointID *_waypointId;
    GEOWaypointLocation *_waypointLocation;
    GEOWaypointPlace *_waypointPlace;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _waypointType;
    _Bool _isCurrentLocation;
    _Bool _isLocationOfInterest;
    struct {
        unsigned int has_waypointType:1;
        unsigned int has_isCurrentLocation:1;
        unsigned int has_isLocationOfInterest:1;
        unsigned int read_unknownFields:1;
        unsigned int read_waypointId:1;
        unsigned int read_waypointLocation:1;
        unsigned int read_waypointPlace:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_waypointId:1;
        unsigned int wrote_waypointLocation:1;
        unsigned int wrote_waypointPlace:1;
        unsigned int wrote_waypointType:1;
        unsigned int wrote_isCurrentLocation:1;
        unsigned int wrote_isLocationOfInterest:1;
    } _flags;
}

@property (nonatomic) _Bool hasWaypointType;
@property (nonatomic) int waypointType;
@property (nonatomic, readonly) _Bool hasWaypointId;
@property (retain, nonatomic) GEOWaypointID *waypointId;
@property (nonatomic, readonly) _Bool hasWaypointPlace;
@property (retain, nonatomic) GEOWaypointPlace *waypointPlace;
@property (nonatomic, readonly) _Bool hasWaypointLocation;
@property (retain, nonatomic) GEOWaypointLocation *waypointLocation;
@property (nonatomic) _Bool hasIsCurrentLocation;
@property (nonatomic) _Bool isCurrentLocation;
@property (nonatomic) _Bool hasIsLocationOfInterest;
@property (nonatomic) _Bool isLocationOfInterest;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

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
- (void)clearSensitiveFields;
- (void)clearLocations;
- (void)_readWaypointId;
- (void)_readWaypointPlace;
- (void)_readWaypointLocation;
- (id)waypointTypeAsString:(int)arg1;
- (int)StringAsWaypointType:(id)arg1;
- (id)locationForWaypoint;

@end
