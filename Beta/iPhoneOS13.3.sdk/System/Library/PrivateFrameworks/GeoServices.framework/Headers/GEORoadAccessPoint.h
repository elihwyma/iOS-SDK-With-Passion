/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng, PBUnknownFields;

@interface GEORoadAccessPoint : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOLatLng *_location;
    int _drivingDirection;
    unsigned int _significance;
    int _transitDirection;
    int _walkingDirection;
    _Bool _isApproximate;
    struct {
        unsigned int has_drivingDirection:1;
        unsigned int has_significance:1;
        unsigned int has_transitDirection:1;
        unsigned int has_walkingDirection:1;
        unsigned int has_isApproximate:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) _Bool hasIsApproximate;
@property (nonatomic) _Bool isApproximate;
@property (nonatomic) _Bool hasWalkingDirection;
@property (nonatomic) int walkingDirection;
@property (nonatomic) _Bool hasDrivingDirection;
@property (nonatomic) int drivingDirection;
@property (nonatomic) _Bool hasTransitDirection;
@property (nonatomic) int transitDirection;
@property (nonatomic) _Bool hasSignificance;
@property (nonatomic) unsigned int significance;
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
- (id)walkingDirectionAsString:(int)arg1;
- (int)StringAsWalkingDirection:(id)arg1;
- (id)drivingDirectionAsString:(int)arg1;
- (int)StringAsDrivingDirection:(id)arg1;
- (id)transitDirectionAsString:(int)arg1;
- (int)StringAsTransitDirection:(id)arg1;

@end
