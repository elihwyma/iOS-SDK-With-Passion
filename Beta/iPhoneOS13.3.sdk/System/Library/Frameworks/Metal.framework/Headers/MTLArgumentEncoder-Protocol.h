/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLArgumentEncoder <Swift>

@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;

- (unsigned short)setBuffer:offset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setTexture:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setSamplerState:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setArgumentBuffer:offset: /* Error: Ran out of types for this method. */;
- (unsigned short)constantDataAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setBuffers:offsets:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setTextures:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setSamplerStates:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setArgumentBuffer:startOffset:arrayElement: /* Error: Ran out of types for this method. */;
- (unsigned short)setRenderPipelineState:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setRenderPipelineStates:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setComputePipelineState:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setComputePipelineStates:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)setIndirectCommandBuffer:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setIndirectCommandBuffers:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)newArgumentEncoderForBufferAtIndex: /* Error: Ran out of types for this method. */;

@end
