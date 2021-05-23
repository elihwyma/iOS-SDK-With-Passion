/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@class MPSMatrixMultiplication, MPSMatrixSolveTriangular;

@interface MPSMatrixDecompositionLU : MPSMatrixUnaryKernel

{
    MPSMatrixMultiplication *_gemmKernel;
    MPSMatrixSolveTriangular *_trsmKernel;
    unsigned long long _rows;
    unsigned long long _columns;
}

@property (nonatomic, readonly) unsigned long long rows;
@property (nonatomic, readonly) unsigned long long columns;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 rows:(unsigned long long)arg2 columns:(unsigned long long)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 pivotIndices:(id)arg4 status:(id)arg5;

@end
