/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIView, UIWebBrowserView, UIWebPDFViewHandler;

@protocol UIWebFindOnPageHighlighterDelegate;

__attribute__((visibility("hidden")))
@interface UIWebBrowserFindOnPageHighlighter : NSObject

{
    NSMutableArray *_highlightBubbleViews;
    NSArray *_pdfHighlightViews;
    UIView *_highlightHostView;
    UIWebBrowserView *_browserView;
    UIWebPDFViewHandler *_pdfHandler;
    _Bool _zoomToHighlightSelection;
    id <UIWebFindOnPageHighlighterDelegate> _delegate;
    NSString *_searchText;
    unsigned long long _numberOfMatches;
    unsigned long long _highlightedMatchIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *searchText;
@property (nonatomic) id <UIWebFindOnPageHighlighterDelegate> delegate;
@property (nonatomic, readonly) unsigned long long numberOfMatches;
@property (nonatomic, readonly) unsigned long long highlightedMatchIndex;

+ (_Bool)expandedRectsWouldIntersect:(id)arg1;

- (void)dealloc;
- (void)_commonInitialize;
- (void)clearBrowserView;
- (void)_clearHighlightViews;
- (void)_addContentViewAtIndex:(unsigned long long)arg1 withRect:(struct CGRect)arg2;
- (void)_setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 contentViews:(id)arg4 wobble:(_Bool)arg5;
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentImage:(struct CGImage *)arg3 wobble:(_Bool)arg4;
- (_Bool)updateHighlightBubbleWobble:(_Bool)arg1;
- (unsigned long long)findOnPageOptions;
- (_Bool)_updateHighlightedMatchIndex:(_Bool)arg1;
- (id)_currentPDFSearchResult;
- (void)_highlightFindOnPageMatchForPDF:(_Bool)arg1 withPDFHandler:(id)arg2;
- (_Bool)_highlightSelection;
- (void)_highlightFindOnPageMatch:(_Bool)arg1;
- (void)setSearchText:(id)arg1 matchLimit:(unsigned long long)arg2;
- (void)setSelectionRect:(struct CGRect)arg1 textRects:(id)arg2 contentViews:(id)arg3 wobble:(_Bool)arg4;
- (void)highlightNextMatch;
- (void)highlightPreviousMatch;
- (id)initWithBrowserView:(id)arg1;
- (id)initWithPDFViewHandler:(id)arg1;
- (void)searchDidBegin:(id)arg1;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchWasCancelled:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (void)searchDidFinish:(id)arg1;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;

@end
