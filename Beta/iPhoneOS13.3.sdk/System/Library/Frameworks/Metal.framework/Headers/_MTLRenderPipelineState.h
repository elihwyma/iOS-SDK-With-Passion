/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLDebugInstrumentationData, MTLIndirectArgumentBufferEmulationData, NSString;

@protocol MTLDevice;

@interface _MTLRenderPipelineState : NSObject

{
    NSString *_label;
    id <MTLDevice> _device;
    _Bool _threadgroupSizeMatchesTileSize;
    MTLIndirectArgumentBufferEmulationData *_vertexIABEmulationData;
    MTLIndirectArgumentBufferEmulationData *_fragmentIABEmulationData;
    MTLDebugInstrumentationData *_vertexDebugInstrumentationData;
    MTLDebugInstrumentationData *_fragmentDebugInstrumentationData;
    _Bool _supportIndirectCommandBuffers;
    unsigned long long _resourceIndex;
}

@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) _Bool threadgroupSizeMatchesTileSize;
@property (retain, nonatomic) MTLIndirectArgumentBufferEmulationData *vertexIABEmulationData;
@property (retain, nonatomic) MTLIndirectArgumentBufferEmulationData *fragmentIABEmulationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;
@property (retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (readonly) unsigned long long uniqueIdentifier;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) _Bool supportIndirectCommandBuffers;

- (void)dealloc;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_da2e99ad)arg1;
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;
- (id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2;
- (unsigned int)getVertexShaderTelemetryID;
- (unsigned int)getFragmentShaderTelemetryID;

@end
