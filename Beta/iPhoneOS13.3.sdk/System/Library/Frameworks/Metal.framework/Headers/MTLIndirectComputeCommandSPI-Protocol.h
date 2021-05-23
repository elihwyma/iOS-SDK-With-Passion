/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@protocol MTLIndirectComputeCommandSPI <Swift>

- (unsigned short)getCommandType;
- (unsigned short)getPipelineStateUniqueIdentifier;
- (unsigned short)getKernelBufferAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)dispatchThreadgroupsArguments;
- (unsigned short)dispatchThreadsArguments;
- (unsigned short)getThreadgroupMemoryLengthAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)getStageInRegion;
- (unsigned short)hasBarrier;

@end
