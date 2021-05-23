/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEORPUserSearchInput, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPDirectionsFeedbackContext : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    NSMutableArray *_directionsWaypointPlaceInfos;
    GEORPUserSearchInput *_endWaypoint;
    GEORPUserSearchInput *_startWaypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_directionsRequests:1;
        unsigned int read_directionsResponses:1;
        unsigned int read_directionsWaypointPlaceInfos:1;
        unsigned int read_endWaypoint:1;
        unsigned int read_startWaypoint:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_directionsRequests:1;
        unsigned int wrote_directionsResponses:1;
        unsigned int wrote_directionsWaypointPlaceInfos:1;
        unsigned int wrote_endWaypoint:1;
        unsigned int wrote_startWaypoint:1;
    } _flags;
}

@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (retain, nonatomic) NSMutableArray *directionsWaypointPlaceInfos;
@property (nonatomic, readonly) _Bool hasStartWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *startWaypoint;
@property (nonatomic, readonly) _Bool hasEndWaypoint;
@property (retain, nonatomic) GEORPUserSearchInput *endWaypoint;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)directionsRequestType;
+ (Class)directionsResponseType;
+ (Class)directionsWaypointPlaceInfoType;

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
- (void)_readDirectionsRequests;
- (void)_addNoFlagsDirectionsRequest:(id)arg1;
- (void)_readDirectionsResponses;
- (void)_addNoFlagsDirectionsResponse:(id)arg1;
- (void)_readDirectionsWaypointPlaceInfos;
- (void)_addNoFlagsDirectionsWaypointPlaceInfo:(id)arg1;
- (unsigned long long)directionsRequestsCount;
- (void)clearDirectionsRequests;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)clearDirectionsResponses;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (unsigned long long)directionsWaypointPlaceInfosCount;
- (void)clearDirectionsWaypointPlaceInfos;
- (id)directionsWaypointPlaceInfoAtIndex:(unsigned long long)arg1;
- (void)addDirectionsWaypointPlaceInfo:(id)arg1;
- (void)_readStartWaypoint;
- (void)_readEndWaypoint;

@end
