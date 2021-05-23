/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUGLTexture.h>

@class NUIOSurface;

@interface _NUGLIOSurfaceTexture : NUGLTexture

{
    NUIOSurface *_surface;
}

@property (nonatomic, readonly) NUIOSurface *surface;

- (id)initWithIOSurface:(id)arg1;
- (id)initWithSize:(CDStruct_912cb5d2)arg1 format:(id)arg2;
- (_Bool)isSurface;
- (void)allocateStorage:(id)arg1;

@end
