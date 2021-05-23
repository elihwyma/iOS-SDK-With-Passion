/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureFunctionTypeLinear : PBCodable

{
    PBUnknownFields *_unknownFields;
    float _featureMaxRelativeValue;
    float _featureMeanValue;
    float _featureWeight;
    struct {
        unsigned int has_featureMaxRelativeValue:1;
        unsigned int has_featureMeanValue:1;
        unsigned int has_featureWeight:1;
    } _flags;
}

@property (nonatomic) _Bool hasFeatureWeight;
@property (nonatomic) float featureWeight;
@property (nonatomic) _Bool hasFeatureMaxRelativeValue;
@property (nonatomic) float featureMaxRelativeValue;
@property (nonatomic) _Bool hasFeatureMeanValue;
@property (nonatomic) float featureMeanValue;
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
