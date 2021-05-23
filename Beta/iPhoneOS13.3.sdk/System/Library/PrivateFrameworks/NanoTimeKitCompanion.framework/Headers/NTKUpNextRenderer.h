/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class CARenderer;

@protocol MTLTexture;

@interface NTKUpNextRenderer : NSObject

{
    CARenderer *_renderer;
    struct __IOSurface *_ioSurface;
    id <MTLTexture> _texture;
}

- (void)dealloc;
- (struct __IOSurface *)newSurfaceWithWidth:(double)arg1 height:(double)arg2;
- (id)renderView:(id)arg1;

@end
