/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLObjectWithLabel.h>

#import <Metal/Swift-Protocol.h>

@class NSString, _MTLIndirectArgumentBufferLayout;

@protocol MTLDevice;

@interface _MTLIndirectArgumentEncoder : _MTLObjectWithLabel <Swift>

{
    id <MTLDevice> _device;
    _MTLIndirectArgumentBufferLayout *_layout;
}

@property (readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property (nonatomic, readonly) _MTLIndirectArgumentBufferLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long alignment;

- (void)dealloc;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setIndirectArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setComputePipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (id)initWithLayout:(id)arg1 device:(id)arg2;

@end
