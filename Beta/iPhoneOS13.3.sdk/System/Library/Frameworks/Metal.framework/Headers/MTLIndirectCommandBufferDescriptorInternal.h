/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLIndirectCommandBufferDescriptor.h>

@interface MTLIndirectCommandBufferDescriptorInternal : MTLIndirectCommandBufferDescriptor

{
    unsigned long long _commandTypes;
    _Bool _inheritPipelineState;
    _Bool _inheritBuffers;
    unsigned long long _maxVertexBufferBindCount;
    unsigned long long _maxFragmentBufferBindCount;
    unsigned long long _maxKernelBufferBindCount;
    unsigned long long _resourceIndex;
}

@property (nonatomic) unsigned long long resourceIndex;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)commandTypes;
- (_Bool)inheritBuffers;
- (_Bool)inheritPipelineState;
- (unsigned long long)maxFragmentBufferBindCount;
- (unsigned long long)maxVertexBufferBindCount;
- (unsigned long long)maxKernelBufferBindCount;
- (void)setCommandTypes:(unsigned long long)arg1;
- (void)setInheritPipelineState:(_Bool)arg1;
- (void)setInheritBuffers:(_Bool)arg1;
- (void)setMaxVertexBufferBindCount:(unsigned long long)arg1;
- (void)setMaxFragmentBufferBindCount:(unsigned long long)arg1;
- (void)setMaxKernelBufferBindCount:(unsigned long long)arg1;

@end
