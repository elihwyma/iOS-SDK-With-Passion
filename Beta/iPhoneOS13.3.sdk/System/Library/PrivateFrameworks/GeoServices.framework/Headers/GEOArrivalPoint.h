/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, PBUnknownFields;

@interface GEOArrivalPoint : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOLatLng *_point;
    unsigned int _radius;
    struct {
        unsigned int has_radius:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasPoint;
@property (retain, nonatomic) GEOLatLng *point;
@property (nonatomic) _Bool hasRadius;
@property (nonatomic) unsigned int radius;
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

@end
