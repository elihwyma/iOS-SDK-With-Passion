/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class MISSING_TYPE, NSString;

@protocol MTLDevice;

@protocol MTLRenderPipelineState <Swift>

@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) _Bool threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) _Bool supportIndirectCommandBuffers;

- (MISSING_TYPE *)imageblockMemoryLengthForDimensions: /* Error: Ran out of types for this method. */;

@end
