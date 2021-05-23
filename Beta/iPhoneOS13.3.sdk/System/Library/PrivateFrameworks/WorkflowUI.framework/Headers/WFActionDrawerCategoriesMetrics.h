/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@class NSArray, UITraitCollection;

@protocol WFActionDrawerCategoriesMetricsProviderCellDimension;

@interface WFActionDrawerCategoriesMetrics : NSObject

{
    _Bool _verticalPresentation;
    _Bool _valid;
    NSArray *_sizesForCells;
    double _heightForDisplay;
    NSArray *_categories;
    UITraitCollection *_traitCollection;
    id <WFActionDrawerCategoriesMetricsProviderCellDimension> _cellDimensions;
    struct CGSize _maximumSizeCellThatFits;
    struct CGSize _containerSize;
}

@property (retain, nonatomic) id <WFActionDrawerCategoriesMetricsProviderCellDimension> cellDimensions;
@property (nonatomic, readonly) NSArray *sizesForCells;
@property (nonatomic, readonly) _Bool valid;
@property (nonatomic) _Bool verticalPresentation;
@property (copy, nonatomic) NSArray *categories;
@property (weak, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) struct CGSize containerSize;
@property (nonatomic, readonly) struct CGSize maximumSizeCellThatFits;
@property (nonatomic, readonly) double heightForDisplay;

- (struct UIEdgeInsets)cellPadding;
- (_Bool)shouldStackVertically;
- (struct CGSize)cellImageSize;
- (struct UIEdgeInsets)textPadding;
- (struct UIEdgeInsets)containerEdgeInsets;
- (unsigned long long)numberOfCellsPerRow;
- (struct CGSize)sizeForLabel:(id)arg1 inSize:(struct CGSize)arg2;
- (id)initWithCategories:(id)arg1;
- (unsigned long long)numberOfRowsRequired;
- (void)loadCellDimensions;
- (void)recomputeIfNeeded;
- (void)recompute;
- (void)computeSizesForCells;
- (struct CGSize)computeSizeForCell:(id)arg1;
- (struct CGSize)sizeForCellAtIndex:(unsigned long long)arg1;
- (void)computeMaximumSizeCellThatFits;
- (void)computeHeightForDisplay;
- (_Bool)isAccessibilityContentSize;
- (_Bool)canFitVertically;

@end
