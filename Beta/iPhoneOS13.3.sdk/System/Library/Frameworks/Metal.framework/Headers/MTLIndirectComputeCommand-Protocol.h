/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@protocol MTLIndirectComputeCommand <Swift>

- (unsigned short)reset;
- (unsigned short)setComputePipelineState: /* Error: Ran out of types for this method. */;
- (unsigned short)setThreadgroupMemoryLength:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)setStageInRegion: /* Error: Ran out of types for this method. */;
- (unsigned short)setKernelBuffer:offset:atIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)concurrentDispatchThreadgroups:threadsPerThreadgroup: /* Error: Ran out of types for this method. */;
- (unsigned short)concurrentDispatchThreads:threadsPerThreadgroup: /* Error: Ran out of types for this method. */;
- (unsigned short)setBarrier;
- (unsigned short)clearBarrier;

@end
