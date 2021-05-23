/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo;

@interface AWDProactiveModelFittingModelInfoStatsPair : PBCodable

{
    AWDProactiveModelFittingModelInfo *_modelInfo;
    AWDProactiveModelFittingMinibatchStats *_stats;
}

@property (nonatomic, readonly) _Bool hasModelInfo;
@property (retain, nonatomic) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, readonly) _Bool hasStats;
@property (retain, nonatomic) AWDProactiveModelFittingMinibatchStats *stats;

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
