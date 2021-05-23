/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

@interface GEOPDResultDetourInfo : PBCodable

{
    PBUnknownFields *_unknownFields;
    int _detourDistance;
    int _detourTime;
    unsigned int _distanceToPlace;
    unsigned int _timeToPlace;
    struct {
        unsigned int has_detourDistance:1;
        unsigned int has_detourTime:1;
        unsigned int has_distanceToPlace:1;
        unsigned int has_timeToPlace:1;
    } _flags;
}

@property (nonatomic) _Bool hasDetourTime;
@property (nonatomic) int detourTime;
@property (nonatomic) _Bool hasTimeToPlace;
@property (nonatomic) unsigned int timeToPlace;
@property (nonatomic) _Bool hasDetourDistance;
@property (nonatomic) int detourDistance;
@property (nonatomic) _Bool hasDistanceToPlace;
@property (nonatomic) unsigned int distanceToPlace;
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
