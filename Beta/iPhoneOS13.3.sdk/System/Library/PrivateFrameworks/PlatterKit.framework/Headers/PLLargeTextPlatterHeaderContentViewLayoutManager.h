/*
 Image: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
 */

@class NSStringDrawingContext;

@interface PLLargeTextPlatterHeaderContentViewLayoutManager

{
    NSStringDrawingContext *_drawingContext;
    double _referenceWidth;
    struct CGSize _cachedTitleBoundingRectSize;
    unsigned long long _cachedTitleNumberOfLines;
}

+ (double)contentBaselineToBoundsBottomWithFont:(id)arg1 boundsWidth:(double)arg2 scale:(double)arg3;

- (double)headerHeightForWidth:(double)arg1;
- (double)_titleLabelBaselineOffset;
- (double)contentBaseline;
- (void)layoutIconButtonsWithScale:(double)arg1;
- (void)layoutTitleLabelWithTrailingXLimit:(double)arg1 scale:(double)arg2;
- (void)layoutUtilityButtonWithScale:(double)arg1;
- (void)layoutDateLabelWithScale:(double)arg1;
- (void)invalidateCachedSizeInfo;
- (id)_dateLabelFont;
- (struct CGRect)_titleLabelBoundsThatFitsWidth:(double)arg1;
- (struct CGRect)_dateLabelBoundsThatFitsWidth:(double)arg1;
- (double)_largeTextLabelBaselineOffsetFromBottom;
- (struct CGSize)_utilityViewSizeThatFitsWidth:(double)arg1;
- (double)_dateLabelBaselineOffset;
- (struct CGSize)_boundingRectSizeForLabel:(id)arg1 width:(double)arg2 numberOfLines:(inout unsigned long long *)arg3;
- (void)_updateCachedTitleLabelSizeInfoIfNecessaryWithWidth:(double)arg1;
- (double)_largeTextUtilityLabelBaselineOffset;
- (unsigned long long)_titleLabelNumberOfLinesThatFitsWidth:(double)arg1;

@end
