/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <ProtocolBuffer/PBCodable.h>

@interface AWDProactiveModelFittingSparseFloatVector : PBCodable

{
    CDStruct_62a50c50 _indices;
    CDStruct_fae3dc92 _values;
    unsigned long long _length;
    struct {
        unsigned int length:1;
    } _has;
}

@property (nonatomic, readonly) unsigned long long indicesCount;
@property (nonatomic, readonly) unsigned long long *indices;
@property (nonatomic, readonly) unsigned long long valuesCount;
@property (nonatomic, readonly) float *values;
@property (nonatomic) _Bool hasLength;
@property (nonatomic) unsigned long long length;

+ (id)sparseFloatVectorFromModelWeights:(id)arg1;
+ (id)sparseFloatVectorFromSparseVector:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)writeTo:(id)arg1;
- (float)valueAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)clearValues;
- (float)valuesAtIndex:(unsigned long long)arg1;
- (void)addValues:(float)arg1;
- (void)clearIndices;
- (void)addIndices:(unsigned long long)arg1;
- (unsigned long long)indicesAtIndex:(unsigned long long)arg1;
- (void)setIndices:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)setValues:(float *)arg1 count:(unsigned long long)arg2;

@end
