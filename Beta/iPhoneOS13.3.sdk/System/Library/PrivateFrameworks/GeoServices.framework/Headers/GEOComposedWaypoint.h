/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOMapItemStorage, GEOWaypointTyped, PBDataReader;

@interface GEOComposedWaypoint : PBCodable

{
    PBDataReader *_reader;
    GEOLatLng *_latLng;
    GEOMapItemStorage *_mapItemStorage;
    GEOWaypointTyped *_waypoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_latLng:1;
        unsigned int read_mapItemStorage:1;
        unsigned int read_waypoint:1;
        unsigned int wrote_latLng:1;
        unsigned int wrote_mapItemStorage:1;
        unsigned int wrote_waypoint:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasWaypoint;
@property (retain, nonatomic) GEOWaypointTyped *waypoint;
@property (nonatomic, readonly) _Bool hasMapItemStorage;
@property (retain, nonatomic) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, readonly) _Bool hasLatLng;
@property (retain, nonatomic) GEOLatLng *latLng;

+ (_Bool)isValid:(id)arg1;
+ (void)composedWaypointForMapServiceResponse:(id)arg1 clientAttributes:(id)arg2 error:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 auditToken:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 clientResolvedCompletionHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6 networkActivityHandler:(CDUnknownBlockType)arg7;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 clientAttributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForMapItemToRefine:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForIdentifier:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForLocation:(id)arg1 mapItem:(id)arg2 traits:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForID:(unsigned long long)arg1 resultsProviderID:(int)arg2 contentProvider:(id)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 networkActivityHandler:(CDUnknownBlockType)arg7;
+ (id)composedWaypointForCurrentLocation:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;
+ (id)composedWaypointForAddressString:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForSearchString:(id)arg1 completionItem:(id)arg2 traits:(id)arg3 clientAttributes:(id)arg4 completionHandler:(CDUnknownBlockType)arg5 networkActivityHandler:(CDUnknownBlockType)arg6;
+ (id)composedWaypointForMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForIncompleteMapItem:(id)arg1 traits:(id)arg2 clientAttributes:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 networkActivityHandler:(CDUnknownBlockType)arg5;
+ (id)composedWaypointForTransitID:(unsigned long long)arg1 coordinate:(CDStruct_c3b9c2ee)arg2 isCurrentLocation:(_Bool)arg3 traits:(id)arg4 clientAttributes:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 networkActivityHandler:(CDUnknownBlockType)arg7;
+ (id)composedWaypointForWaypointTyped:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 networkActivityHandler:(CDUnknownBlockType)arg3;

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
- (id)timezone;
- (void)readAll:(_Bool)arg1;
- (void)_readLatLng;
- (id)geoMapItem;
- (id)initWithLocation:(id)arg1 isCurrentLocation:(_Bool)arg2;
- (id)initWithMapItem:(id)arg1;
- (_Bool)isSameAs:(id)arg1 comparisonCriteria:(unsigned long long)arg2;
- (id)_muidCandidatesForComparison;
- (id)_locationCandidatesForComparison;
- (id)_addressCandidatesForComparison;
- (id)_regionCandidatesForContainment;
- (_Bool)isSameAs:(id)arg1;
- (_Bool)isCurrentLocation;
- (void)setIsCurrentLocation:(_Bool)arg1;
- (void)_readWaypoint;
- (void)_readMapItemStorage;
- (_Bool)isLocationWaypointType;
- (id)bestLatLng;
- (double)distanceToWaypoint:(id)arg1;

@end
