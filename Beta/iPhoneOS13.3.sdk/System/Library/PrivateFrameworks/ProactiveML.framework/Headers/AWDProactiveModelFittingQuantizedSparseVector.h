/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDProactiveModelFittingQuantizedSparseVector : PBCodable

{
    CDStruct_9f2792e4 _indices;
    CDStruct_9f2792e4 _values;
    float _bucketSize;
    unsigned int _length;
    float _minValue;
    struct {
        unsigned int bucketSize:1;
        unsigned int length:1;
        unsigned int minValue:1;
    } _has;
}

@property (nonatomic, readonly) unsigned long long indicesCount;
@property (nonatomic, readonly) unsigned int *indices;
@property (nonatomic, readonly) unsigned long long valuesCount;
@property (nonatomic, readonly) unsigned int *values;
@property (nonatomic) _Bool hasLength;
@property (nonatomic) unsigned int length;
@property (nonatomic) _Bool hasMinValue;
@property (nonatomic) float minValue;
@property (nonatomic) _Bool hasBucketSize;
@property (nonatomic) float bucketSize;

+ (id)quantizedSparseVectorFromSparseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2;
+ (id)quantizedSparseVectorFromDenseVector:(id)arg1 numberOfBuckets:(unsigned long long)arg2;

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
- (void)clearIndices;
- (void)addIndices:(unsigned int)arg1;
- (unsigned int)indicesAtIndex:(unsigned long long)arg1;
- (void)setIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setValues:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (float)originalValueAtIndex:(unsigned long long)arg1;

@end
