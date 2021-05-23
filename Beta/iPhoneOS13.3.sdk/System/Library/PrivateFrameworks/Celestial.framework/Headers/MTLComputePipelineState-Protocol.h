/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/Swift-Protocol.h>

@class NSString;

@protocol MTLDevice;

@protocol MTLComputePipelineState <Swift>

@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned long long threadExecutionWidth;
@property (readonly) unsigned long long staticThreadgroupMemoryLength;
@property (readonly) _Bool supportIndirectCommandBuffers;

- (unsigned short)imageblockMemoryLengthForDimensions: /* Error: Ran out of types for this method. */;

@end
