/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/_MTLIndirectArgumentEncoder.h>

@interface MTLIOAccelIndirectArgumentEncoder : _MTLIndirectArgumentEncoder

@property (readonly) unsigned long long encodedLength;

- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
- (void *)constantDataAtIndex:(unsigned long long)arg1;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setIndirectArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;

@end
