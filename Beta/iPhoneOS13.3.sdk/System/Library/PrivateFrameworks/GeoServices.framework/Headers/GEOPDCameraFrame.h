/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOPDCameraFrame : PBCodable

{
    double _altitude;
    double _latitude;
    double _longitude;
    double _pitch;
    double _roll;
    double _yaw;
    CDStruct_3c2347a5 _flags;
}

@property (nonatomic) _Bool hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) _Bool hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) _Bool hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) _Bool hasYaw;
@property (nonatomic) double yaw;
@property (nonatomic) _Bool hasPitch;
@property (nonatomic) double pitch;
@property (nonatomic) _Bool hasRoll;
@property (nonatomic) double roll;

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
