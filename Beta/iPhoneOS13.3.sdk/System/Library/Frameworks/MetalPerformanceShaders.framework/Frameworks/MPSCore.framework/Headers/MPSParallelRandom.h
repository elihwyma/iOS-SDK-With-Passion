/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSKernel.h>

@interface MPSParallelRandom : MPSKernel

{
    int _generatorType;
    unsigned int _destinationDataType;
    unsigned long long _distributionType;
}

@property (nonatomic) unsigned long long distributionType;
@property (nonatomic, readonly) unsigned int destinationDataType;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 destinationDataType:(unsigned int)arg2 generatorType:(int)arg3 distributionDescriptor:(id)arg4;
- (void)encodeToCommandBuffer:(id)arg1 computeEncoder:(id)arg2 destinationBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 numEntries:(unsigned long long)arg5;
- (void)encodeToCommandBuffer:(id)arg1 destinationBuffer:(id)arg2 destinationOffset:(unsigned long long)arg3 numEntries:(unsigned long long)arg4;

@end
