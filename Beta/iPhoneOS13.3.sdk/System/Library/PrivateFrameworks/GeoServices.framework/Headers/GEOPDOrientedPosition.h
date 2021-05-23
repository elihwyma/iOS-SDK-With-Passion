/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOPDOrientedPosition : PBCodable

{
    double _pitch;
    double _roll;
    double _x;
    double _yaw;
    double _y;
    double _z;
    struct {
        unsigned int has_pitch:1;
        unsigned int has_roll:1;
        unsigned int has_x:1;
        unsigned int has_yaw:1;
        unsigned int has_y:1;
        unsigned int has_z:1;
    } _flags;
}

@property (nonatomic) _Bool hasX;
@property (nonatomic) double x;
@property (nonatomic) _Bool hasY;
@property (nonatomic) double y;
@property (nonatomic) _Bool hasZ;
@property (nonatomic) double z;
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
