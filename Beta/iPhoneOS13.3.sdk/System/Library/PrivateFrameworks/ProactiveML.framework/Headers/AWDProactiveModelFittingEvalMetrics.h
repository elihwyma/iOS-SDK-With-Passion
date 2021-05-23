/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDProactiveModelFittingEvalMetrics : PBCodable

{
    CDStruct_fae3dc92 _negativeScores;
    CDStruct_fae3dc92 _positiveScores;
    unsigned long long _falseNegatives;
    unsigned long long _falsePositives;
    unsigned long long _trueNegatives;
    unsigned long long _truePositives;
    float _f1;
    float _rmse;
    float _secsToExecute;
    struct {
        unsigned int falseNegatives:1;
        unsigned int falsePositives:1;
        unsigned int trueNegatives:1;
        unsigned int truePositives:1;
        unsigned int f1:1;
        unsigned int rmse:1;
        unsigned int secsToExecute:1;
    } _has;
}

@property (nonatomic) _Bool hasRmse;
@property (nonatomic) float rmse;
@property (nonatomic) _Bool hasF1;
@property (nonatomic) float f1;
@property (nonatomic) _Bool hasTruePositives;
@property (nonatomic) unsigned long long truePositives;
@property (nonatomic) _Bool hasTrueNegatives;
@property (nonatomic) unsigned long long trueNegatives;
@property (nonatomic) _Bool hasFalsePositives;
@property (nonatomic) unsigned long long falsePositives;
@property (nonatomic) _Bool hasFalseNegatives;
@property (nonatomic) unsigned long long falseNegatives;
@property (nonatomic, readonly) unsigned long long positiveScoresCount;
@property (nonatomic, readonly) float *positiveScores;
@property (nonatomic, readonly) unsigned long long negativeScoresCount;
@property (nonatomic, readonly) float *negativeScores;
@property (nonatomic) _Bool hasSecsToExecute;
@property (nonatomic) float secsToExecute;

+ (id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2;
+ (id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2 truePositives:(unsigned long long)arg3 trueNegatives:(unsigned long long)arg4 falsePositives:(unsigned long long)arg5 falseNegatives:(unsigned long long)arg6;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)toDictionary;
- (void)clearPositiveScores;
- (void)addPositiveScores:(float)arg1;
- (float)positiveScoresAtIndex:(unsigned long long)arg1;
- (void)setPositiveScores:(float *)arg1 count:(unsigned long long)arg2;
- (void)clearNegativeScores;
- (void)addNegativeScores:(float)arg1;
- (float)negativeScoresAtIndex:(unsigned long long)arg1;
- (void)setNegativeScores:(float *)arg1 count:(unsigned long long)arg2;

@end
