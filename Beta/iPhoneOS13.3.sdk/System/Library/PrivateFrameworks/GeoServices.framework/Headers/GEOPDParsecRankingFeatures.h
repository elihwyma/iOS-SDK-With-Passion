/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDParsecRankingFeatures : PBCodable

{
    PBUnknownFields *_unknownFields;
    double _distanceFromContainment;
    double _distanceFromDeviceLocation;
    double _expectedCtr;
    _Bool _isRecallMismatch;
    _Bool _isSpellCorrected;
    struct {
        unsigned int has_distanceFromContainment:1;
        unsigned int has_distanceFromDeviceLocation:1;
        unsigned int has_expectedCtr:1;
        unsigned int has_isRecallMismatch:1;
        unsigned int has_isSpellCorrected:1;
    } _flags;
}

@property (nonatomic) _Bool hasExpectedCtr;
@property (nonatomic) double expectedCtr;
@property (nonatomic) _Bool hasDistanceFromDeviceLocation;
@property (nonatomic) double distanceFromDeviceLocation;
@property (nonatomic) _Bool hasDistanceFromContainment;
@property (nonatomic) double distanceFromContainment;
@property (nonatomic) _Bool hasIsSpellCorrected;
@property (nonatomic) _Bool isSpellCorrected;
@property (nonatomic) _Bool hasIsRecallMismatch;
@property (nonatomic) _Bool isRecallMismatch;
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
