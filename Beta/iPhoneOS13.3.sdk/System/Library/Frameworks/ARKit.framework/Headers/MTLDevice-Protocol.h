/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <ARKit/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice <Swift>

@property (readonly) NSString *name;
@property (readonly) unsigned long long registryID;
@property (readonly) struct maxThreadsPerThreadgroup;
@property (readonly, getter=isLowPower) _Bool lowPower;
@property (readonly, getter=isHeadless) _Bool headless;
@property (readonly, getter=isRemovable) _Bool removable;
@property (readonly) _Bool hasUnifiedMemory;
@property (readonly) unsigned long long recommendedMaxWorkingSetSize;
@property (readonly, getter=isDepth24Stencil8PixelFormatSupported) _Bool depth24Stencil8PixelFormatSupported;
@property (readonly) unsigned long long readWriteTextureSupport;
@property (readonly) unsigned long long argumentBuffersSupport;
@property (readonly, getter=areRasterOrderGroupsSupported) _Bool rasterOrderGroupsSupported;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly) unsigned long long maxThreadgroupMemoryLength;
@property (readonly) unsigned long long maxArgumentBufferSamplerCount;
@property (readonly, getter=areProgrammableSamplePositionsSupported) _Bool programmableSamplePositionsSupported;
@property (readonly) unsigned long long sparseTileSizeInBytes;
@property (readonly) unsigned long long maxBufferLength;

- (unsigned short)newDefaultLibraryWithBundle:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newComputePipelineStateWithFunction:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)newTextureWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)newBufferWithLength:options: /* Error: Ran out of types for this method. */;
- (unsigned short)newBufferWithBytes:length:options: /* Error: Ran out of types for this method. */;
- (unsigned short)newComputePipelineStateWithFunction:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newCommandQueue;
- (unsigned short)newTextureWithDescriptor:iosurface:plane: /* Error: Ran out of types for this method. */;
- (unsigned short)newComputePipelineStateWithFunction:options:reflection:error: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsFeatureSet: /* Error: Ran out of types for this method. */;
- (unsigned short)newSamplerStateWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)newBufferWithBytesNoCopy:length:options:deallocator: /* Error: Ran out of types for this method. */;
- (unsigned short)newLibraryWithSource:options:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newRenderPipelineStateWithTileDescriptor:options:reflection:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newLibraryWithURL:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newLibraryWithData:error: /* Error: Ran out of types for this method. */;
- (unsigned short)minimumLinearTextureAlignmentForPixelFormat: /* Error: Ran out of types for this method. */;
- (unsigned short)newDefaultLibrary;
- (unsigned short)newLibraryWithFile:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newRenderPipelineStateWithDescriptor:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newArgumentEncoderWithArguments: /* Error: Ran out of types for this method. */;
- (unsigned short)newComputePipelineStateWithDescriptor:options:reflection:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newDepthStencilStateWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)newCommandQueueWithMaxCommandBufferCount: /* Error: Ran out of types for this method. */;
- (unsigned short)heapTextureSizeAndAlignWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)heapBufferSizeAndAlignWithLength:options: /* Error: Ran out of types for this method. */;
- (unsigned short)newHeapWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)newSharedTextureWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)newSharedTextureWithHandle: /* Error: Ran out of types for this method. */;
- (unsigned short)newLibraryWithSource:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)newRenderPipelineStateWithDescriptor:options:reflection:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newRenderPipelineStateWithDescriptor:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)newRenderPipelineStateWithDescriptor:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)newComputePipelineStateWithFunction:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)newComputePipelineStateWithDescriptor:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)newFence;
- (unsigned short)supportsFamily: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsTextureSampleCount: /* Error: Ran out of types for this method. */;
- (unsigned short)minimumTextureBufferAlignmentForPixelFormat: /* Error: Ran out of types for this method. */;
- (unsigned short)newRenderPipelineStateWithTileDescriptor:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)getDefaultSamplePositions:count: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsRasterizationRateMapWithLayerCount: /* Error: Ran out of types for this method. */;
- (unsigned short)newRasterizationRateMapWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)newIndirectCommandBufferWithDescriptor:maxCommandCount:options: /* Error: Ran out of types for this method. */;
- (unsigned short)newEvent;
- (unsigned short)newSharedEvent;
- (unsigned short)newSharedEventWithHandle: /* Error: Ran out of types for this method. */;
- (unsigned short)sparseTileSizeWithTextureType:pixelFormat:sampleCount: /* Error: Ran out of types for this method. */;
- (unsigned short)supportsVertexAmplificationCount: /* Error: Ran out of types for this method. */;

@end
