/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class MISSING_TYPE, NSArray, NSString;

@protocol MTLDevice, MTLPipelineCache;

@protocol MTLPipelineLibrarySPI <Swift>

@property (copy) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) NSArray *pipelineNames;
@property _Bool disableRunTimeCompilation;
@property (nonatomic, readonly) id <MTLPipelineCache> pipelineCache;
@property (nonatomic, readonly) id <MTLPipelineCache> functionCache;

- (MISSING_TYPE *)newRenderPipelineStateWithName:options:reflection:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)newComputePipelineStateWithName:options:reflection:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)newComputePipelineDescriptorWithName:error: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)newRenderPipelineDescriptorWithName:error: /* Error: Ran out of types for this method. */;

@end
