/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <WebKitLegacy/WAKView.h>

@class CALayer, UIView, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPlugInView : WAKView

{
    UIWebDocumentView *_webView;
    CALayer *_hostingLayer;
    UIView *_uiView;
    struct __CFRunLoopObserver *_mainRunLoopDrawObserver;
    _Bool _isFullScreen;
    _Bool _parentedInLayer;
    _Bool _isQuickTimePlugIn;
    _Bool _isMapViewPlugIn;
    _Bool _isiAdPlugIn;
}

@property (nonatomic, getter=isParentedInLayer) _Bool parentedInLayer;
@property (nonatomic) _Bool isQuickTimePlugIn;
@property (nonatomic) _Bool isMapViewPlugIn;
@property (nonatomic) _Bool isiAdPlugIn;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)layout;
- (void)setFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)mouseUp:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (_Bool)willProvidePluginLayer;
- (void)reshape;
- (id)initWithWebView:(id)arg1 plugInView:(id)arg2;
- (id)plugInView;
- (void)viewDidMoveToWindow;
- (void)_viewDidMoveToWindowOnMainThread;
- (void)invalidateGState;
- (void)_reshapeOnMainThread;
- (_Bool)isParented;
- (void)webPlugInInitialize;
- (void)webPlugInStart;
- (void)webPlugInStop;
- (void)webPlugInDestroy;
- (id)objectForWebScript;
- (void)_connectPluginLayers;
- (void)_disconnectPluginLayers;
- (void)_attachPluginLayerOnMainThread;
- (void)_detachPluginLayerOnMainThread;
- (void)mouseDown:(id)arg1;
- (id)pluginLayer;
- (void)attachPluginLayer;
- (void)detachPluginLayer;

@end
