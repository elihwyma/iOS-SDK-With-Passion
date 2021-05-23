/*
 Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

#import <UIKit/UIView.h>

@class CADisplayLink, CAMetalLayer, MTKOffscreenDrawable, MTLRenderPassDescriptor, NSString;

@protocol CAMetalDrawable, MTKViewDelegate, MTLDevice, MTLTexture;

@interface MTKView : UIView

{
    CAMetalLayer *_metalLayer;
    _Bool _sizeDirty;
    struct CGSize _drawableScaleFactor;
    _Bool _pausedOnBackgrounding;
    CADisplayLink *_displayLink;
    id <CAMetalDrawable> _currentDrawable;
    CDUnknownFunctionPointerType _drawRectSubIMP;
    _Bool _subClassOverridesDrawRect;
    _Bool _deviceReset;
    _Bool _doesNotifyOnRecommendedSizeUpdate;
    id <MTLTexture> _depthStencilTexture;
    id <MTLTexture> _multisampleColorTexture;
    _Bool _framebufferOnly;
    unsigned long long _depthStencilTextureUsage;
    unsigned long long _multisampleColorTextureUsage;
    unsigned long long _drawableAttachmentIndex;
    long long _nominalFramesPerSecond;
    long long _maxValidAttachmentIndex;
    unsigned long long _colorPixelFormats[8];
    id <MTLTexture> _multisampleColorTextures[8];
    id <MTLTexture> _colorTextures[8];
    MTKOffscreenDrawable *_offscreenSwapChain[3];
    unsigned long long _drawableIdx;
    int _renderAttachmentDirtyState;
    unsigned long long _terminateAfterFrame;
    unsigned long long _terminateAfterSeconds;
    unsigned long long _measureAfterFrame;
    unsigned long long _measureAfterSeconds;
    unsigned long long _dumpFrameAtFrame;
    unsigned long long _dumpFrameAtSeconds;
    NSString *_dumpPath;
    _Bool _dumpFirstFrame;
    _Bool _drawOffscreen;
    long long _forceOrientation;
    double _startTime;
    unsigned int _frameNum;
    _Bool _enableSetNeedsDisplay;
    _Bool _autoResizeDrawable;
    _Bool _paused;
    unsigned int _clearStencil;
    id <MTKViewDelegate> _delegate;
    id <MTLDevice> _device;
    unsigned long long _depthStencilPixelFormat;
    unsigned long long _sampleCount;
    double _clearDepth;
    long long _preferredFramesPerSecond;
    struct CGSize _drawableSize;
    struct CGSize _preferredDrawableSize;
    CDStruct_3ead2808 _clearColor;
}

@property (weak, nonatomic) id <MTKViewDelegate> delegate;
@property (retain, nonatomic) id <MTLDevice> device;
@property (nonatomic, readonly) id <CAMetalDrawable> currentDrawable;
@property (nonatomic) _Bool framebufferOnly;
@property (nonatomic) unsigned long long depthStencilAttachmentTextureUsage;
@property (nonatomic) unsigned long long multisampleColorAttachmentTextureUsage;
@property (nonatomic) _Bool presentsWithTransaction;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthStencilPixelFormat;
@property (nonatomic) unsigned long long sampleCount;
@property (nonatomic) CDStruct_3ead2808 clearColor;
@property (nonatomic) double clearDepth;
@property (nonatomic) unsigned int clearStencil;
@property (nonatomic, readonly) id <MTLTexture> depthStencilTexture;
@property (nonatomic, readonly) id <MTLTexture> multisampleColorTexture;
@property (nonatomic, readonly) MTLRenderPassDescriptor *currentRenderPassDescriptor;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic) _Bool enableSetNeedsDisplay;
@property (nonatomic) _Bool autoResizeDrawable;
@property (nonatomic) struct CGSize drawableSize;
@property (nonatomic, readonly) struct CGSize preferredDrawableSize;
@property (readonly) id <MTLDevice> preferredDevice;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) struct CGColorSpace *colorspace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)layerClass;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (double)startTime;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setContentScaleFactor:(double)arg1;
- (void)displayLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (_Bool)_canDrawContent;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (_Bool)_controlsOwnScaleFactor;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;
- (void)draw;
- (void)getEnvironmentSettings;
- (void)_resizeDrawable;
- (void)setColorPixelFormat:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)_resizeMetalLayerDrawable;
- (void)createDepthStencilTexture;
- (const id *)multisampleColorTexturesForceUpdate:(_Bool)arg1;
- (const id *)colorTextures;
- (const id *)colorTexturesForceUpdate:(_Bool)arg1;
- (const id *)multisampleColorTextures;
- (long long)_calculateRefeshesPerSecond;
- (void)setNominalFramesPerSecond:(long long)arg1;
- (void)_updateToNativeScale;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)releaseDrawables;
- (void)__initCommon;
- (void)setDrawableAttachmentIndex:(unsigned long long)arg1;
- (unsigned long long)drawableAttachmentIndex;
- (void)_dumpFrameImageWithFilename:(id)arg1;
- (void)_dumpFramerate:(double)arg1 withFilename:(id)arg2;
- (struct CGSize)_pixelSizeFromPointSize:(struct CGSize)arg1;
- (_Bool)exportToTargaAtLocation:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 size:(unsigned long long)arg4 bytes:(void *)arg5;
- (unsigned long long)drawNumber;
- (long long)nominalFramesPerSecond;

@end
