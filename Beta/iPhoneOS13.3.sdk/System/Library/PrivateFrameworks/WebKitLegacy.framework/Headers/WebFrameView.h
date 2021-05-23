/*
 Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

#import <WebCore/WAKView.h>

@class WebFrame, WebFrameViewPrivate;

@protocol WebDocumentView;

@interface WebFrameView : WAKView

{
    WebFrameViewPrivate *_private;
}

@property (nonatomic, readonly) WebFrame *webFrame;
@property (nonatomic, readonly) WAKView<WebDocumentView> *documentView;
@property (nonatomic) _Bool allowsScrolling;
@property (nonatomic, readonly) _Bool documentViewShouldHandlePrint;

+ (id)_viewTypesAllowImageTypeOmission:(_Bool)arg1;
+ (Class)_viewClassForMIMEType:(id)arg1 allowingPlugins:(_Bool)arg2;
+ (_Bool)_canShowMIMETypeAsHTML:(id)arg1;

- (void)dealloc;
- (_Bool)isOpaque;
- (struct CGRect)visibleRect;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_webView;
- (id)_contentView;
- (_Bool)becomeFirstResponder;
- (void)drawRect:(struct CGRect)arg1;
- (id)_scrollView;
- (void)mouseUp:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)viewDidMoveToWindow;
- (void)mouseDown:(id)arg1;
- (float)_area;
- (void)_install;
- (struct Frame *)_web_frame;
- (_Bool)acceptsFirstResponder;
- (void)_setDocumentView:(id)arg1;
- (_Bool)scrollView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2;
- (void)keyDown:(id)arg1;
- (void)frameSizeChanged;
- (void)setNextKeyView:(id)arg1;
- (void)_setWebFrame:(id)arg1;
- (Class)_viewClassForMIMEType:(id)arg1;
- (id)_makeDocumentViewForDataSource:(id)arg1;
- (float)_verticalKeyboardScrollDistance;
- (float)_verticalPageScrollDistance;
- (void)_frameSizeChanged;
- (_Bool)_scrollOverflowInDirection:(unsigned char)arg1 granularity:(unsigned char)arg2;
- (_Bool)_isScrollable;
- (_Bool)_isVerticalDocument;
- (_Bool)_isFlippedDocument;
- (_Bool)_scrollToBeginningOfDocument;
- (id)_largestScrollableChild;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (_Bool)_scrollToEndOfDocument;
- (void)scrollToEndOfDocument:(id)arg1;
- (_Bool)_pageVertically:(_Bool)arg1;
- (_Bool)_scrollVerticallyBy:(float)arg1;
- (_Bool)_pageHorizontally:(_Bool)arg1;
- (float)_horizontalPageScrollDistance;
- (_Bool)_scrollHorizontallyBy:(float)arg1;
- (_Bool)_scrollLineVertically:(_Bool)arg1;
- (_Bool)_scrollLineHorizontally:(_Bool)arg1;
- (float)_horizontalKeyboardScrollDistance;
- (_Bool)_pageInBlockProgressionDirection:(_Bool)arg1;
- (void)scrollPageUp:(id)arg1;
- (void)scrollPageDown:(id)arg1;
- (void)scrollLineUp:(id)arg1;
- (void)scrollLineDown:(id)arg1;
- (void)_forwardMouseEvent:(id)arg1;
- (void)_goForward;
- (void)_goBack;
- (_Bool)_firstResponderIsFormControl;
- (id)_webcore_effectiveFirstResponder;
- (void)printDocumentView;
- (_Bool)_hasScrollBars;
- (id)_largestChildWithScrollBars;
- (Class)_customScrollViewClass;

@end
