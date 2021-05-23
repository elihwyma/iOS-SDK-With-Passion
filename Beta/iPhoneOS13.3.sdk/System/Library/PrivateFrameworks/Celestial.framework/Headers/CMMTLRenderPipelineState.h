/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class CMMTLDevice, MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, NSString;

@protocol MTLDevice, MTLRenderPipelineState;

@interface CMMTLRenderPipelineState : NSObject

{
    CMMTLDevice *_cmDevice;
    id <MTLRenderPipelineState> _renderPipelineState;
    MTLRenderPipelineReflection *_reflection;
    MTLRenderPipelineDescriptor *_renderPipelineDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSString *label;
@property (readonly) id <MTLDevice> device;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) _Bool threadgroupSizeMatchesTileSize;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) _Bool supportIndirectCommandBuffers;

- (void)forwardInvocation:(id)arg1;
- (id)initWithCMMTLDevice:(id)arg1 descriptor:(id)arg2 reflection:(id *)arg3;

@end
