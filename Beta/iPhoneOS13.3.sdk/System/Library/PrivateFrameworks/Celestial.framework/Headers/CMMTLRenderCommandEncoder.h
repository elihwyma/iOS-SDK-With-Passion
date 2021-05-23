/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h>

@class CMMTLCommandBuffer, CMMTLRenderPipelineState, MTLRenderPassDescriptor, NSString;

@protocol MTLDevice, MTLRenderCommandEncoder;

@interface CMMTLRenderCommandEncoder : NSObject

{
    CMMTLCommandBuffer *_cmCommandBuffer;
    id <MTLRenderCommandEncoder> _renderEncoder;
    CMMTLRenderPipelineState *_cmRenderPipelineState;
    MTLRenderPassDescriptor *_renderPassDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long tileWidth;
@property (readonly) unsigned long long tileHeight;

- (void)forwardInvocation:(id)arg1;
- (void)endEncoding;
- (void)setRenderPipelineState:(id)arg1;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithCMMTLCommandBuffer:(id)arg1 renderDescriptor:(id)arg2;

@end
