/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@class MTLType, NSString, _MTLIndirectArgumentBufferLayout;

@protocol MTLDevice;

@interface _MTLResourceIndirectedArgumentEncoder : NSObject

{
    id <MTLDevice> _device;
    unsigned long long _encodedLength;
    unsigned long long _alignment;
    MTLType *_argumentBufferType;
    _MTLIndirectArgumentBufferLayout *_layout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) id <MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;
@property (nonatomic, readonly) _MTLIndirectArgumentBufferLayout *layout;

- (void)dealloc;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
- (void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setRenderPipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setComputePipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setComputePipelineStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setIndirectCommandBuffers:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
- (id)initWithLayout:(id)arg1 type:(id)arg2 device:(id)arg3;

@end
