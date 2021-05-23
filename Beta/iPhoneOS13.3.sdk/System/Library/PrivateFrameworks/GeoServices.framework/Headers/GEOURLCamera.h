/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOURLCamera : PBCodable

{
    double _altitude;
    double _heading;
    double _latitude;
    double _longitude;
    double _pitch;
    struct {
        unsigned int has_altitude:1;
        unsigned int has_heading:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
        unsigned int has_pitch:1;
    } _flags;
}

@property (nonatomic) _Bool hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) _Bool hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) _Bool hasHeading;
@property (nonatomic) double heading;
@property (nonatomic) _Bool hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) _Bool hasAltitude;
@property (nonatomic) double altitude;

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
