/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixSoftMax.h>

@interface MPSMatrixLogSoftMax : MPSMatrixSoftMax

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 resultMatrix:(id)arg3;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
