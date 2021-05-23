/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, UIInterfaceActionVisualStyle, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSeparatableSequenceView : UIView

{
    _Bool _visualCornerForcedOverride;
    UIInterfaceActionVisualStyle *_visualStyle;
    long long _axis;
    long long _distribution;
    NSArray *_arrangedContentViews;
    unsigned long long _visualCornerPosition;
    UIStackView *_stackView;
    NSArray *_arrangedContentSeparatorViews;
    NSArray *_arrangedContentViewsDistributionConstraints;
}

@property (nonatomic, readonly) UIStackView *stackView;
@property (nonatomic, readonly) NSArray *arrangedContentSeparatorViews;
@property (nonatomic, readonly) NSArray *arrangedContentViewsDistributionConstraints;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (retain, nonatomic) NSArray *arrangedContentViews;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic) _Bool visualCornerForcedOverride;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)updateConstraints;
- (id)initWithVisualStyle:(id)arg1;
- (void)_setLayoutDebuggingIdentifier:(id)arg1;
- (double)fittingWidthForLayoutAxis:(long long)arg1;
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(CDUnknownBlockType)arg1;
- (void)reloadDisplayedContentVisualStyle;
- (void)_reloadStackViewArrangement;
- (void)_updateSeparatorConstantSizedAxis;
- (void)_updateRoundedCornerPositionForActionRepViews;
- (void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;
- (_Bool)_isVerticalLayout;
- (long long)_separatorConstantSizedAxis;
- (void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;
- (struct CGRect)_stackViewFrameForViewBounds:(struct CGRect)arg1;
- (void)_reloadContentDistributionConstraintsForArrangedContentViews;
- (void)layoutSublayersOfLayer:(id)arg1;
- (struct CGSize)_systemLayoutSizeFittingStackView:(struct CGSize)arg1;
- (struct CGRect)_viewBoundsForStackViewFrame:(struct CGRect)arg1;
- (long long)_dimensionAttributeToConstrainEqual;
- (void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(_Bool)arg2;
- (void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1;
- (void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1;
- (void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1;
- (void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1;
- (void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned long long)arg2;

@end
