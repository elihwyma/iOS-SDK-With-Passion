/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class NSError, NSString;

@protocol MTLCommandQueue, MTLDevice;

@protocol MTLCommandBuffer <Swift>

@property (readonly) id <MTLDevice> device;
@property (readonly) id <MTLCommandQueue> commandQueue;
@property (readonly) _Bool retainedReferences;
@property (copy) NSString *label;
@property (readonly) double kernelStartTime;
@property (readonly) double kernelEndTime;
@property (readonly) double GPUStartTime;
@property (readonly) double GPUEndTime;
@property (readonly) unsigned long long status;
@property (readonly) NSError *error;

- (unsigned short)computeCommandEncoder;
- (unsigned short)commit;
- (unsigned short)waitUntilCompleted;
- (unsigned short)addCompletedHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)blitCommandEncoder;
- (unsigned short)addScheduledHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)renderCommandEncoderWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)presentDrawable: /* Error: Ran out of types for this method. */;
- (unsigned short)waitUntilScheduled;
- (unsigned short)pushDebugGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)popDebugGroup;
- (unsigned short)enqueue;
- (unsigned short)presentDrawable:atTime: /* Error: Ran out of types for this method. */;
- (unsigned short)presentDrawable:afterMinimumDuration: /* Error: Ran out of types for this method. */;
- (unsigned short)computeCommandEncoderWithDispatchType: /* Error: Ran out of types for this method. */;
- (unsigned short)encodeWaitForEvent:value: /* Error: Ran out of types for this method. */;
- (unsigned short)encodeSignalEvent:value: /* Error: Ran out of types for this method. */;
- (unsigned short)parallelRenderCommandEncoderWithDescriptor: /* Error: Ran out of types for this method. */;
- (unsigned short)resourceStateCommandEncoder;

@end
