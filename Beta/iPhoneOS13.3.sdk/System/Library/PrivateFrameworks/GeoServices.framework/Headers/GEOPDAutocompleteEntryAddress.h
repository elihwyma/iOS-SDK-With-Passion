/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, GEOPDMapsIdentifier, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAutocompleteEntryAddress : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLatLng *_center;
    double _disambiguationRadiusMeters;
    double _distance;
    GEOPDMapsIdentifier *_mapsId;
    unsigned long long _opaqueGeoId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _placeType;
    struct {
        unsigned int has_disambiguationRadiusMeters:1;
        unsigned int has_distance:1;
        unsigned int has_opaqueGeoId:1;
        unsigned int has_placeType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_center:1;
        unsigned int read_mapsId:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_center:1;
        unsigned int wrote_disambiguationRadiusMeters:1;
        unsigned int wrote_distance:1;
        unsigned int wrote_mapsId:1;
        unsigned int wrote_opaqueGeoId:1;
        unsigned int wrote_placeType:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasCenter;
@property (retain, nonatomic) GEOLatLng *center;
@property (nonatomic) _Bool hasOpaqueGeoId;
@property (nonatomic) unsigned long long opaqueGeoId;
@property (nonatomic) _Bool hasDistance;
@property (nonatomic) double distance;
@property (nonatomic) _Bool hasPlaceType;
@property (nonatomic) int placeType;
@property (nonatomic) _Bool hasDisambiguationRadiusMeters;
@property (nonatomic) double disambiguationRadiusMeters;
@property (nonatomic, readonly) _Bool hasMapsId;
@property (retain, nonatomic) GEOPDMapsIdentifier *mapsId;
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
- (void)_readCenter;
- (void)_readMapsId;
- (id)placeTypeAsString:(int)arg1;
- (int)StringAsPlaceType:(id)arg1;

@end
