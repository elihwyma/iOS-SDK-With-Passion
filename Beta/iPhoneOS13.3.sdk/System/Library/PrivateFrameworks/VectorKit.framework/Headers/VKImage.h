/*
 Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, VKResourceManager;

@interface VKImage : NSObject

{
    struct CGImage *_imageRef;
    NSData *_data;
    NSString *_name;
    struct Texture2D *_gglTexture;
    struct shared_ptr<md::TextureAtlasRegion> _textureAtlasRegion;
    Box_8bd38d92 _textureCoordinates;
    struct CGRect _collisionRect;
    struct CGPoint _anchorPoint;
    struct CGSize _size;
    double _scale;
    _Bool _hasCollisionRect;
    _Bool _hasAnchorPoint;
    _Bool _usedAsTextureAndImage;
    struct atomic<bool> _isTextureReady;
    struct atomic<bool> _isImageReady;
    VKResourceManager *_resourceManager;
    unsigned char _imageHash[16];
}

- (void)dealloc;
- (struct CGSize)size;
- (double)scale;
- (id).cxx_construct;
- (struct CGImage *)image;
- (struct CGPoint)anchorPoint;
- (void)setAnchorPoint:(struct CGPoint)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (int)compareTo:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 usedAsTextureAndImage:(_Bool)arg3;
- (id)initWithData:(id)arg1 scale:(double)arg2 usedAsTextureAndImage:(_Bool)arg3;
- (void)prepareTextureWithAtlas:(struct TextureAtlas *)arg1;
- (void)_prepareTextureWithAtlas:(struct TextureAtlas *)arg1;
- (void)_prepareImage;
- (struct Texture2D *)gglTexture;
- (id)initWithName:(id)arg1 scale:(double)arg2 resourceManager:(id)arg3;
- (const Box_8bd38d92 *)textureCoordinates;
- (struct CGRect)collisionRect;
- (void)setCollisionRect:(struct CGRect)arg1;

@end
