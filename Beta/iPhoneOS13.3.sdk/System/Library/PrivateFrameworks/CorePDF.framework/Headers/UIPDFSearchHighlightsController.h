/*
 Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, UIPDFPageView, UIPDFSelection;

__attribute__((visibility("hidden")))
@interface UIPDFSearchHighlightsController : NSObject

{
    NSMutableArray *_searchHighlightLayers;
    UIPDFPageView *_pageView;
    struct CGColor *_highlightColor;
    struct CGColor *_borderColor;
    struct CGColor *_shadowColor;
    _Bool _pageRendered;
    NSMutableArray *_rectangles;
    UIPDFSelection *_selection;
}

- (void)dealloc;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)setNeedsDisplay;
- (id)hitTest:(struct CGPoint)arg1;
- (void)clearSearchHighlights;
- (id)initWithPageView:(id)arg1;
- (void)addSearchHighlightForSelection:(id)arg1 animated:(_Bool)arg2;
- (_Bool)hasSearchHighlights;
- (void)pageDidRender:(id)arg1;
- (void)_addAnimation:(id)arg1;
- (void)_addAnimation2:(id)arg1;
- (struct CGRect)unionFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)makeType1Shadow:(struct CGPath *)arg1 rect:(struct CGRect)arg2 inset:(struct CGPoint)arg3;
- (void)makeType2Shadow:(struct CGPath *)arg1 rect:(struct CGRect)arg2;
- (void)addSearchHighlightForRotatedSelection:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)indexOfColumnBreakStartingAt:(unsigned long long)arg1;
- (void)makeType1Path:(struct CGPath *)arg1 shadowPath:(struct CGPath *)arg2;
- (void)addLayer:(struct CGRect)arg1 path:(struct CGPath *)arg2 shadowPath:(struct CGPath *)arg3 animated:(_Bool)arg4;
- (void)makeType2Path:(struct CGPath *)arg1 to:(unsigned long long)arg2 shadowPath:(struct CGPath *)arg3;
- (void)makeType3Path:(struct CGPath *)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 shadowPath:(struct CGPath *)arg4;
- (void)makeType4Path:(struct CGPath *)arg1 from:(unsigned long long)arg2 to:(unsigned long long)arg3 shadowPath:(struct CGPath *)arg4;

@end
