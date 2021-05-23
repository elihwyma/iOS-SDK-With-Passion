/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOURLCenterSpan : PBCodable

{
    double _latitudeDelta;
    double _latitude;
    double _longitudeDelta;
    double _longitude;
    struct {
        unsigned int has_latitudeDelta:1;
        unsigned int has_latitude:1;
        unsigned int has_longitudeDelta:1;
        unsigned int has_longitude:1;
    } _flags;
}

@property (nonatomic) _Bool hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) _Bool hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) _Bool hasLatitudeDelta;
@property (nonatomic) double latitudeDelta;
@property (nonatomic) _Bool hasLongitudeDelta;
@property (nonatomic) double longitudeDelta;

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

@end
