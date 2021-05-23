/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse, NSString, PBDataReader;

@interface GEORPPlaceInfo : PBCodable

{
    PBDataReader *_reader;
    GEOPDPlaceRequest *_placeRequest;
    GEOPDPlaceResponse *_placeResponse;
    NSString *_sourceApplication;
    NSString *_sourceUrl;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_placeRequest:1;
        unsigned int read_placeResponse:1;
        unsigned int read_sourceApplication:1;
        unsigned int read_sourceUrl:1;
        unsigned int wrote_placeRequest:1;
        unsigned int wrote_placeResponse:1;
        unsigned int wrote_sourceApplication:1;
        unsigned int wrote_sourceUrl:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPlaceRequest;
@property (retain, nonatomic) GEOPDPlaceRequest *placeRequest;
@property (nonatomic, readonly) _Bool hasPlaceResponse;
@property (retain, nonatomic) GEOPDPlaceResponse *placeResponse;
@property (nonatomic, readonly) _Bool hasSourceApplication;
@property (retain, nonatomic) NSString *sourceApplication;
@property (nonatomic, readonly) _Bool hasSourceUrl;
@property (retain, nonatomic) NSString *sourceUrl;

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
- (void)_readSourceApplication;
- (void)_readSourceUrl;
- (void)_readPlaceRequest;
- (void)_readPlaceResponse;
- (void)clearLocations;
- (void)clearSessionId;
- (void)_clearLocationsFromPlaceRequest;
- (void)_clearLocationsFromPlaceResponse;

@end
