/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/Swift-Protocol.h>

@class MISSING_TYPE;

@protocol MTLTextureLayout <Swift>

@property (readonly) unsigned long long size;
@property (readonly) unsigned long long alignment;
@property (readonly) CDStruct_14f26992 copyGranularity;
@property (readonly) CDStruct_492b6082 watermark;

- (MISSING_TYPE *)copyFromLinearBytes:linearOffset:linearBytesPerRow:linearBytesPerImage:toTextureMemory:textureSlice:textureLevel:textureRegion: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)copyFromTextureMemory:textureSlice:textureLevel:textureRegion:toLinearBytes:linearOffset:linearBytesPerRow:linearBytesPerImage: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)finalizeTextureMemory: /* Error: Ran out of types for this method. */;

@end
