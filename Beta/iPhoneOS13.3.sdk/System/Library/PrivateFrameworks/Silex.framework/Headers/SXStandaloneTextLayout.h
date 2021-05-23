/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXContainerLayout.h>

@class TSWPPadding;

@protocol SXStandaloneTextLayoutDelegate;

@interface SXStandaloneTextLayout : SXContainerLayout

{
    id <SXStandaloneTextLayoutDelegate> _delegate;
}

@property (weak, nonatomic) id <SXStandaloneTextLayoutDelegate> delegate;
@property (nonatomic, readonly) struct CGSize adjustedInsets;
@property (nonatomic, readonly) TSWPPadding *layoutMargins;
@property (nonatomic, readonly) unsigned long long columnCount;
@property (nonatomic, readonly) _Bool alwaysStartsNewTarget;
@property (nonatomic, readonly) _Bool shrinkTextToFit;
@property (nonatomic, readonly) _Bool columnsAreLeftToRight;
@property (nonatomic, readonly) double textScaleFactor;

- (id)p_wpLayoutParent;
- (id)styleProviderForLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (id)dependentsOfTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
- (Class)repClassOverride;
- (id)computeLayoutGeometry;
- (id)childInfosForLayout;

@end
