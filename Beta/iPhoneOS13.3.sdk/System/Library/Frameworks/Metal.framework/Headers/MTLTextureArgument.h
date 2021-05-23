/*
 Image: /System/Library/Frameworks/Metal.framework/Metal
 */

#import <Metal/MTLArgumentInternal.h>

__attribute__((visibility("hidden")))
@interface MTLTextureArgument : MTLArgumentInternal

{
    unsigned int _textureType:15;
    unsigned int _isDepthTexture:1;
    unsigned short _textureDataType;
}

- (unsigned long long)textureType;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 access:(unsigned long long)arg2 isActive:(_Bool)arg3 locationIndex:(unsigned long long)arg4 arraySize:(unsigned long long)arg5 dataType:(unsigned long long)arg6 textureType:(unsigned long long)arg7 isDepthTexture:(_Bool)arg8;
- (_Bool)isDepthTexture;
- (unsigned long long)textureDataType;

@end
