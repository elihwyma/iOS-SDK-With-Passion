/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIScrollView.h>

@class NSArray, NSLayoutConstraint, UIInterfaceActionVisualStyle, _UIInterfaceActionSeparatableSequenceView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionRepresentationsSequenceView : UIScrollView

{
    long long _sizingSeparatedContentSequenceViewToFitDisabledCount;
    _Bool _visualCornerForcedOverride;
    UIInterfaceActionVisualStyle *_visualStyle;
    NSArray *_arrangedActionRepresentationViews;
    long long _actionLayoutAxis;
    unsigned long long _visualCornerPosition;
    NSLayoutConstraint *_minimumHeightConstraint;
    _UIInterfaceActionSeparatableSequenceView *_separatedContentSequenceView;
}

@property (nonatomic, readonly) NSLayoutConstraint *minimumHeightConstraint;
@property (nonatomic, readonly) _UIInterfaceActionSeparatableSequenceView *separatedContentSequenceView;
@property (retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle;
@property (retain, nonatomic) NSArray *arrangedActionRepresentationViews;
@property (nonatomic) long long actionLayoutAxis;
@property (nonatomic) unsigned long long visualCornerPosition;
@property (nonatomic) _Bool visualCornerForcedOverride;

- (struct CGSize)intrinsicContentSize;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)layoutSubviews;
- (void)_applyVisualStyle;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (void)updateConstraints;
- (id)initWithVisualStyle:(id)arg1;
- (double)fittingWidthForLayoutAxis:(long long)arg1;
- (double)_contentFitCanScrollThreshold;
- (void)_loadDefaultSizingConstraints;
- (void)reloadDisplayedContentVisualStyle;
- (void)_updateSeparatedContentSequenceViewToFitSizeIfPossible;
- (void)_disableSeparatedContentSequenceViewToFit;
- (void)_enableSeparatedContentSequenceViewToFit;
- (void)_notifyDidScroll;
- (void)_temporarilySkipSizingSeparatedContentSequenceViewToFit;
- (void)_updateMinimumHeightConstraint;
- (double)_minimumNumberOfRowsRequiredVisible;
- (_Bool)_isHorizontalLayout;
- (struct CGSize)_sizeByApplyingLayoutMarginsAsOutsetToSize:(struct CGSize)arg1;
- (void)_applyVisualStyleToSeparatedContentSequenceView;
- (void)_willUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;

@end
