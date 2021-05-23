/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h>

@class GEOPDClientRankingFeatureFunctionTypeDiscrete, GEOPDClientRankingFeatureFunctionTypeLinear, GEOPDClientRankingFeatureTypeResult, GEOPDClientRankingFeatureTypeSource, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDClientRankingFeatureMetadata : PBCodable

{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDClientRankingFeatureTypeResult *_featureTypeResult;
    GEOPDClientRankingFeatureTypeSource *_featureTypeSource;
    GEOPDClientRankingFeatureFunctionTypeDiscrete *_functionTypeDiscrete;
    GEOPDClientRankingFeatureFunctionTypeLinear *_functionTypeLinear;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _featureType;
    int _functionType;
    struct {
        unsigned int has_featureType:1;
        unsigned int has_functionType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_featureTypeResult:1;
        unsigned int read_featureTypeSource:1;
        unsigned int read_functionTypeDiscrete:1;
        unsigned int read_functionTypeLinear:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_featureTypeResult:1;
        unsigned int wrote_featureTypeSource:1;
        unsigned int wrote_functionTypeDiscrete:1;
        unsigned int wrote_functionTypeLinear:1;
        unsigned int wrote_featureType:1;
        unsigned int wrote_functionType:1;
    } _flags;
}

@property (nonatomic) _Bool hasFeatureType;
@property (nonatomic) int featureType;
@property (nonatomic, readonly) _Bool hasFeatureTypeSource;
@property (retain, nonatomic) GEOPDClientRankingFeatureTypeSource *featureTypeSource;
@property (nonatomic, readonly) _Bool hasFeatureTypeResult;
@property (retain, nonatomic) GEOPDClientRankingFeatureTypeResult *featureTypeResult;
@property (nonatomic) _Bool hasFunctionType;
@property (nonatomic) int functionType;
@property (nonatomic, readonly) _Bool hasFunctionTypeLinear;
@property (retain, nonatomic) GEOPDClientRankingFeatureFunctionTypeLinear *functionTypeLinear;
@property (nonatomic, readonly) _Bool hasFunctionTypeDiscrete;
@property (retain, nonatomic) GEOPDClientRankingFeatureFunctionTypeDiscrete *functionTypeDiscrete;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (_Bool)isValid:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (void)clearUnknownFields:(_Bool)arg1;
- (id)featureTypeAsString:(int)arg1;
- (int)StringAsFeatureType:(id)arg1;
- (void)_readFeatureTypeSource;
- (void)_readFeatureTypeResult;
- (void)_readFunctionTypeLinear;
- (void)_readFunctionTypeDiscrete;
- (id)functionTypeAsString:(int)arg1;
- (int)StringAsFunctionType:(id)arg1;

@end
