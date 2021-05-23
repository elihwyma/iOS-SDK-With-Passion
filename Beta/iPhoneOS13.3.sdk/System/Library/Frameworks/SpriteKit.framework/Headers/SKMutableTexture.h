/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <SpriteKit/SKTexture.h>

@interface SKMutableTexture : SKTexture

{
    struct __IOSurface *_ioSurface;
    _Bool _ioSurfaceBacked;
    struct CGSize _textureSize;
    void *_pixelData;
    unsigned long long _pixelDataLength;
    int _pixelFormat;
}

+ (id)mutableTextureWithSize:(struct CGSize)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithSize:(struct CGSize)arg1;
- (shared_ptr_bb77cfd9)_backingTexture;
- (void)modifyPixelDataWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSize:(struct CGSize)arg1 ioSurfaceBacked:(_Bool)arg2 pixelFormat:(int)arg3;
- (id)initWithSize:(struct CGSize)arg1 pixelFormat:(int)arg2;

@end
