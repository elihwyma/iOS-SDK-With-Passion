/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOSharedNavETAInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _etaTimestamp;
    double _latitude;
    double _longitude;
    double _remainingDistance;
    double _remainingTime;
    struct {
        unsigned int has_etaTimestamp:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
        unsigned int has_remainingDistance:1;
        unsigned int has_remainingTime:1;
    } _flags;
}

@property (nonatomic) _Bool hasRemainingDistance;
@property (nonatomic) double remainingDistance;
@property (nonatomic) _Bool hasRemainingTime;
@property (nonatomic) double remainingTime;
@property (nonatomic) _Bool hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) _Bool hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) _Bool hasEtaTimestamp;
@property (nonatomic) double etaTimestamp;
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

@end
