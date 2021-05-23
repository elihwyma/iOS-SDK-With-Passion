/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDProactiveModelFittingQuantizedDenseVector : PBCodable

{
    CDStruct_9f2792e4 _values;
    float _bucketSize;
    float _minValue;
    struct {
        unsigned int bucketSize:1;
        unsigned int minValue:1;
    } _has;
}

@property (nonatomic, readonly) unsigned long long valuesCount;
@property (nonatomic, readonly) unsigned int *values;
@property (nonatomic) _Bool hasMinValue;
@property (nonatomic) float minValue;
@property (nonatomic) _Bool hasBucketSize;
@property (nonatomic) float bucketSize;

+ (id)quantizedDenseVectorFromDenseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2;

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
- (void)clearValues;
- (unsigned int)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(unsigned int)arg1;
- (void)setValues:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (float)originalValueAtIndex:(unsigned long long)arg1;

@end
