/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDGeographicCoordinate, GEOPDOrientedPosition, GEOPDPhotoPosition, PBDataReader;

@interface GEOPDStorefrontView : PBCodable

{
    PBDataReader *_reader;
    unsigned long long _imdataId;
    GEOPDGeographicCoordinate *_lookAtGeo;
    GEOPDOrientedPosition *_lookAt;
    GEOPDPhotoPosition *_photoPosition;
    GEOPDGeographicCoordinate *_viewpointGeo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_imdataId:1;
        unsigned int read_lookAtGeo:1;
        unsigned int read_lookAt:1;
        unsigned int read_photoPosition:1;
        unsigned int read_viewpointGeo:1;
        unsigned int wrote_imdataId:1;
        unsigned int wrote_lookAtGeo:1;
        unsigned int wrote_lookAt:1;
        unsigned int wrote_photoPosition:1;
        unsigned int wrote_viewpointGeo:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPhotoPosition;
@property (retain, nonatomic) GEOPDPhotoPosition *photoPosition;
@property (nonatomic) _Bool hasImdataId;
@property (nonatomic) unsigned long long imdataId;
@property (nonatomic, readonly) _Bool hasLookAt;
@property (retain, nonatomic) GEOPDOrientedPosition *lookAt;
@property (nonatomic, readonly) _Bool hasLookAtGeo;
@property (retain, nonatomic) GEOPDGeographicCoordinate *lookAtGeo;
@property (nonatomic, readonly) _Bool hasViewpointGeo;
@property (retain, nonatomic) GEOPDGeographicCoordinate *viewpointGeo;

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
- (void)_readPhotoPosition;
- (void)_readLookAt;
- (void)_readLookAtGeo;
- (void)_readViewpointGeo;

@end
