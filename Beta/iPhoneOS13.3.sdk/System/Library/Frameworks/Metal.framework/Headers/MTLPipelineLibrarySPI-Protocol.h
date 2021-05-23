/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/Swift-Protocol.h>

@class NSArray, NSString;

@protocol MTLDevice, MTLPipelineCache;

@protocol MTLPipelineLibrarySPI <Swift>

@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) NSArray *pipelineNames;
@property _Bool disableRunTimeCompilation;
@property (nonatomic, readonly) id <MTLPipelineCache> pipelineCache;
@property (nonatomic, readonly) id <MTLPipelineCache> functionCache;

- (unsigned short)newRenderPipelineStateWithName:options:reflection:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newComputePipelineStateWithName:options:reflection:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newComputePipelineDescriptorWithName:error: /* Error: Ran out of types for this method. */;
- (unsigned short)newRenderPipelineDescriptorWithName:error: /* Error: Ran out of types for this method. */;

@end
