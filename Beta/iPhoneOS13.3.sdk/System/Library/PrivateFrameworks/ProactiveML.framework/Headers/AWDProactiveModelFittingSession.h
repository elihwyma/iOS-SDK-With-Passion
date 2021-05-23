/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingSession : PBCodable

{
    unsigned long long _label;
    unsigned long long _supervisionType;
    unsigned long long _timestamp;
    float _confidenceScore;
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingSparseFloatVector *_sparseFloatFeatures;
    struct {
        unsigned int label:1;
        unsigned int supervisionType:1;
        unsigned int timestamp:1;
        unsigned int confidenceScore:1;
    } _has;
}

@property (nonatomic) _Bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, readonly) _Bool hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic) _Bool hasLabel;
@property (nonatomic) unsigned long long label;
@property (nonatomic, readonly) _Bool hasSparseFloatFeatures;
@property (retain, nonatomic) AWDProactiveModelFittingSparseFloatVector *sparseFloatFeatures;
@property (nonatomic) _Bool hasSupervisionType;
@property (nonatomic) unsigned long long supervisionType;
@property (nonatomic) _Bool hasConfidenceScore;
@property (nonatomic) float confidenceScore;

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
