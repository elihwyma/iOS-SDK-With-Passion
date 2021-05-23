/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class CMMTLDevice, MTLComputePipelineReflection, MTLDebugInstrumentationData, NSString;

@protocol MTLComputePipelineState, MTLDevice, MTLFunction;

@interface CMMTLComputePipelineState : NSObject

{
    CMMTLDevice *_cmDevice;
    id <MTLFunction> _function;
    MTLComputePipelineReflection *_reflection;
    id <MTLComputePipelineState> _computePipelineState;
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

- (void)forwardInvocation:(id)arg1;
- (id)initWithCMMTLDevice:(id)arg1 function:(id)arg2 options:(unsigned long long)arg3 reflection:(id *)arg4;

@end
