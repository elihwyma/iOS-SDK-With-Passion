/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Foundation/NSObject.h>

@protocol MTLDeviceSPI;

@interface _MTLIndirectArgumentBufferLayout : NSObject

{
    struct _MTLIndirectArgumentBufferLayoutPrivate *_private;
}

@property (readonly) _Bool bufferLayoutMatchesFrontEndLayout;
@property (readonly) unsigned long long encodedLength;
@property (readonly) unsigned long long alignment;
@property (readonly) unsigned int hashValue;
@property (readonly) unsigned int hashOffset;
@property (readonly) unsigned int hashMask;
@property (readonly) unsigned int hashSignature;
@property (nonatomic, readonly) id <MTLDeviceSPI> device;

- (id)init;
- (void)dealloc;
- (void)setStructType:(id)arg1 withDevice:(id)arg2;
- (void *)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3;
- (unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1;
- (id)bufferLayoutForResourceAtIndex:(unsigned long long)arg1;

@end
