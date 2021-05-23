/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@protocol MTLBlitCommandEncoder <Swift>

- (unsigned short)copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFromBuffer:sourceOffset:toBuffer:destinationOffset:size: /* Error: Ran out of types for this method. */;
- (unsigned short)fillBuffer:range:value: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFromTexture:toTexture: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFromBuffer:sourceOffset:sourceBytesPerRow:sourceBytesPerImage:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin: /* Error: Ran out of types for this method. */;
- (unsigned short)generateMipmapsForTexture: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toBuffer:destinationOffset:destinationBytesPerRow:destinationBytesPerImage: /* Error: Ran out of types for this method. */;
- (unsigned short)updateFence: /* Error: Ran out of types for this method. */;
- (unsigned short)waitForFence: /* Error: Ran out of types for this method. */;
- (unsigned short)optimizeContentsForGPUAccess: /* Error: Ran out of types for this method. */;
- (unsigned short)optimizeContentsForCPUAccess: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFromTexture:sourceSlice:sourceLevel:toTexture:destinationSlice:destinationLevel:sliceCount:levelCount: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronizeResource: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronizeTexture:slice:level: /* Error: Ran out of types for this method. */;
- (unsigned short)optimizeContentsForGPUAccess:slice:level: /* Error: Ran out of types for this method. */;
- (unsigned short)optimizeContentsForCPUAccess:slice:level: /* Error: Ran out of types for this method. */;
- (unsigned short)resetCommandsInBuffer:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)copyIndirectCommandBuffer:sourceRange:destination:destinationIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)optimizeIndirectCommandBuffer:withRange: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFromBuffer:sourceOffset:sourceBytesPerRow:sourceBytesPerImage:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:options: /* Error: Ran out of types for this method. */;
- (unsigned short)copyFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toBuffer:destinationOffset:destinationBytesPerRow:destinationBytesPerImage:options: /* Error: Ran out of types for this method. */;
- (unsigned short)getTextureAccessCounters:region:mipLevel:slice:resetCounters:countersBuffer:countersBufferOffset: /* Error: Ran out of types for this method. */;
- (unsigned short)resetTextureAccessCounters:region:mipLevel:slice: /* Error: Ran out of types for this method. */;

@end
