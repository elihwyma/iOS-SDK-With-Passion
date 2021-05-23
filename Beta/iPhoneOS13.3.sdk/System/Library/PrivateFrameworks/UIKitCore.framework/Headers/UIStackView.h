/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, _UIAlignedLayoutArrangement, _UIOrderedLayoutArrangement;

@interface UIStackView : UIView

{
    NSMutableArray *_mutableLayoutArrangements;
    _UIOrderedLayoutArrangement *_distributionArrangement;
    _UIAlignedLayoutArrangement *_alignmentArrangement;
    _Bool _didRequestTallestBaselineViewForFirst;
    _Bool _didRequestTallestBaselineViewForLast;
    _Bool _viewForFirstBaselineLayoutDidChange;
    _Bool _viewForLastBaselineLayoutDidChange;
    _Bool _layoutMarginsRelativeArrangement;
}

@property (copy, nonatomic, readonly) NSArray *arrangedSubviews;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) long long alignment;
@property (nonatomic) double spacing;
@property (nonatomic, getter=isBaselineRelativeArrangement) _Bool baselineRelativeArrangement;
@property (nonatomic, getter=isLayoutMarginsRelativeArrangement) _Bool layoutMarginsRelativeArrangement;

+ (Class)layerClass;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (double)_calculatedIntrinsicHeight;
- (void)removeArrangedSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)_hasLayoutArrangements;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (struct CGSize)_systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 hasIntentionallyCollapsedHeight:(_Bool *)arg4;
- (id)initWithArrangedSubviews:(id)arg1;
- (void)_vendedBaselineViewParametersDidChange;
- (id)_mutableLayoutArrangements;
- (void)_vendedBaselineViewDidMoveForFirst:(_Bool)arg1;
- (double)_proportionalFillLengthForOrderedArrangement:(id)arg1 relevantParentAxis:(long long)arg2;
- (void)_commonStackViewInitializationWithArrangedSubviews:(id)arg1;
- (_Bool)_shouldRequestTallestBaselineViewForFirst:(_Bool)arg1;
- (id)_baselineViewForFirst:(_Bool)arg1;
- (void)setArrangedSubviews:(id)arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (double)customSpacingAfterView:(id)arg1;
- (_Bool)_recordBaselineLoweringInfo;

@end
