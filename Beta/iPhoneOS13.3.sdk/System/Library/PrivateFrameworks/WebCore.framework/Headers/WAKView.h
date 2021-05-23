/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WAKResponder.h>

@class NSMutableSet;

@interface WAKView : WAKResponder

{
    struct _WKViewContext viewContext;
    struct _WKView *viewRef;
    NSMutableSet *subviewReferences;
    _Bool _isHidden;
    _Bool _drawsOwnDescendants;
}

+ (id)focusView;
+ (id)_wrapperForViewRef:(struct _WKView *)arg1;
+ (void)_setInterpolationQuality:(int)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (float)scale;
- (struct CGRect)bounds;
- (struct CGRect)frame;
- (void)setScale:(float)arg1;
- (void)layout;
- (struct CGRect)visibleRect;
- (id)superview;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(id)arg2;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(id)arg2;
- (void)setHidden:(_Bool)arg1;
- (_Bool)needsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (void)setFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutIfNeeded;
- (_Bool)isHiddenOrHasHiddenAncestor;
- (id)window;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(id)arg2;
- (id)nextResponder;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (id)subviews;
- (unsigned int)autoresizingMask;
- (void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(id)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)handleEvent:(id)arg1;
- (void)displayIfNeeded;
- (void)setNeedsLayout:(_Bool)arg1;
- (void)display;
- (id)hitTest:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setNeedsDisplay:(_Bool)arg1;
- (void)viewWillDraw;
- (void)displayRect:(struct CGRect)arg1;
- (id)lastScrollableAncestor;
- (void)viewDidMoveToWindow;
- (void)invalidateGState;
- (void)displayRectIgnoringOpacity:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)scrollPoint:(struct CGPoint)arg1;
- (_Bool)scrollRectToVisible:(struct CGRect)arg1;
- (_Bool)isDescendantOf:(id)arg1;
- (_Bool)accessibilityIsIgnored;
- (_Bool)needsPanelToBecomeKey;
- (void)setBoundsSize:(struct CGSize)arg1;
- (id)_initWithViewRef:(struct _WKView *)arg1;
- (void)setBoundsOrigin:(struct CGPoint)arg1;
- (_Bool)_selfHandleEvent:(id)arg1;
- (struct _WKView *)_viewRef;
- (id)_subviewReferences;
- (void)_lockFocusViewInContext:(struct CGContext *)arg1;
- (void)_drawRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 lockFocus:(_Bool)arg3;
- (void)_unlockFocusViewInContext:(struct CGContext *)arg1;
- (_Bool)_handleResponderCall:(int)arg1;
- (void)frameSizeChanged;
- (void)displayRectIgnoringOpacity:(struct CGRect)arg1;
- (void)lockFocus;
- (void)unlockFocus;
- (_Bool)mouse:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)setNextKeyView:(id)arg1;
- (id)previousValidKeyView;
- (id)nextKeyView;
- (id)nextValidKeyView;
- (id)previousKeyView;
- (void)releaseGState;
- (_Bool)inLiveResize;
- (void)_setDrawsOwnDescendants:(_Bool)arg1;

@end
