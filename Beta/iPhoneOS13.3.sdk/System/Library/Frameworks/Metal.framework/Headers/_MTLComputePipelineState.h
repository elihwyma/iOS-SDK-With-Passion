/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLDebugInstrumentationData, MTLIndirectArgumentBufferEmulationData, NSString;

@protocol MTLDevice;

@interface _MTLComputePipelineState : NSObject

{
    NSString *_label;
    id <MTLDevice> _device;
    MTLIndirectArgumentBufferEmulationData *_iabEmulationData;
    MTLDebugInstrumentationData *_debugInstrumentationData;
    _Bool _supportIndirectCommandBuffers;
    unsigned long long _resourceIndex;
}

@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (retain, nonatomic) MTLIndirectArgumentBufferEmulationData *IABEmulationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly) unsigned long long uniqueIdentifier;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) _Bool supportIndirectCommandBuffers;

- (void)dealloc;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_da2e99ad)arg1;
- (unsigned int)getComputeKernelTelemetryID;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;

@end
