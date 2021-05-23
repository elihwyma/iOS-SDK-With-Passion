/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOTimeCheckpoints, PBUnknownFields;

@interface GEOETAStep : PBCodable

{
    PBUnknownFields *_unknownFields;
    GEOTimeCheckpoints *_timeCheckpoints;
    unsigned int _distanceRemaining;
    unsigned int _expectedTime;
    unsigned int _stepID;
    int _zilchPointIndex;
    struct {
        unsigned int has_distanceRemaining:1;
        unsigned int has_expectedTime:1;
        unsigned int has_stepID:1;
        unsigned int has_zilchPointIndex:1;
    } _flags;
}

@property (nonatomic) _Bool hasDistanceRemaining;
@property (nonatomic) unsigned int distanceRemaining;
@property (nonatomic) _Bool hasStepID;
@property (nonatomic) unsigned int stepID;
@property (nonatomic) _Bool hasExpectedTime;
@property (nonatomic) unsigned int expectedTime;
@property (nonatomic) _Bool hasZilchPointIndex;
@property (nonatomic) int zilchPointIndex;
@property (nonatomic, readonly) _Bool hasTimeCheckpoints;
@property (retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints;
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
