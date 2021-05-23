/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingQuantizedSparseVector, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingLinRegObjectiveFeatures : PBCodable

{
    unsigned long long _timestamp;
    float _featuresL2norm;
    float _featuresScaleFactor;
    AWDProactiveModelFittingMinibatchStats *_minibatchStats;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatFeatures;
    AWDProactiveModelFittingQuantizedSparseVector *_sparseQuantizedFeatures;
    struct {
        unsigned int timestamp:1;
        unsigned int featuresL2norm:1;
        unsigned int featuresScaleFactor:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, readonly) _Bool hasSparseFloatFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures;
@property (nonatomic, readonly) _Bool hasMinibatchStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, readonly) _Bool hasSparseQuantizedFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingQuantizedSparseVector *sparseQuantizedFeatures;
@property (nonatomic) _Bool hasFeaturesScaleFactor;
@property (nonatomic) float featuresScaleFactor;
@property (nonatomic) _Bool hasFeaturesL2norm;
@property (nonatomic) float featuresL2norm;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (_Bool)hasObjectiveFeatures;
- (float)featuresValueAtIndex:(unsigned long long)arg1;
- (unsigned long long)featuresLength;

@end
