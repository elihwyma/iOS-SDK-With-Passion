/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLocation, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGroundViewLabelParameters : PBCodable

{
    PBUnknownFields *_unknownFields;
    unsigned long long _locationId;
    GEOLocation *_location;
    struct {
        unsigned int has_locationId:1;
    } _flags;
}

@property (nonatomic) _Bool hasLocationId;
@property (nonatomic) unsigned long long locationId;
@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLocation *location;
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
- (void)clearSensitiveFields;

@end
