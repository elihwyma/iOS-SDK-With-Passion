/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlace, GEOPDPlaceRequest, GEORPTransitLineTileInfo, GEORPTransitPoiCorrections, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPTransitPoiFeedback : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPTransitPoiCorrections *_corrections;
    NSMutableArray *_directionsRequests;
    NSMutableArray *_directionsResponses;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlace *_place;
    GEORPTransitLineTileInfo *_transitLineTileInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _correctionType;
    struct {
        unsigned int has_correctionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_corrections:1;
        unsigned int read_directionsRequests:1;
        unsigned int read_directionsResponses:1;
        unsigned int read_placeRequest:1;
        unsigned int read_place:1;
        unsigned int read_transitLineTileInfo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_corrections:1;
        unsigned int wrote_directionsRequests:1;
        unsigned int wrote_directionsResponses:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_place:1;
        unsigned int wrote_transitLineTileInfo:1;
        unsigned int wrote_correctionType:1;
    } _flags;
}

@property (nonatomic) _Bool hasCorrectionType;
@property (nonatomic) int correctionType;
@property (nonatomic, readonly) _Bool hasCorrections;
@property (retain, nonatomic) GEORPTransitPoiCorrections *corrections;
@property (nonatomic, readonly) _Bool hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (nonatomic, readonly) _Bool hasTransitLineTileInfo;
@property (retain, nonatomic) GEORPTransitLineTileInfo *transitLineTileInfo;
@property (nonatomic, readonly) _Bool hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (retain, nonatomic) NSMutableArray *directionsRequests;
@property (retain, nonatomic) NSMutableArray *directionsResponses;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;
+ (Class)directionsRequestType;
+ (Class)directionsResponseType;

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
- (void)_readPlace;
- (void)_readPlaceRequest;
- (void)_readCorrections;
- (void)_readDirectionsRequests;
- (void)_addNoFlagsDirectionsRequest:(id)arg1;
- (void)_readDirectionsResponses;
- (void)_addNoFlagsDirectionsResponse:(id)arg1;
- (void)_readTransitLineTileInfo;
- (unsigned long long)directionsRequestsCount;
- (void)clearDirectionsRequests;
- (id)directionsRequestAtIndex:(unsigned long long)arg1;
- (void)addDirectionsRequest:(id)arg1;
- (unsigned long long)directionsResponsesCount;
- (void)clearDirectionsResponses;
- (id)directionsResponseAtIndex:(unsigned long long)arg1;
- (void)addDirectionsResponse:(id)arg1;
- (id)correctionTypeAsString:(int)arg1;
- (int)StringAsCorrectionType:(id)arg1;

@end
