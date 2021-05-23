/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSCore/MPSKernel.h>

@interface MPSMatrixCopyToImage : MPSKernel

{
    CDStruct_67e7699a _sourceMatrixOrigin;
    unsigned long long _sourceMatrixBatchIndex;
    unsigned long long _dataLayout;
}

@property (nonatomic) CDStruct_14f26992 sourceMatrixOrigin;
@property (nonatomic) unsigned long long sourceMatrixBatchIndex;
@property (nonatomic, readonly) unsigned long long dataLayout;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 dataLayout:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImage:(id)arg3;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 destinationImages:(struct NSArray *)arg3;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeBatchToCommandBuffer:(id)arg1 encoder:(id)arg2 sourceMatrix:(id)arg3 destinationImages:(struct NSArray *)arg4;

@end
