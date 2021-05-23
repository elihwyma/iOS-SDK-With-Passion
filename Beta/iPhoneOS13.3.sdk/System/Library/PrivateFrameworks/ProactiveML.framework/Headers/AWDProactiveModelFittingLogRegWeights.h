/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLogRegWeights : PBCodable

{
    unsigned long long _timestamp;
    AWDProactiveModelFittingQuantizedDenseVector *_denseQuantizedWeights;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatWeights;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedWeights;
    float _weightsL2norm;
    float _weightsScaleFactor;
    struct {
        unsigned int timestamp:1;
        unsigned int weightsL2norm:1;
        unsigned int weightsScaleFactor:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, readonly) _Bool hasSparseFloatWeights;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatWeights;
@property (nonatomic, readonly) _Bool hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, readonly) _Bool hasEvaluationMetrics;
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (nonatomic, readonly) _Bool hasSparseQuantizedWeights;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedWeights;
@property (nonatomic) _Bool hasWeightsScaleFactor;
@property (nonatomic) float weightsScaleFactor;
@property (nonatomic) _Bool hasWeightsL2norm;
@property (nonatomic) float weightsL2norm;
@property (nonatomic, readonly) _Bool hasDenseQuantizedWeights;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedWeights;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)hasWeights;

@end
