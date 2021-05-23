/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NURenderer.h>

@class NSString, NUGLContext;

@interface NUOpenGLRenderer : NURenderer

{
    NSString *_rendererString;
    NSString *_versionString;
    NUGLContext *_glContext;
}

@property (nonatomic, readonly) NUGLContext *glContext;

- (id)name;
- (id)initWithCIContext:(id)arg1;
- (id)initWithGLContext:(id)arg1 options:(id)arg2;
- (void)_renderImage:(id)arg1 toTexture:(id)arg2 bounds:(CDStruct_996ac03c)arg3 withColorSpace:(id)arg4;
- (id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3;
- (id)renderDestinationForSurface:(id)arg1 owner:(id)arg2;
- (id)_textureForSurface:(id)arg1 owner:(id)arg2;

@end
