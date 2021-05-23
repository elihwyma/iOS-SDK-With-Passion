/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrixSolveTriangular;

@interface MPSMatrixSolveLU : MPSMatrixBinaryKernel

{
    MPSMatrixSolveTriangular *_trsmU;
    MPSMatrixSolveTriangular *_trsmL;
    _Bool _transpose;
    unsigned long long _order;
    unsigned long long _numberOfRightHandSides;
}

@property (nonatomic, readonly) _Bool transpose;
@property (nonatomic) unsigned long long order;
@property (nonatomic) unsigned long long numberOfRightHandSides;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 transpose:(_Bool)arg2 order:(unsigned long long)arg3 numberOfRightHandSides:(unsigned long long)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 pivotIndices:(id)arg4 solutionMatrix:(id)arg5;

@end
