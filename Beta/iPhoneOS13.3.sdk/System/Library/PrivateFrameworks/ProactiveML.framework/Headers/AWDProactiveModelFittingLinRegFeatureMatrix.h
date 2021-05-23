/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedSparseMatrix, AWDProactiveModelFittingSparseFloatMatrix;

@interface AWDProactiveModelFittingLinRegFeatureMatrix : PBCodable

{
    unsigned long long _timestamp;
    float _featureMatrixL2norm;
    float _featureMatrixScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatMatrix *_sparseFloatFeatureMatrix;
    AWDProactiveModelFittingQuantizedSparseMatrix *_sparseQuantizedFeatureMatrix;
    struct {
        unsigned int timestamp:1;
        unsigned int featureMatrixL2norm:1;
        unsigned int featureMatrixScaleFactor:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, readonly) _Bool hasSparseFloatFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatMatrix *sparseFloatFeatureMatrix;
@property (nonatomic, readonly) _Bool hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, readonly) _Bool hasSparseQuantizedFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseMatrix *sparseQuantizedFeatureMatrix;
@property (nonatomic) _Bool hasFeatureMatrixScaleFactor;
@property (nonatomic) float featureMatrixScaleFactor;
@property (nonatomic) _Bool hasFeatureMatrixL2norm;
@property (nonatomic) float featureMatrixL2norm;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)hasFeatureMatrix;
- (float)featureMatrixValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;

@end
