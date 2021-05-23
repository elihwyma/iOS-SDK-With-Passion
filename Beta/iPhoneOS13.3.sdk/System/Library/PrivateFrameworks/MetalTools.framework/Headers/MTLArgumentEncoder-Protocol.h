/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class MISSING_TYPE, NSString;

@protocol MTLDevice;

@protocol MTLArgumentEncoder <Swift>

@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;

- (MISSING_TYPE *)setBuffer:offset:atIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setTexture:atIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setSamplerState:atIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setArgumentBuffer:offset: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)constantDataAtIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setBuffers:offsets:withRange: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setTextures:withRange: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setSamplerStates:withRange: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setArgumentBuffer:startOffset:arrayElement: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setRenderPipelineState:atIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setRenderPipelineStates:withRange: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setComputePipelineState:atIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setComputePipelineStates:withRange: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setIndirectCommandBuffer:atIndex: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)setIndirectCommandBuffers:withRange: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)newArgumentEncoderForBufferAtIndex: /* Error: Ran out of types for this method. */;

@end
