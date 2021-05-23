/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSKernel.h>

@interface MPSParallelReduce : MPSKernel

{
    unsigned int _kernelID;
    unsigned int _argkernelID;
    unsigned int _sourceDataType;
    unsigned int _destinationDataType;
    int _reduceOp;
}

@property (nonatomic, readonly) unsigned int sourceDataType;
@property (nonatomic, readonly) unsigned int destinationDataType;

+ (const struct MPSLibraryInfo *)libraryInfo;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (id)initPrivateWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)initWithDevice:(id)arg1 sourceDataType:(unsigned int)arg2 destinationDataType:(unsigned int)arg3;
- (void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceOffset:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationOffset:(unsigned long long)arg5 numEntries:(unsigned long long)arg6;
- (id)initWithDevice:(id)arg1 sourceDataType:(unsigned int)arg2 destinationDataType:(unsigned int)arg3 reduceOp:(int)arg4;

@end
