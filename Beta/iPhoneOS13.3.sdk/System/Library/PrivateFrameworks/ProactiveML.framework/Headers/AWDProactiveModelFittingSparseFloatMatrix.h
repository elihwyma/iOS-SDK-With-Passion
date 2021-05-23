/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDProactiveModelFittingSparseFloatMatrix : PBCodable

{
    CDStruct_62a50c50 _columnIndices;
    CDStruct_62a50c50 _rowIndices;
    CDStruct_fae3dc92 _values;
    unsigned long long _columnLength;
    unsigned long long _rowLength;
    struct {
        unsigned int columnLength:1;
        unsigned int rowLength:1;
    } _has;
}

@property (nonatomic, readonly) unsigned long long columnIndicesCount;
@property (nonatomic, readonly) unsigned long long *columnIndices;
@property (nonatomic) _Bool hasColumnLength;
@property (nonatomic) unsigned long long columnLength;
@property (nonatomic, readonly) unsigned long long rowIndicesCount;
@property (nonatomic, readonly) unsigned long long *rowIndices;
@property (nonatomic) _Bool hasRowLength;
@property (nonatomic) unsigned long long rowLength;
@property (nonatomic, readonly) unsigned long long valuesCount;
@property (nonatomic, readonly) float *values;

+ (id)sparseFloatMatrixFromDenseMatrix:(id)arg1;
+ (id)sparseFloatMatrixFromSparseMatrix:(id)arg1;

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
- (float)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(float)arg1;
- (void)setValues:(float *)arg1 count:(unsigned long long)arg2;
- (void)clearColumnIndices;
- (void)addColumnIndices:(unsigned long long)arg1;
- (unsigned long long)columnIndicesAtIndex:(unsigned long long)arg1;
- (void)setColumnIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)clearRowIndices;
- (void)addRowIndices:(unsigned long long)arg1;
- (unsigned long long)rowIndicesAtIndex:(unsigned long long)arg1;
- (void)setRowIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (float)valueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;

@end
