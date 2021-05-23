/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class PXAssetsSectionLayoutSpec, PXCuratedLibraryAllPhotosLayoutSpec, PXCuratedLibrarySectionHeaderLayoutSpec, PXMonthsLayoutMetrics, PXYearsLayoutMetrics;

@interface PXCuratedLibraryLayoutSpec : PXFeatureSpec

{
    double _estimatedSpacingBetweenMonths;
    double _spacingBetweenYears;
    double _spacingBetweenMonths;
    double _spacingBetweenDays;
    _Bool _allowsPaginatedScrollingInYearsAndMonths;
    _Bool _allowsSlideshowInYears;
    long long _axis;
    PXCuratedLibrarySectionHeaderLayoutSpec *_daysTopHeaderSpec;
    PXCuratedLibrarySectionHeaderLayoutSpec *_allPhotosFloatingHeaderSpec;
    PXCuratedLibraryAllPhotosLayoutSpec *_allPhotosLayoutSpec;
    PXAssetsSectionLayoutSpec *_sectionLayoutSpec;
    PXYearsLayoutMetrics *_yearsLayoutMetrics;
    PXMonthsLayoutMetrics *_monthsLayoutMetrics;
    double _spacingBetweenSafeAreaTopAndFirstYearCard;
    double _spacingBetweenSafeAreaTopAndFirstMonthTitle;
    double _spacingBetweenHeaderLastBaselineAndAllPhotosTop;
}

@property (nonatomic, readonly) long long axis;
@property (nonatomic, readonly) PXCuratedLibrarySectionHeaderLayoutSpec *daysTopHeaderSpec;
@property (nonatomic, readonly) PXCuratedLibrarySectionHeaderLayoutSpec *allPhotosFloatingHeaderSpec;
@property (nonatomic, readonly) PXCuratedLibraryAllPhotosLayoutSpec *allPhotosLayoutSpec;
@property (nonatomic, readonly) PXAssetsSectionLayoutSpec *sectionLayoutSpec;
@property (nonatomic, readonly) PXYearsLayoutMetrics *yearsLayoutMetrics;
@property (nonatomic, readonly) PXMonthsLayoutMetrics *monthsLayoutMetrics;
@property (nonatomic, readonly) double spacingBetweenSafeAreaTopAndFirstYearCard;
@property (nonatomic, readonly) double spacingBetweenSafeAreaTopAndFirstMonthTitle;
@property (nonatomic, readonly) double spacingBetweenHeaderLastBaselineAndAllPhotosTop;
@property (nonatomic, readonly) _Bool allowsPaginatedScrollingInYearsAndMonths;
@property (nonatomic, readonly) _Bool allowsSlideshowInYears;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 availableThumbnailSizes:(id)arg3;
- (double)defaultInterlayoutSpacingForZoomLevel:(long long)arg1;

@end
