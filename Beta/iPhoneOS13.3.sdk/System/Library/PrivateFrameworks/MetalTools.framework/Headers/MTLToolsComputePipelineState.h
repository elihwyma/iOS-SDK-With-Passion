/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class MTLDebugInstrumentationData, NSString;

@protocol MTLDevice, MTLFunction;

@interface MTLToolsComputePipelineState : MTLToolsObject

{
    id <MTLFunction> _function;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) _Bool supportIndirectCommandBuffers;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long uniqueIdentifier;
@property (retain, nonatomic, readonly) MTLDebugInstrumentationData *debugInstrumentationData;

- (void)dealloc;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
- (unsigned int)getComputeKernelTelemetryID;
- (void)acceptVisitor:(id)arg1;

@end
