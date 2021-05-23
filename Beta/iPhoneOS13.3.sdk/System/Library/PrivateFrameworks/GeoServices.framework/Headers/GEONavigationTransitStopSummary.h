/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng;

@interface GEONavigationTransitStopSummary : PBCodable

{
    GEOLatLng *_coordinate;
    unsigned long long _stopID;
    struct {
        unsigned int has_stopID:1;
    } _flags;
}

@property (nonatomic) _Bool hasStopID;
@property (nonatomic) unsigned long long stopID;
@property (nonatomic, readonly) _Bool hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;

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
- (id)initWithTransitStop:(id)arg1;

@end
