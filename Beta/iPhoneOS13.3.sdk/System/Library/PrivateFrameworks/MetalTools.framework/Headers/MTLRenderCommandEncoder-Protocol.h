/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@protocol MTLRenderCommandEncoder <Swift>

@property (readonly) unsigned long long tileWidth;
@property (readonly) unsigned long long tileHeight;

- (unsigned short)setRenderPipelineState: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileTexture:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileSamplerState:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileBuffer:offset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchThreadsPerTile: /* Error: Ran out of types for this method. */;
- (unsigned short)setVisibilityResultMode:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)setDepthStencilState: /* Error: Ran out of types for this method. */;
- (unsigned short)setBlendColorRed:green:blue:alpha: /* Error: Ran out of types for this method. */;
- (unsigned short)setTriangleFillMode: /* Error: Ran out of types for this method. */;
- (unsigned short)setDepthBias:slopeScale:clamp: /* Error: Ran out of types for this method. */;
- (unsigned short)setCullMode: /* Error: Ran out of types for this method. */;
- (unsigned short)setFrontFacingWinding: /* Error: Ran out of types for this method. */;
- (unsigned short)setViewport: /* Error: Ran out of types for this method. */;
- (unsigned short)drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentBufferOffset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexBufferOffset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentBuffer:offset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexBuffer:offset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)drawPrimitives:vertexStart:vertexCount: /* Error: Ran out of types for this method. */;
- (unsigned short)drawPrimitives:vertexStart:vertexCount:instanceCount: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentSamplerState:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentTexture:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setScissorRect: /* Error: Ran out of types for this method. */;
- (unsigned short)useResource:usage: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexBuffers:offsets:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)drawPrimitives:vertexStart:vertexCount:instanceCount:baseInstance: /* Error: Ran out of types for this method. */;
- (unsigned short)drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:instanceCount:baseVertex:baseInstance: /* Error: Ran out of types for this method. */;
- (unsigned short)useResources:count:usage: /* Error: Ran out of types for this method. */;
- (unsigned short)useHeap: /* Error: Ran out of types for this method. */;
- (unsigned short)useHeaps:count: /* Error: Ran out of types for this method. */;
- (unsigned short)executeCommandsInBuffer:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)executeCommandsInBuffer:indirectBuffer:indirectBufferOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexBytes:length:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexTexture:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexTextures:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexSamplerState:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexSamplerStates:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexSamplerState:lodMinClamp:lodMaxClamp:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexSamplerStates:lodMinClamps:lodMaxClamps:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setViewports:count: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexAmplificationCount:viewMappings: /* Error: Ran out of types for this method. */;
- (unsigned short)setDepthClipMode: /* Error: Ran out of types for this method. */;
- (unsigned short)setScissorRects:count: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentBytes:length:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentBuffers:offsets:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentTextures:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentSamplerStates:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentSamplerState:lodMinClamp:lodMaxClamp:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentSamplerStates:lodMinClamps:lodMaxClamps:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setStencilReferenceValue: /* Error: Ran out of types for this method. */;
- (unsigned short)setStencilFrontReferenceValue:backReferenceValue: /* Error: Ran out of types for this method. */;
- (unsigned short)setColorStoreAction:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setDepthStoreAction: /* Error: Ran out of types for this method. */;
- (unsigned short)setStencilStoreAction: /* Error: Ran out of types for this method. */;
- (unsigned short)setColorStoreActionOptions:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setDepthStoreActionOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)setStencilStoreActionOptions: /* Error: Ran out of types for this method. */;
- (unsigned short)drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:instanceCount: /* Error: Ran out of types for this method. */;
- (unsigned short)drawPrimitives:indirectBuffer:indirectBufferOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)drawIndexedPrimitives:indexType:indexBuffer:indexBufferOffset:indirectBuffer:indirectBufferOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)textureBarrier;
- (unsigned short)updateFence:afterStages: /* Error: Ran out of types for this method. */;
- (unsigned short)waitForFence:beforeStages: /* Error: Ran out of types for this method. */;
- (unsigned short)setTessellationFactorBuffer:offset:instanceStride: /* Error: Ran out of types for this method. */;
- (unsigned short)setTessellationFactorScale: /* Error: Ran out of types for this method. */;
- (unsigned short)drawPatches:patchStart:patchCount:patchIndexBuffer:patchIndexBufferOffset:instanceCount:baseInstance: /* Error: Ran out of types for this method. */;
- (unsigned short)drawPatches:patchIndexBuffer:patchIndexBufferOffset:indirectBuffer:indirectBufferOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)drawIndexedPatches:patchStart:patchCount:patchIndexBuffer:patchIndexBufferOffset:controlPointIndexBuffer:controlPointIndexBufferOffset:instanceCount:baseInstance: /* Error: Ran out of types for this method. */;
- (unsigned short)drawIndexedPatches:patchIndexBuffer:patchIndexBufferOffset:controlPointIndexBuffer:controlPointIndexBufferOffset:indirectBuffer:indirectBufferOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileBytes:length:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileBufferOffset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileBuffers:offsets:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileTextures:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileSamplerStates:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileSamplerState:lodMinClamp:lodMaxClamp:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setTileSamplerStates:lodMinClamps:lodMaxClamps:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setThreadgroupMemoryLength:offset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)useResource:usage:stages: /* Error: Ran out of types for this method. */;
- (unsigned short)useResources:count:usage:stages: /* Error: Ran out of types for this method. */;
- (unsigned short)useHeap:stages: /* Error: Ran out of types for this method. */;
- (unsigned short)useHeaps:count:stages: /* Error: Ran out of types for this method. */;
- (unsigned short)memoryBarrierWithScope:afterStages:beforeStages: /* Error: Ran out of types for this method. */;
- (unsigned short)memoryBarrierWithResources:count:afterStages:beforeStages: /* Error: Ran out of types for this method. */;

@end
