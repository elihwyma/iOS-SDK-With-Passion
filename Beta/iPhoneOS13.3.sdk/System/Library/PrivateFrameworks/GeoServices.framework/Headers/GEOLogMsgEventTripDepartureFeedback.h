/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@interface GEOLogMsgEventTripDepartureFeedback : PBCodable

{
    double _distanceFromOrigin;
    double _timeFromOrigin;
    int _transportMode;
    struct {
        unsigned int has_distanceFromOrigin:1;
        unsigned int has_timeFromOrigin:1;
        unsigned int has_transportMode:1;
    } _flags;
}

@property (nonatomic) _Bool hasTransportMode;
@property (nonatomic) int transportMode;
@property (nonatomic) _Bool hasDistanceFromOrigin;
@property (nonatomic) double distanceFromOrigin;
@property (nonatomic) _Bool hasTimeFromOrigin;
@property (nonatomic) double timeFromOrigin;

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
- (id)transportModeAsString:(int)arg1;
- (int)StringAsTransportMode:(id)arg1;

@end
