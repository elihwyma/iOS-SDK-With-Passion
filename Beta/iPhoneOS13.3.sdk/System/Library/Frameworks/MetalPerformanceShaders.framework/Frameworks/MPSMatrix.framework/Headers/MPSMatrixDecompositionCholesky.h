/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixDecompositionCholesky : MPSMatrixUnaryKernel

{
    _Bool _lower;
    unsigned long long _order;
}

@property (nonatomic, readonly) _Bool lower;
@property (nonatomic, readonly) unsigned long long order;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)initWithDevice:(id)arg1 lower:(_Bool)arg2 order:(unsigned long long)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 resultMatrix:(id)arg3 status:(id)arg4;

@end
