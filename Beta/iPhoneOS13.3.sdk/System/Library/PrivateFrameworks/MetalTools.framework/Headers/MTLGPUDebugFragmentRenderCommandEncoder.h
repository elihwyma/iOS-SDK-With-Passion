/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsFragmentRenderCommandEncoder.h>

__attribute__((visibility("hidden")))
@interface MTLGPUDebugFragmentRenderCommandEncoder : MTLToolsFragmentRenderCommandEncoder

{
    struct MTLGPUDebugBufferArgumentData _fragmentBuffers;
    unsigned long long _pipelineStateID;
    unsigned int _encoderID;
    unsigned int _currentDrawID;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)endEncoding;
- (void)setRenderPipelineState:(id)arg1;
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)drawTrianglesWithPositions:(const float *)arg1 vertexCount:(unsigned long long)arg2 triangleIndices:(const char *)arg3 triangleCount:(unsigned long long)arg4;
- (void)drawTrianglesWithPositions:(const float *)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float *)arg3 varyingCountPerVertex:(unsigned long long)arg4 triangleIndices:(const char *)arg5 triangleCount:(unsigned long long)arg6;
- (void)drawTrianglesWithPositions:(const float *)arg1 vertexCount:(unsigned long long)arg2 vertexVaryings:(const float *)arg3 varyingCountPerVertex:(unsigned long long)arg4;
- (void)onDraw;
- (id)initWithFragmentRenderCommandEncoder:(id)arg1 commandBuffer:(id)arg2 descriptor:(id)arg3 encoderID:(unsigned int)arg4;

@end
