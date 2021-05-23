/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixSoftMaxGradient.h>

@interface MPSMatrixLogSoftMaxGradient : MPSMatrixSoftMaxGradient

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)initWithDevice:(id)arg1;
- (void)encodeToCommandBuffer:(id)arg1 gradientMatrix:(id)arg2 forwardOutputMatrix:(id)arg3 resultMatrix:(id)arg4;

@end
