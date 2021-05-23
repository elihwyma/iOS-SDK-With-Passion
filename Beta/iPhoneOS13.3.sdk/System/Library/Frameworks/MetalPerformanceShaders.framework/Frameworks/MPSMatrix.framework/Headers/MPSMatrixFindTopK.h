/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixFindTopK : MPSMatrixUnaryKernel

{
    unsigned long long _sourceColumns;
    unsigned long long _sourceRows;
    unsigned long long _indexOffset;
    unsigned long long _numberOfTopKValues;
}

@property (nonatomic) unsigned long long sourceRows;
@property (nonatomic) unsigned long long sourceColumns;
@property (nonatomic) unsigned long long indexOffset;
@property (nonatomic) unsigned long long numberOfTopKValues;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 numberOfTopKValues:(unsigned long long)arg2;
- (void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 resultIndexMatrix:(id)arg3 resultValueMatrix:(id)arg4;

@end
