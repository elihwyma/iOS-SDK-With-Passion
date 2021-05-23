/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

@interface TSDGLBloomEffect : NSObject

{
    struct CGSize _effectSize;
    struct CGSize _blurBufferSize;
    TSDGLFrameBuffer *_colorFramebuffer;
    TSDGLFrameBuffer *_blurFramebuffer;
    TSDGLDataBuffer *_dataBuffer;
    TSDGLDataBuffer *_blurTransferDataBuffer;
    TSDGLDataBuffer *_blurDataBuffer;
    TSDGLShader *_blurHorizontalShader;
    TSDGLShader *_blurVerticalShader;
    TSDGLShader *_bloomShader;
    TSDGLShader *_fboTransferShader;
    int _oldViewportRect[4];
    _Bool _oldViewportRectInitialized;
}

- (void)dealloc;
- (void)teardown;
- (void)bindFramebuffer;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)p_setupBuffers;
- (void)p_setupShaders;
- (void)p_blurColorBufferWithPreviousFramebuffer:(int)arg1;
- (id)initWithEffectSize:(struct CGSize)arg1 blurScale:(double)arg2;
- (void)drawBloomEffectWithMVPMatrix:(struct CATransform3D)arg1 bloomAmount:(double)arg2 currentGLFramebuffer:(int)arg3;

@end
