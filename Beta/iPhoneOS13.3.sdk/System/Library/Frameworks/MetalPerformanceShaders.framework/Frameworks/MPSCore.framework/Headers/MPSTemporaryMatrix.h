/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSMatrix.h>

@interface MPSTemporaryMatrix : MPSMatrix

{
    unsigned long long _readCount;
}

@property (nonatomic) unsigned long long readCount;

+ (id)temporaryMatrixWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2;
+ (void)prefetchStorageWithCommandBuffer:(id)arg1 matrixDescriptorList:(id)arg2;

- (void)synchronizeOnCommandBuffer:(id)arg1;
- (id)ndArrayWithCommandBuffer:(id)arg1 descriptor:(id)arg2 aliasing:(unsigned long long)arg3;
- (id)initWithCommandBuffer:(id)arg1 matrixDescriptor:(id)arg2;

@end
