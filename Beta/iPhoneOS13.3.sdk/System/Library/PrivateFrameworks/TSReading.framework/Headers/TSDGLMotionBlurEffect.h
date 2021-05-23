/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDGLDataBuffer, TSDGLFrameBuffer, TSDGLShader;

@interface TSDGLMotionBlurEffect : NSObject

{
    struct CGSize mFramebufferSize;
    struct CGSize mSlideSize;
    long long mDebugDrawMode;
    TSDGLFrameBuffer *mColorFrameBuffer;
    TSDGLShader *mVelocityVisualizerShader;
    TSDGLShader *mVelocityCollectionShader;
    TSDGLFrameBuffer *mVelocityFrameBuffer;
    TSDGLShader *mDefaultTextureShader;
    TSDGLDataBuffer *mVelocityFBODataBuffer;
    TSDGLDataBuffer *mFBODataBuffer;
    TSDGLShader *mBlurHorizontalShader;
    TSDGLShader *mBlurVerticalShader;
    double mDilationDistanceInSlidePercent;
    double mMotionBlurStrength;
    int mBackingWidth;
    int mBackingHeight;
}

@property (nonatomic, readonly) struct CGSize velocityScale;
@property (nonatomic) double dilationDistanceInSlidePercent;
@property (nonatomic) double motionBlurStrength;
@property (nonatomic) long long debugDrawMode;

- (void)dealloc;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;
- (void)p_updateMaxVelocityInShadersWithScale:(double)arg1;
- (void)p_setupVelocityFramebufferIfNecessary;
- (void)p_setupBlurShaders;
- (double)p_velocityFramebufferScale;
- (void)setupMotionBlurEffectIfNecessary;
- (void)p_dilateVelocityBufferWithCurrentGLFramebuffer:(int)arg1;
- (id)initWithFramebufferSize:(struct CGSize)arg1 slideSize:(struct CGSize)arg2;
- (void)updateVelocityScaleInShader:(id)arg1;
- (void)bindColorFramebuffer;
- (void)bindVelocityFramebuffer;
- (void)drawResultWithCurrentGLFramebuffer:(int)arg1;
- (struct CGSize)p_velocityFramebufferSize;
- (void)p_setupGLTextureParameters;

@end
