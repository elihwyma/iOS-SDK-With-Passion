/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLIndirectArgumentBufferLayout.h>

__attribute__((visibility("hidden")))
@interface MTLEmulationIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout

{
    unsigned long long _stride;
    unsigned long long _alignment;
    void *_bufferIndices;
    void *_textureIndices;
    void *_samplerIndices;
    void *_constantIndices;
    void *_constantOffsets;
    unsigned long long _bufferOffset;
    unsigned long long _textureOffset;
    unsigned long long _samplerOffset;
}

@property (nonatomic, readonly) unsigned long long stride;

- (void)dealloc;
- (unsigned long long)alignment;
- (unsigned int)hashMask;
- (unsigned long long)encodedLength;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (_Bool)bufferLayoutMatchesFrontEndLayout;
- (unsigned int)hashValue;
- (unsigned int)hashOffset;
- (unsigned int)hashSignature;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;
- (unsigned long long)offsetForBuffer:(unsigned long long)arg1;
- (unsigned long long)offsetForTexture:(unsigned long long)arg1;
- (unsigned long long)offsetForSampler:(unsigned long long)arg1;
- (unsigned long long)offsetForConstant:(unsigned long long)arg1;
- (id)initWithStructType:(id)arg1;

@end
