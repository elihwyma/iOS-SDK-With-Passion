/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface TDreamFramebuffer : NSObject

{
    _Bool _ownsTexture;
    _Bool _ownsFBO;
    struct __CVOpenGLESTextureCache *_textureCache;
    _Bool _validLUT;
    unsigned int _texture;
    unsigned int _framebuffer;
    struct CGSize _size;
}

@property (readonly) struct CGSize size;
@property (readonly) unsigned int texture;
@property (readonly) unsigned int framebuffer;
@property (readonly) _Bool validLUT;

- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithTexName:(id)arg1;
- (id)initWithExistingImageTexture:(struct IPImage)arg1;
- (void)generateFramebuffer;
- (void)generateFramebufferTex:(id)arg1;

@end
