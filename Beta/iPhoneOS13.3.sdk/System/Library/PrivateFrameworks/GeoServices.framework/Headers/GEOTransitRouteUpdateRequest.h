/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBRequest.h>

@class GEOAdditionalEnabledMarkets, GEOClientCapabilities, GEOPDABClientDatasetMetadata, GEORouteAttributes, NSArray, NSData, NSMutableArray, NSString, NSUUID, PBDataReader, PBUnknownFields;

@interface GEOTransitRouteUpdateRequest : PBRequest

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDABClientDatasetMetadata *_abClientMetadata;
    NSData *_directionsResponseId;
    GEOAdditionalEnabledMarkets *_originalAdditionalEnabledMarkets;
    GEOClientCapabilities *_originalClientCapabilities;
    GEORouteAttributes *_originalRouteAttributes;
    NSMutableArray *_originalWaypoints;
    NSString *_requestingAppId;
    NSMutableArray *_routeIdentifiers;
    NSMutableArray *_serviceTags;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_abClientMetadata:1;
        unsigned int read_directionsResponseId:1;
        unsigned int read_originalAdditionalEnabledMarkets:1;
        unsigned int read_originalClientCapabilities:1;
        unsigned int read_originalRouteAttributes:1;
        unsigned int read_originalWaypoints:1;
        unsigned int read_requestingAppId:1;
        unsigned int read_routeIdentifiers:1;
        unsigned int read_serviceTags:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_abClientMetadata:1;
        unsigned int wrote_directionsResponseId:1;
        unsigned int wrote_originalAdditionalEnabledMarkets:1;
        unsigned int wrote_originalClientCapabilities:1;
        unsigned int wrote_originalRouteAttributes:1;
        unsigned int wrote_originalWaypoints:1;
        unsigned int wrote_requestingAppId:1;
        unsigned int wrote_routeIdentifiers:1;
        unsigned int wrote_serviceTags:1;
    } _flags;
}

@property (nonatomic, readonly) NSUUID *clientRouteID;
@property (nonatomic, readonly) NSArray *allClientRouteIDs;
@property (retain, nonatomic) NSMutableArray *routeIdentifiers;
@property (nonatomic, readonly) _Bool hasOriginalClientCapabilities;
@property (retain, nonatomic) GEOClientCapabilities *originalClientCapabilities;
@property (nonatomic, readonly) _Bool hasAbClientMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *abClientMetadata;
@property (retain, nonatomic) NSMutableArray *originalWaypoints;
@property (nonatomic, readonly) _Bool hasOriginalRouteAttributes;
@property (retain, nonatomic) GEORouteAttributes *originalRouteAttributes;
@property (nonatomic, readonly) _Bool hasOriginalAdditionalEnabledMarkets;
@property (retain, nonatomic) GEOAdditionalEnabledMarkets *originalAdditionalEnabledMarkets;
@property (nonatomic, readonly) _Bool hasDirectionsResponseId;
@property (retain, nonatomic) NSData *directionsResponseId;
@property (nonatomic, readonly) _Bool hasRequestingAppId;
@property (retain, nonatomic) NSString *requestingAppId;
@property (retain, nonatomic) NSMutableArray *serviceTags;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)serviceTagType;
+ (id)mergedTransitRouteUpdateRequests:(id)arg1;
+ (id)splitTransitRouteUpdateRequests:(id)arg1;
+ (Class)routeIdentifierType;
+ (Class)originalWaypointType;
+ (id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg1 directionsResponse:(id)arg2;
+ (id)transitRouteUpdateRequestWithDirectionsRequest:(id)arg1 directionsResponse:(id)arg2 composedRoutes:(id)arg3;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (void)clearSensitiveFields;
- (void)_readAbClientMetadata;
- (void)_readServiceTags;
- (void)_addNoFlagsServiceTag:(id)arg1;
- (unsigned long long)serviceTagsCount;
- (void)clearServiceTags;
- (id)serviceTagAtIndex:(unsigned long long)arg1;
- (void)addServiceTag:(id)arg1;
- (void)clearRouteIdentifiers;
- (void)addRouteIdentifier:(id)arg1;
- (void)_readRouteIdentifiers;
- (void)_addNoFlagsRouteIdentifier:(id)arg1;
- (void)_readOriginalClientCapabilities;
- (void)_readOriginalWaypoints;
- (void)_addNoFlagsOriginalWaypoint:(id)arg1;
- (void)_readOriginalRouteAttributes;
- (void)_readOriginalAdditionalEnabledMarkets;
- (void)_readDirectionsResponseId;
- (void)_readRequestingAppId;
- (unsigned long long)routeIdentifiersCount;
- (id)routeIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)originalWaypointsCount;
- (void)clearOriginalWaypoints;
- (id)originalWaypointAtIndex:(unsigned long long)arg1;
- (void)addOriginalWaypoint:(id)arg1;

@end
