/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <Foundation/NSObject.h>

@class NSString, TXRTexture;

@interface GLKTextureTXR : NSObject

{
    unsigned int _loadTarget;
    TXRTexture *_texture;
    unsigned long long _API;
    _Bool _hasAlpha;
    _Bool _lossyCompressedSource;
    unsigned int _GLTextureName;
    unsigned int _target;
    unsigned int _mipmapLevelCount;
    unsigned int _arrayLength;
    unsigned int _width;
    unsigned int _height;
    unsigned int _depth;
    NSString *_label;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int GLTextureName;
@property (nonatomic) unsigned int target;
@property (nonatomic) unsigned int mipmapLevelCount;
@property (nonatomic) unsigned int arrayLength;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int depth;
@property (nonatomic) _Bool hasAlpha;
@property (nonatomic) _Bool lossyCompressedSource;

- (void)dealloc;
- (id)initWithTexture:(id)arg1 API:(unsigned long long)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)uploadToGLTexture:(unsigned int)arg1 error:(id *)arg2;

@end
