/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOLatLng;

@interface GEOLogMsgEventParkedCar : PBCodable

{
    double _locationUncertainty;
    GEOLatLng *_location;
    double _timestamp;
    struct {
        unsigned int has_locationUncertainty:1;
        unsigned int has_timestamp:1;
    } _flags;
}

@property (nonatomic, readonly) _Bool hasLocation;
@property (retain, nonatomic) GEOLatLng *location;
@property (nonatomic) _Bool hasLocationUncertainty;
@property (nonatomic) double locationUncertainty;
@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) double timestamp;

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
