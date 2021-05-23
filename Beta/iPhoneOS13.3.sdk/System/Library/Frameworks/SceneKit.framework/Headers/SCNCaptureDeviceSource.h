/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNTextureSource.h>

@class AVCaptureDevice, AVCaptureSession, NSString;

@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNCaptureDeviceSource : SCNTextureSource

{
    AVCaptureDevice *_captureDevice;
    AVCaptureSession *_captureSession;
    struct __CVMetalTextureCache *_textureCache;
    struct __CVBuffer *_pixelBuffer;
    id <MTLTexture> _mtlTexture;
    _Bool _isFront;
    unsigned long long _width;
    unsigned long long _height;
}

@property (retain, nonatomic) AVCaptureDevice *captureDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)metalTextureWithEngineContext:(struct __C3DEngineContext *)arg1 textureSampler:(struct __C3DTextureSampler *)arg2 nextFrameTime:(double *)arg3;
- (void)cleanup:(struct __C3DRendererContext *)arg1;
- (void)connectToProxy:(struct __C3DImageProxy *)arg1;
- (void)discardVideoData;

@end
