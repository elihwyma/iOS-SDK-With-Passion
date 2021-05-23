/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsResourceStateCommandEncoder.h>

@interface MTLDebugResourceStateCommandEncoder : MTLToolsResourceStateCommandEncoder

{
    _Bool canDealloc;
    _Bool canEndEncoding;
    _Bool hasEndedEncoding;
    struct deque<id, std::__1::allocator<id>> updatedFences;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)endEncoding;
- (void)updateFence:(id)arg1;
- (void)waitForFence:(id)arg1;
- (void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const CDStruct_1e3be3a8 *)arg3 mipLevels:(const unsigned long long *)arg4 slices:(const unsigned long long *)arg5 numRegions:(unsigned long long)arg6;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(CDStruct_1e3be3a8)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4;
- (void)_setDefaults;
- (void)validateTextureAccess:(id)arg1 region:(CDStruct_1e3be3a8)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (_Bool)checkEncoderState;
- (void)validateSparseTextureMappingMode:(unsigned long long)arg1;
- (id)initWithResourceStateCommandEncoder:(id)arg1 commandBuffer:(id)arg2;

@end
