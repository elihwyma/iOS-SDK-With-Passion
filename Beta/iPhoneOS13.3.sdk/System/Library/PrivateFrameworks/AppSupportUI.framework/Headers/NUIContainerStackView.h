/*
 Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

#import <AppSupportUI/NUIContainerView.h>

@class NSString;

@interface NUIContainerStackView : NUIContainerView

{
    struct _NUIGridArrangement _arrangement;
    CDStruct_0d6b4eb6 _visibleCount;
    struct map<UIView *, double, std::__1::less<UIView *>, std::__1::allocator<std::__1::pair<UIView *const, double>>> _customSpacings;
    struct {
        unsigned int alignment:8;
        unsigned int distribution:8;
        unsigned int axis:4;
    } _stackViewFlags;
    double _spacing;
}

@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) long long alignment;
@property (nonatomic) double spacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)containerStackViewWithAxis:(long long)arg1 arrangedSubviews:(id)arg2;
+ (id)horizontalContainerStackViewWithArrangedSubviews:(id)arg1;
+ (id)verticalContainerStackViewWithArrangedSubviews:(id)arg1;

- (void)dealloc;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)debugDictionary;
- (id)initWithArrangedSubviews:(id)arg1;
- (void)setBaselineRelativeArrangement:(_Bool)arg1;
- (void)setCustomSpacing:(double)arg1 afterView:(id)arg2;
- (double)customSpacingAfterView:(id)arg1;
- (void)populateGridArrangementCells:(vector_f8404f95 *)arg1;
- (void)populateGridArrangementDimension:(vector_b8a5df6e *)arg1 withCells:(const vector_f8404f95 *)arg2 axis:(long long)arg3;
- (_Bool)setNeedsInvalidation:(long long)arg1;
- (void)didRemoveArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (_Bool)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (id)arrangedDescription;
- (struct CGSize)_calculateArrangedSizeFittingSize:(struct CGSize)arg1 forLayout:(_Bool)arg2;
- (long long)_effectiveAlignmentForArrangedSubview:(id)arg1;
- (id)_baselineViewVendForFirstBaseline:(_Bool)arg1;
- (void)setSpacing:(double)arg1 afterArrangedSubviewAtIndex:(long long)arg2;

@end
