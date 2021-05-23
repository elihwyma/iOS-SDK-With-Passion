/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVShelfViewLayout.h>

__attribute__((visibility("hidden")))
@interface _TVMLShelfViewLayout : _TVShelfViewLayout

{
    double _showcaseFactor;
    struct TVCellMetrics _cellMetrics;
}

@property (nonatomic) struct TVCellMetrics cellMetrics;
@property (nonatomic) double showcaseFactor;

- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (CDUnknownBlockType)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (double)expectedLineSpacing;
- (double)headerAllowance;
- (id)contentRowMetricsForShowcase:(_Bool)arg1;

@end
