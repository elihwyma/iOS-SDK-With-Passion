/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@interface PMLSparseMatrix : NSObject

{
    _Bool _isSymmetric;
    struct sparse_m_float *_matrix;
}

@property (nonatomic, readonly) unsigned long long numberOfRows;
@property (nonatomic, readonly) unsigned long long numberOfColumns;
@property (nonatomic) _Bool isSymmetric;
@property (nonatomic) struct sparse_m_float *matrix;

+ (id)sparseMatrixWithNumberOfRows:(unsigned long long)arg1 numberOfColumns:(unsigned long long)arg2;
+ (id)sparseMatrixFromNumbers:(id)arg1;

- (id)init;
- (void)dealloc;
- (float)maxValue;
- (float)minValue;
- (void)enumerateNonZeroValuesWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSparseMatrix:(struct sparse_m_float *)arg1;
- (float)valueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (void)_enumerateSparseRowsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateNonZeroValuesForRow:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)matrixWithConstantColumn;

@end
