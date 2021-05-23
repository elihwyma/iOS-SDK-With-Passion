/*
 Image: /System/Library/Frameworks/HealthKitUI.framework/HealthKitUI
 */

#import <UIKit/UIView.h>

@class CADisplayLink, EAGLContext, UIScreen;

@interface HKGLView : UIView

{
    EAGLContext *_context;
    UIScreen *_screen;
    CADisplayLink *_displayLink;
    _Bool _displayLinkPaused;
    _Bool _viewWillMoveToWindow;
    double _lastUpdateTime;
    unsigned int _latestDrawError;
    int _drawableWidth;
    int _drawableHeight;
    _Bool _shouldDeleteFramebuffer;
    unsigned int _resolveColorRenderbuffer;
    unsigned int _multisampleFramebuffer;
    unsigned int _multisampleColorRenderbuffer;
    unsigned int _resolveFramebuffer;
    unsigned int _depthRenderbuffer;
    _Bool _contextPushed;
    _Bool _viewSnapshottingActive;
    _Bool _synchronizesWithCA;
    _Bool _use4XMSAA;
    _Bool _shouldBypassApplicationStateChecking;
    _Bool _viewIsVisible;
    float _preferredFramesPerSecond;
    int _drawableDepthFormat;
}

@property (nonatomic) _Bool synchronizesWithCA;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) float preferredFramesPerSecond;
@property (nonatomic) _Bool use4XMSAA;
@property (nonatomic) int drawableDepthFormat;
@property (nonatomic) _Bool shouldBypassApplicationStateChecking;
@property (nonatomic, readonly) double timeSinceLastUpdate;
@property (nonatomic, readonly) _Bool viewIsVisible;

+ (Class)layerClass;
+ (void)clearCachedProgramForVertexShader:(id)arg1 fragmentShader:(id)arg2;

- (void)dealloc;
- (void)_update;
- (id)initWithContext:(id)arg1;
- (void)update;
- (id)snapshot;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)setContentScaleFactor:(double)arg1;
- (void)displayLayer:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)_canDrawContent;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (_Bool)_controlsOwnScaleFactor;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)_deleteFramebuffer;
- (void)_updateScreenIfChanged;
- (void)_invalidateLastUpdateTime;
- (void)_updateGLLayerIsAsynchronous;
- (void)performWithContext:(CDUnknownBlockType)arg1;
- (void)_pauseByNotification:(id)arg1;
- (void)_resumeByNotification:(id)arg1;
- (void)_viewSnapshottingWillBegin;
- (void)_viewSnapshottingDidEnd;
- (_Bool)_isLastUpdateTimeValid;
- (id)_context_generateSnapshot;
- (_Bool)_shouldAllowRendering;
- (void)_context_displayAndPresentFramebuffer:(_Bool)arg1;
- (void)_context_checkAndRepairFramebuffer;
- (unsigned int)drawInRect:(struct CGRect)arg1 withContext:(id)arg2;
- (void)loadVertexShaderSource:(id)arg1 fragmentShaderSource:(id)arg2 forProgram:(unsigned int *)arg3;
- (void)_displayLinkFired;
- (void)_context_deleteFramebuffer;
- (_Bool)_context_createFramebuffer;
- (void)_context_prepareFramebuffer:(_Bool *)arg1;
- (void)_context_drawRect:(struct CGRect)arg1;
- (void)_context_resolveAndDiscardFramebuffer;
- (_Bool)_context_presentFramebuffer;
- (void)loadVertexShader:(id)arg1 fragmentShader:(id)arg2 inBundle:(id)arg3 forProgram:(unsigned int *)arg4 cache:(_Bool)arg5;

@end
