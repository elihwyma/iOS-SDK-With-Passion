/*
 Image: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
 */

#import <Foundation/NSObject.h>

@class MPSVector;

@interface MPSMatrixCopyDescriptor : NSObject

{
    id *_sourceMatrices;
    id *_destinationMatrices;
    CDStruct_7523a67d *_cpuOffsetsVector;
    MPSVector *_gpuOffsetsVector;
    unsigned long long _gpuBufferOffset;
    unsigned long long _allocCount;
    unsigned long long _filledCount;
}

+ (id)descriptorWithSourceMatrix:(id)arg1 destinationMatrix:(id)arg2 offsets:(CDStruct_7523a67d)arg3;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 count:(unsigned long long)arg2;
- (void)setCopyOperationAtIndex:(unsigned long long)arg1 sourceMatrix:(id)arg2 destinationMatrix:(id)arg3 offsets:(CDStruct_7523a67d)arg4;
- (id *)sourceMatrices;
- (id *)destinationMatrices;
- (CDStruct_7523a67d *)cpuOffsetsVector;
- (id)gpuOffsetsVector;
- (unsigned long long)gpuBufferOffset;
- (unsigned long long)allocCount;
- (unsigned long long)filledCount;
- (id)initWithSourceMatrices:(id)arg1 destinationMatrices:(id)arg2 offsetVector:(id)arg3 offset:(unsigned long long)arg4;

@end
