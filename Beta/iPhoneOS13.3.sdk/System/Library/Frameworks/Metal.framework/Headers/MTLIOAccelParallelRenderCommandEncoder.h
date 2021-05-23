/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLParallelRenderCommandEncoder.h>

@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder

- (void)endEncoding;
- (void)setLabel:(id)arg1;
- (void)pushDebugGroup:(id)arg1;
- (void)popDebugGroup;
- (unsigned long long)getType;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (_Bool)isMemorylessRender;

@end
