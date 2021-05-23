/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLogRegGradient : PBCodable

{
    unsigned long long _iteration;
    unsigned long long _timestamp;
    AWDProactiveModelFittingQuantizedDenseVector *_denseQuantizedGradient;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    float _gradientL2norm;
    float _gradientScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatGradient;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedGradient;
    struct {
        unsigned int iteration:1;
        unsigned int timestamp:1;
        unsigned int gradientL2norm:1;
        unsigned int gradientScaleFactor:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, readonly) _Bool hasSparseFloatGradient;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatGradient;
@property (nonatomic, readonly) _Bool hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, readonly) _Bool hasEvaluationMetrics;
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (nonatomic) _Bool hasIteration;
@property (nonatomic) unsigned long long iteration;
@property (nonatomic, readonly) _Bool hasSparseQuantizedGradient;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedGradient;
@property (nonatomic) _Bool hasGradientScaleFactor;
@property (nonatomic) float gradientScaleFactor;
@property (nonatomic) _Bool hasGradientL2norm;
@property (nonatomic) float gradientL2norm;
@property (nonatomic, readonly) _Bool hasDenseQuantizedGradient;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedDenseVector *denseQuantizedGradient;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)hasGradient;
- (float)gradientValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)gradientLength;

@end
