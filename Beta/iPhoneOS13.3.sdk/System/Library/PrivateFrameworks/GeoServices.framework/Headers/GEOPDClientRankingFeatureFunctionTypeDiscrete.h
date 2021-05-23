/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable

{
    PBUnknownFields *_unknownFields;
    float _featureValueThresholdHigh;
    float _featureValueThresholdLow;
    float _featureWeightHigh;
    float _featureWeightLow;
    struct {
        unsigned int has_featureValueThresholdHigh:1;
        unsigned int has_featureValueThresholdLow:1;
        unsigned int has_featureWeightHigh:1;
        unsigned int has_featureWeightLow:1;
    } _flags;
}

@property (nonatomic) _Bool hasFeatureValueThresholdLow;
@property (nonatomic) float featureValueThresholdLow;
@property (nonatomic) _Bool hasFeatureWeightLow;
@property (nonatomic) float featureWeightLow;
@property (nonatomic) _Bool hasFeatureValueThresholdHigh;
@property (nonatomic) float featureValueThresholdHigh;
@property (nonatomic) _Bool hasFeatureWeightHigh;
@property (nonatomic) float featureWeightHigh;
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
