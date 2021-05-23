/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/Swift-Protocol.h>

@interface HDCodableLocationDatum : PBCodable <Swift>

{
    double _altitude;
    double _course;
    double _horizontalAccuracy;
    double _latitude;
    double _longitude;
    double _speed;
    double _timestamp;
    double _verticalAccuracy;
    struct {
        unsigned int altitude:1;
        unsigned int course:1;
        unsigned int horizontalAccuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int speed:1;
        unsigned int timestamp:1;
        unsigned int verticalAccuracy:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) _Bool hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) _Bool hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) _Bool hasAltitude;
@property (nonatomic) double altitude;
@property (nonatomic) _Bool hasSpeed;
@property (nonatomic) double speed;
@property (nonatomic) _Bool hasCourse;
@property (nonatomic) double course;
@property (nonatomic) _Bool hasHorizontalAccuracy;
@property (nonatomic) double horizontalAccuracy;
@property (nonatomic) _Bool hasVerticalAccuracy;
@property (nonatomic) double verticalAccuracy;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
