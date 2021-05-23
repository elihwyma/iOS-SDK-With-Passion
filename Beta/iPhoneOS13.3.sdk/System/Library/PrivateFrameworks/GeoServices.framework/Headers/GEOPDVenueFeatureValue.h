/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDFeatureBuilding, GEOPDFeaturePOI, GEOPDFeatureVenue, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDVenueFeatureValue : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDFeatureBuilding *_featureBuilding;
    GEOPDFeaturePOI *_featurePoi;
    GEOPDFeatureVenue *_featureVenue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_featureBuilding:1;
        unsigned int read_featurePoi:1;
        unsigned int read_featureVenue:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_featureBuilding:1;
        unsigned int wrote_featurePoi:1;
        unsigned int wrote_featureVenue:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasFeatureVenue;
@property (retain, nonatomic) GEOPDFeatureVenue *featureVenue;
@property (nonatomic, readonly) _Bool hasFeatureBuilding;
@property (retain, nonatomic) GEOPDFeatureBuilding *featureBuilding;
@property (nonatomic, readonly) _Bool hasFeaturePoi;
@property (retain, nonatomic) GEOPDFeaturePOI *featurePoi;
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
- (void)_readFeatureVenue;
- (void)_readFeatureBuilding;
- (void)_readFeaturePoi;

@end
