/*
 Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

#import <MetalTools/MTLToolsBlitCommandEncoder.h>

@interface MTLDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder

{
    _Bool canDealloc;
    _Bool canEndEncoding;
    _Bool hasEndEncoding;
    struct deque<id, std::__1::allocator<id>> updatedFences;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)endEncoding;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5;
- (void)fillBuffer:(id)arg1 range:(struct _NSRange)arg2 value:(unsigned char)arg3;
- (void)copyFromTexture:(id)arg1 toTexture:(id)arg2;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9;
- (void)generateMipmapsForTexture:(id)arg1;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9;
- (void)updateFence:(id)arg1;
- (void)waitForFence:(id)arg1;
- (void)optimizeContentsForGPUAccess:(id)arg1;
- (void)optimizeContentsForCPUAccess:(id)arg1;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 toTexture:(id)arg4 destinationSlice:(unsigned long long)arg5 destinationLevel:(unsigned long long)arg6 sliceCount:(unsigned long long)arg7 levelCount:(unsigned long long)arg8;
- (void)optimizeContentsForGPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)optimizeContentsForCPUAccess:(id)arg1 slice:(unsigned long long)arg2 level:(unsigned long long)arg3;
- (void)resetCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)copyIndirectCommandBuffer:(id)arg1 sourceRange:(struct _NSRange)arg2 destination:(id)arg3 destinationIndex:(unsigned long long)arg4;
- (void)optimizeIndirectCommandBuffer:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;
- (void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;
- (void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
- (void)getTextureAccessCounters:(id)arg1 region:(CDStruct_1e3be3a8)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4 resetCounters:(_Bool)arg5 countersBuffer:(id)arg6 countersBufferOffset:(unsigned long long)arg7;
- (void)resetTextureAccessCounters:(id)arg1 region:(CDStruct_1e3be3a8)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (void)_setDefaults;
- (void)internalValidateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;
- (void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10 move:(_Bool)arg11;
- (void)_resourceTrackingRecordBlitFromTex:(id)arg1 toTex:(id)arg2;
- (void)validateCopyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(CDStruct_14f26992)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(CDStruct_14f26992)arg9 options:(unsigned long long)arg10;
- (void)_resourceTrackingRecordBlitFromBuf:(id)arg1 toTex:(id)arg2;
- (void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(CDStruct_14f26992)arg4 sourceSize:(CDStruct_14f26992)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10;
- (void)_resourceTrackingRecordBlitFromTex:(id)arg1 toBuf:(id)arg2;
- (void)validateTextureAccess:(id)arg1 region:(CDStruct_1e3be3a8)arg2 mipLevel:(unsigned long long)arg3 slice:(unsigned long long)arg4;
- (void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceSize:(CDStruct_14f26992)arg4 toTexture:(id)arg5 destinationSlice:(unsigned long long)arg6 destinationLevel:(unsigned long long)arg7 options:(unsigned long long)arg8 sliceCount:(unsigned long long)arg9 levelCount:(unsigned long long)arg10;
- (id)initWithBlitCommandEncoder:(id)arg1 commandBuffer:(id)arg2;
- (void)_resourceTrackingRecordBlitFromBuf:(id)arg1 toBuf:(id)arg2;

@end
