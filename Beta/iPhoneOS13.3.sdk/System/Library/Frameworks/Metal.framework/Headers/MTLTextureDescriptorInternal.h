/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLTextureDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTextureDescriptorInternal : MTLTextureDescriptor

{
    struct MTLTextureDescriptorPrivate _private;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)depth;
- (void)setMipmapLevelCount:(unsigned long long)arg1;
- (unsigned long long)width;
- (unsigned long long)height;
- (void)setUsage:(unsigned long long)arg1;
- (void)setWidth:(unsigned long long)arg1;
- (void)setHeight:(unsigned long long)arg1;
- (unsigned long long)textureType;
- (unsigned long long)pixelFormat;
- (void)setStorageMode:(unsigned long long)arg1;
- (unsigned long long)usage;
- (void)setPixelFormat:(unsigned long long)arg1;
- (_Bool)isDrawable;
- (unsigned long long)rotation;
- (void)setRotation:(unsigned long long)arg1;
- (unsigned long long)arrayLength;
- (void)setTextureType:(unsigned long long)arg1;
- (void)setArrayLength:(unsigned long long)arg1;
- (unsigned long long)storageMode;
- (void)setDepth:(unsigned long long)arg1;
- (unsigned long long)mipmapLevelCount;
- (unsigned long long)sampleCount;
- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)resourceOptions;
- (void)setResourceOptions:(unsigned long long)arg1;
- (void)setFramebufferOnly:(_Bool)arg1;
- (void)setCpuCacheMode:(unsigned long long)arg1;
- (unsigned long long)cpuCacheMode;
- (void)setAllowGPUOptimizedContents:(_Bool)arg1;
- (_Bool)framebufferOnly;
- (void)setIsDrawable:(_Bool)arg1;
- (unsigned long long)protectionOptions;
- (unsigned long long)resourceIndex;
- (void)setResourceIndex:(unsigned long long)arg1;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (id)formattedDescription:(unsigned long long)arg1;
- (_Bool)validateWithDevice:(id)arg1;
- (unsigned long long)hazardTrackingMode;
- (_Bool)allowGPUOptimizedContents;
- (CDStruct_a06f635e)swizzle;
- (unsigned long long)sparseSurfaceDefaultValue;
- (void)setSparseSurfaceDefaultValue:(unsigned long long)arg1;
- (_Bool)forceResourceIndex;
- (void)setForceResourceIndex:(_Bool)arg1;
- (void)setHazardTrackingMode:(unsigned long long)arg1;
- (unsigned long long)textureUsage;
- (void)setTextureUsage:(unsigned long long)arg1;
- (void)setSwizzle:(CDStruct_a06f635e)arg1;
- (void)setSwizzleKey:(unsigned int)arg1;
- (unsigned int)swizzleKey;
- (void)setWriteSwizzleEnabled:(_Bool)arg1;
- (_Bool)writeSwizzleEnabled;
- (unsigned long long)compressionMode;
- (void)setCompressionMode:(unsigned long long)arg1;
- (const struct MTLTextureDescriptorPrivate *)descriptorPrivate;

@end
