/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDGLShadow : NSObject

+ (id)sharedContext;
+ (id)renderQueue;

- (void)setupGLTextureParameters;
- (struct CGImage *)newCGImageFromGLBuffer:(char **)arg1;
- (void)createOffscreenRenderBuffer:(struct CGSize)arg1 framebuffer:(id)arg2 requiresDepth:(_Bool)arg3 colorRenderBuffer:(unsigned int *)arg4 depthRenderBuffer:(unsigned int *)arg5;

@end
