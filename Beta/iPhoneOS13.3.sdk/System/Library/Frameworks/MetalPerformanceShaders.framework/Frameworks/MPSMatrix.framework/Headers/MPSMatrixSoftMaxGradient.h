/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@interface MPSMatrixSoftMaxGradient : MPSMatrixBinaryKernel

{
    unsigned long long _sourceColumns;
    unsigned long long _sourceRows;
}

@property (nonatomic) unsigned long long sourceRows;
@property (nonatomic) unsigned long long sourceColumns;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 forwardOutputMatrix:(id)arg3 resultMatrix:(id)arg4;

@end
