/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveModelFittingEvaluation, AWDProactiveModelFittingLinRegFeatureMatrix, AWDProactiveModelFittingLinRegObjectiveFeatures, AWDProactiveModelFittingLogRegGradient, AWDProactiveModelFittingLogRegWeights;

@interface AWDProactiveModelFittingParsecFeedbackEnvelope : PBCodable

{
    AWDProactiveModelFittingEvaluation *_evaluation;
    AWDProactiveModelFittingLinRegFeatureMatrix *_linRegFeatureMatrix;
    AWDProactiveModelFittingLinRegObjectiveFeatures *_linRegObjectiveFeatures;
    AWDProactiveModelFittingLogRegGradient *_logRegGradient;
    AWDProactiveModelFittingLogRegWeights *_logRegWeights;
}

@property (nonatomic, readonly) _Bool hasEvaluation;
@property (retain, nonatomic) AWDProactiveModelFittingEvaluation *evaluation;
@property (nonatomic, readonly) _Bool hasLogRegWeights;
@property (retain, nonatomic) AWDProactiveModelFittingLogRegWeights *logRegWeights;
@property (nonatomic, readonly) _Bool hasLogRegGradient;
@property (retain, nonatomic) AWDProactiveModelFittingLogRegGradient *logRegGradient;
@property (nonatomic, readonly) _Bool hasLinRegFeatureMatrix;
@property (retain, nonatomic) AWDProactiveModelFittingLinRegFeatureMatrix *linRegFeatureMatrix;
@property (nonatomic, readonly) _Bool hasLinRegObjectiveFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingLinRegObjectiveFeatures *linRegObjectiveFeatures;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end
