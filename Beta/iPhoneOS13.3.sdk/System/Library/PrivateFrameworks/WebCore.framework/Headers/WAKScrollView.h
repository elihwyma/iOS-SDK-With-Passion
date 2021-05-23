/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <WebCore/WAKView.h>

@class WAKClipView;

@interface WAKScrollView : WAKView

{
    WAKView *_documentView;
    WAKClipView *_contentView;
    struct CGPoint _scrollOrigin;
    id delegate;
}

@property (weak, nonatomic) id delegate;

- (void)dealloc;
- (id)description;
- (id)contentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)drawsBackground;
- (void)setDrawsBackground:(_Bool)arg1;
- (struct CGRect)unobscuredContentRect;
- (void)setDocumentView:(id)arg1;
- (id)documentView;
- (void)scrollWheel:(id)arg1;
- (void)scrollPoint:(struct CGPoint)arg1;
- (void)setScrollingModes:(unsigned char)arg1 vertical:(unsigned char)arg2 andLock:(_Bool)arg3;
- (void)scrollingModes:(unsigned char *)arg1 vertical:(unsigned char *)arg2;
- (struct CGRect)exposedContentRect;
- (void)setActualScrollPosition:(struct CGPoint)arg1;
- (struct CGRect)documentVisibleRect;
- (void)setScrollBarsSuppressed:(_Bool)arg1 repaintOnUnsuppress:(_Bool)arg2;
- (struct CGPoint)scrollOrigin;
- (void)setScrollOrigin:(struct CGPoint)arg1 updatePositionAtAll:(_Bool)arg2 immediately:(_Bool)arg3;
- (_Bool)_selfHandleEvent:(id)arg1;
- (void)setHasVerticalScroller:(_Bool)arg1;
- (_Bool)hasVerticalScroller;
- (void)setHasHorizontalScroller:(_Bool)arg1;
- (_Bool)hasHorizontalScroller;
- (void)setLineScroll:(float)arg1;
- (float)verticalLineScroll;
- (float)horizontalLineScroll;
- (void)reflectScrolledClipView:(id)arg1;
- (void)setHorizontalScrollingMode:(unsigned char)arg1;
- (void)setVerticalScrollingMode:(unsigned char)arg1;
- (void)setScrollingMode:(unsigned char)arg1;
- (unsigned char)horizontalScrollingMode;
- (unsigned char)verticalScrollingMode;
- (_Bool)inProgrammaticScroll;
- (void)_adjustScrollers;

@end
