/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString, PBDataReader;

@interface GEORPCorrectedSearch : PBCodable

{
    PBDataReader *_reader;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _correctedSearchResultIndex;
    unsigned int _originalSearchResultIndex;
    struct {
        unsigned int has_correctedSearchResultIndex:1;
        unsigned int has_originalSearchResultIndex:1;
        unsigned int read_placeRequest:1;
        unsigned int read_placeResponse:1;
        unsigned int read_placeSearchRequest:1;
        unsigned int read_placeSearchResponse:1;
        unsigned int read_preferredSearchDisplayLocation:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_placeResponse:1;
        unsigned int wrote_placeSearchRequest:1;
        unsigned int wrote_placeSearchResponse:1;
        unsigned int wrote_preferredSearchDisplayLocation:1;
        unsigned int wrote_correctedSearchResultIndex:1;
        unsigned int wrote_originalSearchResultIndex:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPlaceSearchRequest;
@property (retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest;
@property (nonatomic, readonly) _Bool hasPlaceSearchResponse;
@property (retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse;
@property (nonatomic) _Bool hasOriginalSearchResultIndex;
@property (nonatomic) unsigned int originalSearchResultIndex;
@property (nonatomic) _Bool hasCorrectedSearchResultIndex;
@property (nonatomic) unsigned int correctedSearchResultIndex;
@property (nonatomic, readonly) _Bool hasPreferredSearchDisplayLocation;
@property (retain, nonatomic) NSString *preferredSearchDisplayLocation;
@property (nonatomic, readonly) _Bool hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, readonly) _Bool hasPlaceResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *placeResponse;

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
- (void)_readPlaceSearchRequest;
- (void)_readPlaceSearchResponse;
- (void)_readPlaceRequest;
- (void)_readPlaceResponse;
- (void)_readPreferredSearchDisplayLocation;
- (_Bool)containsReportableData;

@end
