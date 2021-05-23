/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

#import <GLKit/Swift-Protocol.h>

@interface GLKTextureInfo : NSObject <Swift>

{
    unsigned int name;
    unsigned int target;
    unsigned int width;
    unsigned int height;
    unsigned int depth;
    int alphaState;
    int textureOrigin;
    _Bool containsMipmaps;
    unsigned int mimapLevelCount;
    unsigned int arrayLength;
    _Bool lossyCompressedSource;
}

@property (readonly) unsigned int name;
@property (readonly) unsigned int target;
@property (readonly) unsigned int width;
@property (readonly) unsigned int height;
@property (readonly) unsigned int depth;
@property (readonly) int alphaState;
@property (readonly) int textureOrigin;
@property (readonly) _Bool containsMipmaps;
@property (readonly) unsigned int mimapLevelCount;
@property (readonly) unsigned int arrayLength;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)lossyCompressedSource;
- (id)initWithTexture:(id)arg1 textureName:(unsigned int)arg2;
- (id)initWithTextureTXR:(id)arg1 textureName:(unsigned int)arg2;

@end
