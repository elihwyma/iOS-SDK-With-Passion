/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrix;

@interface MPSMatrixSolveTriangular : MPSMatrixBinaryKernel

{
    MPSMatrix *_workspace;
    _Bool _right;
    _Bool _upper;
    _Bool _transpose;
    _Bool _unit;
    unsigned long long _order;
    unsigned long long _numberOfRightHandSides;
    double _alpha;
}

@property (nonatomic, readonly) _Bool right;
@property (nonatomic, readonly) _Bool upper;
@property (nonatomic, readonly) _Bool transpose;
@property (nonatomic, readonly) _Bool unit;
@property (nonatomic) unsigned long long order;
@property (nonatomic) unsigned long long numberOfRightHandSides;
@property (nonatomic, readonly) double alpha;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 right:(_Bool)arg2 upper:(_Bool)arg3 transpose:(_Bool)arg4 unit:(_Bool)arg5 order:(unsigned long long)arg6 numberOfRightHandSides:(unsigned long long)arg7 alpha:(double)arg8;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4;

@end
