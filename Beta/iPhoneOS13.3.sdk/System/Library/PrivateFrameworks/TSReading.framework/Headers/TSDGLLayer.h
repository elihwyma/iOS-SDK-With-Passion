/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <QuartzCore/CAEAGLLayer.h>

@class CADisplayLink, NSObject;

@protocol TSDGLLayerContext, TSDGLLayerDelegate;

@interface TSDGLLayer : CAEAGLLayer

{
    NSObject<TSDGLLayerDelegate> *mDelegate;
    id <TSDGLLayerContext> mContext;
    CADisplayLink *mDisplayLink;
}

@property (nonatomic) NSObject<TSDGLLayerDelegate> *animationDelegate;

- (void)dealloc;
- (void)lock;
- (void)unlock;
- (void)teardown;
- (void)startAnimation;
- (void)stopAnimation;
- (void)pauseAnimation;
- (void)resumeAnimation;
- (void)p_drawFrameAtLayerTime:(double)arg1;
- (void)p_drawFrameFromDisplayLink:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isOpaque:(_Bool)arg2 delegate:(id)arg3;
- (void)setCurrentContext;
- (void)displayAtCurrentLayerTime;

@end
