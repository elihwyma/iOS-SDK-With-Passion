/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, NSMutableArray;

@interface AWDProactiveModelFittingEvaluation : PBCodable

{
    unsigned long long _timestamp;
    AWDProactiveModelFittingEvalMetrics *_evaluationMetrics;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    NSMutableArray *_precisionAtKs;
    CDStruct_b5306035 _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, readonly) _Bool hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, readonly) _Bool hasEvaluationMetrics;
@property (retain, nonatomic) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (retain, nonatomic) NSMutableArray *precisionAtKs;

+ (Class)precisionAtKType;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearPrecisionAtKs;
- (void)addPrecisionAtK:(id)arg1;
- (unsigned long long)precisionAtKsCount;
- (id)precisionAtKAtIndex:(unsigned long long)arg1;
- (float)precisionAtK:(unsigned long long)arg1;

@end
