/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
 */

#import <MPSCore/MPSKernel.h>

@interface MPSImageCopyToMatrix : MPSKernel

{
    CDStruct_67e7699a _destinationMatrixOrigin;
    unsigned long long _destinationMatrixBatchIndex;
    unsigned long long _dataLayout;
}

@property (nonatomic) CDStruct_14f26992 destinationMatrixOrigin;
@property (nonatomic) unsigned long long destinationMatrixBatchIndex;
@property (nonatomic, readonly) unsigned long long dataLayout;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 dataLayout:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeBatchToCommandBuffer:(id)arg1 sourceImages:(struct NSArray *)arg2 destinationMatrix:(id)arg3;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (void)encodeBatchToCommandBuffer:(id)arg1 encoder:(id)arg2 sourceImages:(struct NSArray *)arg3 destinationMatrix:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceImage:(id)arg2 destinationMatrix:(id)arg3;

@end
