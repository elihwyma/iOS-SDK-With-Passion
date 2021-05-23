/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrixSolveTriangular;

@interface MPSMatrixSolveCholesky : MPSMatrixBinaryKernel

{
    MPSMatrixSolveTriangular *_trsmT;
    MPSMatrixSolveTriangular *_trsmN;
    _Bool _upper;
    unsigned long long _order;
    unsigned long long _numberOfRightHandSides;
}

@property (nonatomic, readonly) _Bool upper;
@property (nonatomic) unsigned long long order;
@property (nonatomic) unsigned long long numberOfRightHandSides;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4;
- (id)initWithDevice:(id)arg1 upper:(_Bool)arg2 order:(unsigned long long)arg3 numberOfRightHandSides:(unsigned long long)arg4;

@end
