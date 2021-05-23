/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLTextureReferenceType.h>

__attribute__((visibility("hidden")))
@interface MTLTextureReferenceTypeInternal : MTLTextureReferenceType

{
    unsigned long long _dataType;
    unsigned long long _textureDataType;
    unsigned long long _textureType;
    unsigned long long _access;
    _Bool _isDepthTexture;
}

- (void)dealloc;
- (unsigned long long)textureType;
- (unsigned long long)access;
- (unsigned long long)dataType;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDataType:(unsigned long long)arg1 textureType:(unsigned long long)arg2 access:(unsigned long long)arg3 isDepthTexture:(_Bool)arg4;
- (_Bool)isDepthTexture;
- (unsigned long long)textureDataType;

@end
