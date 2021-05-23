/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsObject.h>

@class NSString;

@interface MTLToolsTextureLayout : MTLToolsObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long alignment;
@property (readonly) CDStruct_14f26992 copyGranularity;
@property (readonly) CDStruct_492b6082 watermark;

- (void)initializeTextureMemory:(void *)arg1;
- (void)copyFromLinearBytes:(const void *)arg1 linearOffset:(unsigned long long)arg2 linearBytesPerRow:(unsigned long long)arg3 linearBytesPerImage:(unsigned long long)arg4 toTextureMemory:(void *)arg5 textureSlice:(unsigned long long)arg6 textureLevel:(unsigned long long)arg7 textureRegion:(CDStruct_1e3be3a8)arg8;
- (void)copyFromTextureMemory:(const void *)arg1 textureSlice:(unsigned long long)arg2 textureLevel:(unsigned long long)arg3 textureRegion:(CDStruct_1e3be3a8)arg4 toLinearBytes:(void *)arg5 linearOffset:(unsigned long long)arg6 linearBytesPerRow:(unsigned long long)arg7 linearBytesPerImage:(unsigned long long)arg8;
- (void)finalizeTextureMemory:(void *)arg1;
- (void)acceptVisitor:(id)arg1;

@end
