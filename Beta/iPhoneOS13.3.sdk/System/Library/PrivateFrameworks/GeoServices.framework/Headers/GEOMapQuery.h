/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, GEOMapRegion, GEOPlaceSearchRequest, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOMapQuery : PBCodable

{
    PBDataReader *_reader;
    struct GEOSessionID _sessionID;
    GEOMapRegion *_mapRegion;
    GEOPlaceSearchRequest *_placeSearchRequest;
    NSString *_query;
    GEOLocation *_userLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _clientImgFmt;
    int _clientImgMaxHeight;
    int _clientImgMaxWidth;
    int _mapCenterX;
    int _mapCenterY;
    int _mapSpanX;
    int _mapSpanY;
    int _requestType;
    int _tilesizeX;
    int _tilesizeY;
    int _zoomlevel;
    struct {
        unsigned int has_sessionID:1;
        unsigned int has_clientImgFmt:1;
        unsigned int has_clientImgMaxHeight:1;
        unsigned int has_clientImgMaxWidth:1;
        unsigned int has_mapCenterX:1;
        unsigned int has_mapCenterY:1;
        unsigned int has_mapSpanX:1;
        unsigned int has_mapSpanY:1;
        unsigned int has_requestType:1;
        unsigned int has_tilesizeX:1;
        unsigned int has_tilesizeY:1;
        unsigned int has_zoomlevel:1;
        unsigned int read_mapRegion:1;
        unsigned int read_placeSearchRequest:1;
        unsigned int read_query:1;
        unsigned int read_userLocation:1;
        unsigned int wrote_sessionID:1;
        unsigned int wrote_mapRegion:1;
        unsigned int wrote_placeSearchRequest:1;
        unsigned int wrote_query:1;
        unsigned int wrote_userLocation:1;
        unsigned int wrote_clientImgFmt:1;
        unsigned int wrote_clientImgMaxHeight:1;
        unsigned int wrote_clientImgMaxWidth:1;
        unsigned int wrote_mapCenterX:1;
        unsigned int wrote_mapCenterY:1;
        unsigned int wrote_mapSpanX:1;
        unsigned int wrote_mapSpanY:1;
        unsigned int wrote_requestType:1;
        unsigned int wrote_tilesizeX:1;
        unsigned int wrote_tilesizeY:1;
        unsigned int wrote_zoomlevel:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasQuery;
@property (retain, nonatomic) NSString *query;
@property (nonatomic) _Bool hasRequestType;
@property (nonatomic) int requestType;
@property (nonatomic) _Bool hasMapCenterX;
@property (nonatomic) int mapCenterX;
@property (nonatomic) _Bool hasMapCenterY;
@property (nonatomic) int mapCenterY;
@property (nonatomic) _Bool hasMapSpanX;
@property (nonatomic) int mapSpanX;
@property (nonatomic) _Bool hasMapSpanY;
@property (nonatomic) int mapSpanY;
@property (nonatomic) _Bool hasZoomlevel;
@property (nonatomic) int zoomlevel;
@property (nonatomic) _Bool hasClientImgFmt;
@property (nonatomic) int clientImgFmt;
@property (nonatomic) _Bool hasTilesizeX;
@property (nonatomic) int tilesizeX;
@property (nonatomic) _Bool hasTilesizeY;
@property (nonatomic) int tilesizeY;
@property (nonatomic) _Bool hasClientImgMaxWidth;
@property (nonatomic) int clientImgMaxWidth;
@property (nonatomic) _Bool hasClientImgMaxHeight;
@property (nonatomic) int clientImgMaxHeight;
@property (nonatomic, readonly) _Bool hasMapRegion;
@property (retain, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) _Bool hasUserLocation;
@property (retain, nonatomic) GEOLocation *userLocation;
@property (nonatomic) _Bool hasSessionID;
@property (nonatomic) struct GEOSessionID sessionID;
@property (nonatomic, readonly) _Bool hasPlaceSearchRequest;
@property (retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;

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
- (void)_readMapRegion;
- (void)_readQuery;
- (void)_readUserLocation;
- (void)_readPlaceSearchRequest;
- (id)requestTypeAsString:(int)arg1;
- (int)StringAsRequestType:(id)arg1;
- (id)clientImgFmtAsString:(int)arg1;
- (int)StringAsClientImgFmt:(id)arg1;

@end
