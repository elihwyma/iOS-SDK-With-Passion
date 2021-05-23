/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsComputeCommandEncoder.h>

@interface MTLGPUDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder

{
    struct MTLGPUDebugBufferArgumentData _buffers;
    unsigned int _encoderID;
    unsigned int _currentDispatchID;
    unsigned long long _currentPipelineID;
}

- (id).cxx_construct;
- (void)setComputePipelineState:(id)arg1;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)endEncoding;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)dispatchThreadsWithIndirectBuffer:(id)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)onDispatch;
- (id)initWithComputeCommandEncoder:(id)arg1 parent:(id)arg2 encoderID:(unsigned int)arg3;

@end
