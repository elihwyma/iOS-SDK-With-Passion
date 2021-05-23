/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@protocol MTLIndirectRenderCommand <Swift>

- (unsigned short)reset;
- (unsigned short)setRenderPipelineState: /* Error: Ran out of types for this method. */;
- (unsigned short)setFragmentBuffer:offset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setVertexBuffer:offset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)drawPrimitives:vertexStart:vertexCount:instanceCount:baseInstance: /* Error: Ran out of types for this method. */;
- (unsigned short)drawIndexedPrimitives:indexCount:indexType:indexBuffer:indexBufferOffset:instanceCount:baseVertex:baseInstance: /* Error: Ran out of types for this method. */;
- (unsigned short)drawPatches:patchStart:patchCount:patchIndexBuffer:patchIndexBufferOffset:instanceCount:baseInstance:tessellationFactorBuffer:tessellationFactorBufferOffset:tessellationFactorBufferInstanceStride: /* Error: Ran out of types for this method. */;
- (unsigned short)drawIndexedPatches:patchStart:patchCount:patchIndexBuffer:patchIndexBufferOffset:controlPointIndexBuffer:controlPointIndexBufferOffset:instanceCount:baseInstance:tessellationFactorBuffer:tessellationFactorBufferOffset:tessellationFactorBufferInstanceStride: /* Error: Ran out of types for this method. */;

@end
