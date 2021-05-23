/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOPDOrientedTilePosition : PBCodable

{
    int _altitude;
    unsigned int _pitch;
    unsigned int _roll;
    unsigned int _x;
    unsigned int _yaw;
    unsigned int _y;
    struct {
        unsigned int has_altitude:1;
        unsigned int has_pitch:1;
        unsigned int has_roll:1;
        unsigned int has_x:1;
        unsigned int has_yaw:1;
        unsigned int has_y:1;
    } _flags;
}

@property (nonatomic) _Bool hasX;
@property (nonatomic) unsigned int x;
@property (nonatomic) _Bool hasY;
@property (nonatomic) unsigned int y;
@property (nonatomic) _Bool hasAltitude;
@property (nonatomic) int altitude;
@property (nonatomic) _Bool hasYaw;
@property (nonatomic) unsigned int yaw;
@property (nonatomic) _Bool hasPitch;
@property (nonatomic) unsigned int pitch;
@property (nonatomic) _Bool hasRoll;
@property (nonatomic) unsigned int roll;

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
