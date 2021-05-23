/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsBuffer.h>

@interface MTLTelemetryBuffer : MTLToolsBuffer

- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;
- (void)accumBufferDistribution:(id)arg1 options:(unsigned long long)arg2;

@end
