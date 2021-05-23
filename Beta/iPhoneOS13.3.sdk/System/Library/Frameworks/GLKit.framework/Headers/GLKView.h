/*
 Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

#import <UIKit/UIView.h>

@class EAGLContext, NSMutableDictionary, UIImage;

@protocol GLKViewDelegate;

@interface GLKView : UIView

{
    _Bool _inDraw;
    _Bool _shouldDeleteFramebuffer;
    _Bool _enableSetNeedsDisplay;
    unsigned int _resolveFramebuffer;
    unsigned int _resolveColorRenderbuffer;
    unsigned int _multisampleFramebuffer;
    unsigned int _multisampleColorRenderbuffer;
    unsigned int _depthRenderbuffer;
    unsigned int _stencilRenderbuffer;
    unsigned int _depthStencilRenderbuffer;
    int _drawableColorFormat;
    int _drawableDepthFormat;
    int _drawableStencilFormat;
    int _drawableMultisample;
    NSMutableDictionary *_drawableProperties;
    double _viewContentScaleFactor;
    id <GLKViewDelegate> _delegate;
    EAGLContext *_context;
    long long _drawableWidth;
    long long _drawableHeight;
    CDUnknownFunctionPointerType _drawRectIMP;
    struct CGRect _viewBounds;
}

@property (nonatomic) _Bool inDraw;
@property (retain, nonatomic) NSMutableDictionary *drawableProperties;
@property (nonatomic) _Bool shouldDeleteFramebuffer;
@property (nonatomic) unsigned int resolveFramebuffer;
@property (nonatomic) unsigned int resolveColorRenderbuffer;
@property (nonatomic) unsigned int multisampleFramebuffer;
@property (nonatomic) unsigned int multisampleColorRenderbuffer;
@property (nonatomic) unsigned int depthRenderbuffer;
@property (nonatomic) unsigned int stencilRenderbuffer;
@property (nonatomic) unsigned int depthStencilRenderbuffer;
@property (nonatomic) struct CGRect viewBounds;
@property (nonatomic) double viewContentScaleFactor;
@property (nonatomic) CDUnknownFunctionPointerType drawRectIMP;
@property (nonatomic) id <GLKViewDelegate> delegate;
@property (retain, nonatomic) EAGLContext *context;
@property (nonatomic, readonly) long long drawableWidth;
@property (nonatomic, readonly) long long drawableHeight;
@property (nonatomic) int drawableColorFormat;
@property (nonatomic) int drawableDepthFormat;
@property (nonatomic) int drawableStencilFormat;
@property (nonatomic) int drawableMultisample;
@property (readonly) UIImage *snapshot;
@property (nonatomic) _Bool enableSetNeedsDisplay;

+ (Class)layerClass;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setContentScaleFactor:(double)arg1;
- (void)displayLayer:(id)arg1;
- (_Bool)_canDrawContent;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)display;
- (_Bool)_controlsOwnScaleFactor;
- (void)_initCommon;
- (_Bool)_presentFramebuffer;
- (void)_deleteFramebuffer;
- (void)_createFramebuffer;
- (void)_setFramebuffer:(_Bool *)arg1;
- (void)_resolveAndDiscard;
- (void)_display:(_Bool)arg1;
- (void)deleteDrawable;
- (void)bindDrawable;

@end
