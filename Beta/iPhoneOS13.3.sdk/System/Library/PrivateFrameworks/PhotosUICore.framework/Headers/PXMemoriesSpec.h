/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class UIColor, UIFont;

@interface PXMemoriesSpec : PXFeatureSpec

{
    _Bool _feedShouldAllowHeaders;
    _Bool _alwaysShowFavoritesBadge;
    _Bool _shouldRemoveHighlightOnScroll;
    struct UIColor *_feedBackgroundColor;
    struct UIColor *_selectionHighlightColor;
    long long _feedHeroPosition;
    long long _feedAxis;
    unsigned long long _feedMemoriesPerRow;
    double _feedEntryHeaderHeight;
    double _firstFeedEntryHeaderHeight;
    double _distanceBetweenHeaderBaselineAndImageTop;
    double _feedInteritemSpacing;
    long long _idiom;
    double _feedHeroImageAspectRatio;
    double _feedAdditionalContentThreshold;
    struct UIFont *_tabTitleFont;
    struct UIColor *_tabTitleTextColor;
    double _tabTitleBaselineOffset;
    double _tabTopContentPadding;
    struct UIColor *_borderColor;
    double _borderWidth;
    double _orbPreviewSize;
    unsigned long long __style;
    double __displayScale;
    double __columnWidth;
    struct CGSize _favoriteBadgeSize;
    struct CGPoint _highlightedSectionHeaderOffset;
    struct CGPoint _borderOffset;
    struct UIEdgeInsets _feedEntryEdgeInsets;
    struct UIEdgeInsets _favoriteBadgeInset;
}

@property (nonatomic, readonly) unsigned long long _style;
@property (nonatomic, readonly) double _displayScale;
@property (nonatomic, readonly) double _columnWidth;
@property (nonatomic, readonly) UIColor *feedBackgroundColor;
@property (nonatomic, readonly) UIColor *selectionHighlightColor;
@property (nonatomic, readonly) long long feedHeroPosition;
@property (nonatomic, readonly) long long feedAxis;
@property (nonatomic, readonly) unsigned long long feedMemoriesPerRow;
@property (nonatomic, readonly) long long feedSectionLayoutAxis;
@property (nonatomic, readonly) struct UIEdgeInsets feedEntryEdgeInsets;
@property (nonatomic, readonly) struct UIEdgeInsets layoutInsets;
@property (nonatomic, readonly) _Bool feedShouldAllowHeaders;
@property (nonatomic, readonly) double feedEntryHeaderHeight;
@property (nonatomic, readonly) double firstFeedEntryHeaderHeight;
@property (nonatomic, readonly) double distanceBetweenHeaderBaselineAndImageTop;
@property (nonatomic, readonly) double feedHeroImagePaddingTop;
@property (nonatomic, readonly) double feedHeroImagePaddingBottom;
@property (nonatomic, readonly) double feedSecondaryImagePaddingBottom;
@property (nonatomic, readonly) double feedInteritemSpacing;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) Class feedDataSourceManagerClass;
@property (nonatomic, readonly) Class feedLayoutMetricsClass;
@property (nonatomic, readonly) Class feedTransitionAnimationCoordinatorClass;
@property (nonatomic, readonly) double feedHeroImageAspectRatio;
@property (nonatomic, readonly) _Bool alwaysShowFavoritesBadge;
@property (nonatomic, readonly) struct CGSize favoriteBadgeSize;
@property (nonatomic, readonly) struct UIEdgeInsets favoriteBadgeInset;
@property (nonatomic, readonly) struct CGPoint highlightedSectionHeaderOffset;
@property (nonatomic, readonly) _Bool shouldRemoveHighlightOnScroll;
@property (nonatomic, readonly) double bottomShadowPadding;
@property (nonatomic, readonly) double feedAdditionalContentThreshold;
@property (nonatomic, readonly) UIFont *tabTitleFont;
@property (nonatomic, readonly) UIColor *tabTitleTextColor;
@property (nonatomic, readonly) double tabTitleBaselineOffset;
@property (nonatomic, readonly) double tabTopContentPadding;
@property (nonatomic, readonly) UIColor *borderColor;
@property (nonatomic, readonly) struct CGPoint borderOffset;
@property (nonatomic, readonly) double borderWidth;
@property (nonatomic, readonly) double orbPreviewSize;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)createViewSpecWithDescriptor:(struct PXViewSpecDescriptor)arg1;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 style:(unsigned long long)arg3;
- (id)newLayoutGeneratorWithMetrics:(id)arg1;
- (struct UIColor *)feedCategoryLabelTextColor;
- (void)_calculateSectionInsetWithExtendedTraitCollection:(id)arg1;
- (double)_feedInteritemSpacingForReferenceSize:(struct CGSize)arg1;

@end
