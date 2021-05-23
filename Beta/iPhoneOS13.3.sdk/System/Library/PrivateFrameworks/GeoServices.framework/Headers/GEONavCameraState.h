/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEONavCameraState : PBCodable

{
    int _distanceToManeuver;
    int _speedBucket;
    int _upcomingManeuverType;
    _Bool _isGroupedManeuver;
    struct {
        unsigned int has_distanceToManeuver:1;
        unsigned int has_speedBucket:1;
        unsigned int has_upcomingManeuverType:1;
        unsigned int has_isGroupedManeuver:1;
    } _flags;
}

@property (nonatomic) _Bool hasUpcomingManeuverType;
@property (nonatomic) int upcomingManeuverType;
@property (nonatomic) _Bool hasDistanceToManeuver;
@property (nonatomic) int distanceToManeuver;
@property (nonatomic) _Bool hasIsGroupedManeuver;
@property (nonatomic) _Bool isGroupedManeuver;
@property (nonatomic) _Bool hasSpeedBucket;
@property (nonatomic) int speedBucket;

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
- (id)upcomingManeuverTypeAsString:(int)arg1;
- (int)StringAsUpcomingManeuverType:(id)arg1;
- (id)distanceToManeuverAsString:(int)arg1;
- (int)StringAsDistanceToManeuver:(id)arg1;
- (id)speedBucketAsString:(int)arg1;
- (int)StringAsSpeedBucket:(id)arg1;

@end
