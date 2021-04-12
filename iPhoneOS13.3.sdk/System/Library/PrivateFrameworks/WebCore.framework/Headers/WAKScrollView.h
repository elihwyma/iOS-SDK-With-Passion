//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebCore/WebCoreFrameScrollView-Protocol.h>

@class WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView>
{
    WAKView *_documentView;
    WAKClipView *_contentView;
    CGPoint _scrollOrigin;
    id delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate;
// - (void).cxx_destruct;
- (void)_adjustScrollers;
- (BOOL)inProgrammaticScroll;
- (id)description;
- (void)setActualScrollPosition:(CGPoint)arg1;
- (CGRect)exposedContentRect;
- (CGRect)unobscuredContentRect;
- (void)scrollWheel:(id)arg1;
- (void)scrollPoint:(CGPoint)arg1;
- (CGPoint)scrollOrigin;
- (void)setScrollOrigin:(CGPoint)arg1 updatePositionAtAll:(BOOL)arg2 immediately:(BOOL)arg3;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (void)scrollingModes:(unsigned char )arg1 vertical:(unsigned char )arg2;
- (void)setScrollingModes:(unsigned char)arg1 vertical:(unsigned char)arg2 andLock:(BOOL)arg3;
- (unsigned char)verticalScrollingMode;
- (unsigned char)horizontalScrollingMode;
- (void)setScrollingMode:(unsigned char)arg1;
- (void)setVerticalScrollingMode:(unsigned char)arg1;
- (void)setHorizontalScrollingMode:(unsigned char)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (float)horizontalLineScroll;
- (float)verticalLineScroll;
- (void)setLineScroll:(float)arg1;
- (BOOL)drawsBackground;
- (void)setDrawsBackground:(BOOL)arg1;
- (id)contentView;
- (id)documentView;
- (void)setDocumentView:(id)arg1;
- (CGRect)documentVisibleRect;
- (BOOL)hasHorizontalScroller;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (BOOL)hasVerticalScroller;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (BOOL)_selfHandleEvent:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

