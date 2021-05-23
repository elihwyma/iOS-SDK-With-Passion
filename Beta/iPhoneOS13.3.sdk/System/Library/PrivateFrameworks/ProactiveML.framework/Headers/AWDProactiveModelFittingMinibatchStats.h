/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface AWDProactiveModelFittingMinibatchStats : PBCodable

{
    unsigned long long _batchSize;
    NSMutableArray *_perLabelSupports;
    float _support;
    struct {
        unsigned int batchSize:1;
        unsigned int support:1;
    } _has;
}

@property (nonatomic) _Bool hasSupport;
@property (nonatomic) float support;
@property (nonatomic) _Bool hasBatchSize;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSMutableArray *perLabelSupports;

+ (Class)perLabelSupportType;
+ (id)statsWithSize:(unsigned long long)arg1 support:(float)arg2;
+ (id)statsWithPerLabelCounts:(id)arg1;

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
- (void)clearPerLabelSupports;
- (void)addPerLabelSupport:(id)arg1;
- (unsigned long long)perLabelSupportsCount;
- (id)perLabelSupportAtIndex:(unsigned long long)arg1;
- (id)combineWithStats:(id)arg1;
- (float)supportForLabel:(unsigned long long)arg1;

@end
