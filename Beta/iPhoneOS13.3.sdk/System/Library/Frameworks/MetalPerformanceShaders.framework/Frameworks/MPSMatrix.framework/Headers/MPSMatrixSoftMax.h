/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixSoftMax : MPSMatrixUnaryKernel

{
    unsigned long long _sourceColumns;
    unsigned long long _sourceRows;
}

@property (nonatomic) unsigned long long sourceRows;
@property (nonatomic) unsigned long long sourceColumns;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 resultMatrix:(id)arg3;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
