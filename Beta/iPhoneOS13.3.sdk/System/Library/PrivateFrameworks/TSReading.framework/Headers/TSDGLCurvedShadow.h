/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDGLShadow.h>

@class CIContext, TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

@interface TSDGLCurvedShadow : TSDGLShadow

{
    TSDGLFrameBuffer *mAlphaFrameBuffer;
    TSDGLDataBuffer *mAlphaDataBuffer;
    TSDGLShader *mAlphaShader;
    TSDGLFrameBuffer *mCurvedFrameBuffer;
    TSDGLDataBuffer *mCurvedDataBuffer;
    TSDGLShader *mCurvedShader;
    TSDGLFrameBuffer *mCurveInterpolationFrameBuffer;
    TSDGLDataBuffer *mCurveInterpolationDataBuffer;
    TSDGLShader *mCurveInterpolationShader;
    char *mBuffer;
    CIContext *mCIContext;
}

+ (void)applicationDidBecomeActive;
+ (void)applicationWillResignActive;

- (void)dealloc;
- (void)drawShadow:(id)arg1 forImage:(struct CGImage *)arg2 inContext:(struct CGContext *)arg3 forSize:(struct CGSize)arg4;
- (_Bool)p_shrinkImageIfNecessary:(struct CGImage *)arg1 originalSize:(struct CGSize)arg2 newImage:(struct CGImage **)arg3 newSize:(struct CGSize *)arg4;
- (void)p_bindAlphaShaderForShadow:(id)arg1 framebufferSize:(struct CGSize)arg2;
- (struct CGImage *)newCGImageWithTexture:(id)arg1 size:(struct CGSize)arg2 shader:(id)arg3 framebuffer:(id)arg4 databuffer:(id)arg5;
- (void)p_bindCurvedShaderForShadow:(id)arg1 framebufferSize:(struct CGSize)arg2;
- (double)baseBlurRadiusForCurvedShadow:(id)arg1 framebufferSize:(struct CGSize)arg2;
- (void)p_newBlurredImageFromImage:(struct CGImage *)arg1 blurRadius:(double)arg2 halfBlurredImage:(struct CGImage **)arg3 blurredImage:(struct CGImage **)arg4 framebufferSize:(struct CGSize)arg5;
- (void)p_bindCurvedInterpolationShaderForShadow:(id)arg1 framebufferSize:(struct CGSize)arg2;
- (void)p_newBlurredImageFromImage:(struct CGImage *)arg1 blurRadius:(double)arg2 blurredImage:(struct CGImage **)arg3 framebufferSize:(struct CGSize)arg4;
- (void)p_newTintedImage:(struct CGImage **)arg1 fromImage:(struct CGImage *)arg2 withColor:(CDStruct_f2e236b6)arg3 framebufferSize:(struct CGSize)arg4;
- (void)p_deleteFramebuffersWithCurrentGLFramebuffer:(int)arg1;
- (void)p_setupCIContextForFramebufferSize:(struct CGSize)arg1;
- (void)p_unbindFramebuffersWithCurrentGLFramebuffer:(int)arg1;
- (void)releaseShaders;

@end
