/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
 */

#import <MPSCore/MPSKernel.h>

@interface MPSParallelScan : MPSKernel

{
    unsigned int _kernelID;
    unsigned int _sourceDataType;
    unsigned int _destinationDataType;
    int _scanOp;
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
- (id)initWithDevice:(id)arg1 sourceDataType:(unsigned int)arg2 destinationDataType:(unsigned int)arg3 scanOp:(int)arg4;
- (void)encodeToCommandBuffer:(id)arg1 sourceBuffer:(id)arg2 sourceOffset:(unsigned long long)arg3 destinationBuffer:(id)arg4 destinationOffset:(unsigned long long)arg5 numEntries:(unsigned long long)arg6;

@end
