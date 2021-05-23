/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class PXCuratedLibraryStyleGuide, PXTitleSubtitleLabelSpec;

@interface PXCuratedLibrarySectionHeaderLayoutSpec : PXFeatureSpec

{
    _Bool _showZoomButtons;
    _Bool _showAspectFitButtons;
    _Bool _wantsTitle;
    _Bool _wantsSubtitle;
    _Bool _shouldOmitYear;
    _Bool _shouldAvoidOverlapWithSecondaryToolbar;
    _Bool _wantsInlineHeader;
    _Bool _requiresTitleRenderedAsView;
    _Bool _swapTitleWithSubtitle;
    _Bool _shouldFadeOutWhenReachingTop;
    _Bool _shouldAccomdateAccessibilityButtonLayout;
    _Bool _gradientRespectsSafeArea;
    double _buttonHeight;
    double _buttonSpacing;
    double _buttonHorizontalPadding;
    PXTitleSubtitleLabelSpec *_titleSubtitleLabelSpec;
    PXTitleSubtitleLabelSpec *_debugInterestingTitleSubtitleLabelSpec;
    PXTitleSubtitleLabelSpec *_debugNonInterestingTitleSubtitleLabelSpec;
    unsigned long long _inlineHeaderStyle;
    double _fadeOutDistanceFromSafeAreaTop;
    double _fadeOutDistance;
    double _fadeOutMinimumAlpha;
    double _gradientAlpha;
    double _gradientHeight;
    double _minimumSpacingBetweenTopSafeAreaAndContentTop;
    double _minimumSpacingBetweenTopSafeAreaAndTitleTop;
    PXCuratedLibraryStyleGuide *_styleGuide;
    PXCuratedLibrarySectionHeaderLayoutSpec *_smallVariantSpec;
    CDStruct_2bd92d94 _cornerRadius;
    struct UIEdgeInsets _padding;
    struct UIEdgeInsets _contentPadding;
    struct UIEdgeInsets _titlePadding;
}

@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) CDStruct_2bd92d94 cornerRadius;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double buttonSpacing;
@property (nonatomic) double buttonHorizontalPadding;
@property (nonatomic) _Bool showZoomButtons;
@property (nonatomic) _Bool showAspectFitButtons;
@property (nonatomic) _Bool wantsTitle;
@property (nonatomic) _Bool wantsSubtitle;
@property (nonatomic) _Bool shouldOmitYear;
@property (nonatomic) struct UIEdgeInsets contentPadding;
@property (nonatomic) struct UIEdgeInsets titlePadding;
@property (nonatomic) _Bool shouldAvoidOverlapWithSecondaryToolbar;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleLabelSpec;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *debugInterestingTitleSubtitleLabelSpec;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *debugNonInterestingTitleSubtitleLabelSpec;
@property (nonatomic) _Bool wantsInlineHeader;
@property (nonatomic) _Bool requiresTitleRenderedAsView;
@property (nonatomic) unsigned long long inlineHeaderStyle;
@property (nonatomic) _Bool swapTitleWithSubtitle;
@property (nonatomic) _Bool shouldFadeOutWhenReachingTop;
@property (nonatomic) double fadeOutDistanceFromSafeAreaTop;
@property (nonatomic) double fadeOutDistance;
@property (nonatomic) double fadeOutMinimumAlpha;
@property (nonatomic) _Bool shouldAccomdateAccessibilityButtonLayout;
@property (nonatomic) double gradientAlpha;
@property (nonatomic) double gradientHeight;
@property (nonatomic) _Bool gradientRespectsSafeArea;
@property (retain, nonatomic) PXCuratedLibrarySectionHeaderLayoutSpec *smallVariantSpec;
@property (nonatomic, readonly) double maximumTitleSubtitleHeight;
@property (nonatomic, readonly) double minimumSpacingBetweenTopSafeAreaAndContentTop;
@property (nonatomic, readonly) double minimumSpacingBetweenTopSafeAreaAndTitleTop;
@property (nonatomic, readonly) PXCuratedLibraryStyleGuide *styleGuide;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end
