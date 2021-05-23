/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDFeatureIdGeocodingParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _featureId;
    GEOLatLng *_location;
    int _formattedAddressType;
    struct {
        unsigned int has_featureId:1;
        unsigned int has_formattedAddressType:1;
    } _flags;
}

@property (nonatomic) _Bool hasFeatureId;
@property (nonatomic) unsigned long long featureId;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) _Bool hasFormattedAddressType;
@property (nonatomic) int formattedAddressType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)formattedAddressTypeAsString:(int)arg1;
- (int)StringAsFormattedAddressType:(id)arg1;

@end
