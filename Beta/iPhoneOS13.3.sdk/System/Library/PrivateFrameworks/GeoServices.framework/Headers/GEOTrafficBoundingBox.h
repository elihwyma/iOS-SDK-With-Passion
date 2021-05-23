/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOTrafficBoundingBox : PBCodable

{
    double _east;
    double _north;
    double _south;
    double _west;
    struct {
        unsigned int has_east:1;
        unsigned int has_north:1;
        unsigned int has_south:1;
        unsigned int has_west:1;
    } _flags;
}

@property (nonatomic) _Bool hasSouth;
@property (nonatomic) double south;
@property (nonatomic) _Bool hasWest;
@property (nonatomic) double west;
@property (nonatomic) _Bool hasNorth;
@property (nonatomic) double north;
@property (nonatomic) _Bool hasEast;
@property (nonatomic) double east;

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
