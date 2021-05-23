/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSCore/MPSKernel.h>

@interface MPSMatrixUnaryKernel : MPSKernel

{
    unsigned long long _batchStart;
    unsigned long long _batchSize;
    CDStruct_67e7699a _sourceMatrixOrigin;
    CDStruct_67e7699a _resultMatrixOrigin;
}

@property (nonatomic) CDStruct_67e7699a sourceMatrixOrigin;
@property (nonatomic) CDStruct_67e7699a resultMatrixOrigin;
@property (nonatomic) unsigned long long batchStart;
@property (nonatomic) unsigned long long batchSize;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;

@end
