/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDProactiveModelFittingQuantizedSparseMatrix : PBCodable

{
    CDStruct_9f2792e4 _columnIndices;
    CDStruct_9f2792e4 _rowIndices;
    CDStruct_9f2792e4 _values;
    float _bucketSize;
    unsigned int _columnLength;
    float _minValue;
    unsigned int _rowLength;
    struct {
        unsigned int bucketSize:1;
        unsigned int columnLength:1;
        unsigned int minValue:1;
        unsigned int rowLength:1;
    } _has;
}

@property (nonatomic, readonly) unsigned long long columnIndicesCount;
@property (nonatomic, readonly) unsigned int *columnIndices;
@property (nonatomic) _Bool hasColumnLength;
@property (nonatomic) unsigned int columnLength;
@property (nonatomic, readonly) unsigned long long rowIndicesCount;
@property (nonatomic, readonly) unsigned int *rowIndices;
@property (nonatomic) _Bool hasRowLength;
@property (nonatomic) unsigned int rowLength;
@property (nonatomic, readonly) unsigned long long valuesCount;
@property (nonatomic, readonly) unsigned int *values;
@property (nonatomic) _Bool hasMinValue;
@property (nonatomic) float minValue;
@property (nonatomic) _Bool hasBucketSize;
@property (nonatomic) float bucketSize;

+ (id)quantizedSparseMatrixFromSparseMatrix:(id)arg1 numberOfBuckets:(unsigned long long)arg2;

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
- (void)clearColumnIndices;
- (void)addColumnIndices:(unsigned int)arg1;
- (unsigned int)columnIndicesAtIndex:(unsigned long long)arg1;
- (void)setColumnIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)clearRowIndices;
- (void)addRowIndices:(unsigned int)arg1;
- (unsigned int)rowIndicesAtIndex:(unsigned long long)arg1;
- (void)setRowIndices:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (float)originalValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;

@end
