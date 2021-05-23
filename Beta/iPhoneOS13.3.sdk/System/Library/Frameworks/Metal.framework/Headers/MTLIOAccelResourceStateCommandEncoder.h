/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLIOAccelCommandEncoder.h>

@interface MTLIOAccelResourceStateCommandEncoder : MTLIOAccelCommandEncoder

- (unsigned long long)getType;
- (void)updateTextureMappings:(id)arg1 mode:(unsigned long long)arg2 regions:(const CDStruct_caaed6bc *)arg3 mipLevels:(const unsigned long long *)arg4 slices:(const unsigned long long *)arg5 numRegions:(unsigned long long)arg6;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 region:(CDStruct_caaed6bc)arg3 mipLevel:(unsigned long long)arg4 slice:(unsigned long long)arg5;
- (void)updateTextureMapping:(id)arg1 mode:(unsigned long long)arg2 indirectBuffer:(id)arg3 indirectBufferOffset:(unsigned long long)arg4;

@end
