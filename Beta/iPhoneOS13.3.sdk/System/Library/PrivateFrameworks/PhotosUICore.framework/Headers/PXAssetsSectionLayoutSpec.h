/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXFeatureSpec.h>

@class NSShadow, PXDayAssetsSectionConfigurator, PXMonthCardSectionConfigurator, PXMonthChapterSectionConfigurator, PXYearAssetsSectionConfigurator;

@interface PXAssetsSectionLayoutSpec : PXFeatureSpec

{
    PXYearAssetsSectionConfigurator *_yearSectionConfigurator;
    PXMonthCardSectionConfigurator *_monthSectionConfigurator;
    PXMonthChapterSectionConfigurator *_monthsChapterConfigurator;
    PXDayAssetsSectionConfigurator *_daySectionConfigurator;
    _Bool _userInterfaceStyleAllowsShadow;
    NSShadow *_shadow;
    double _shadowCornerRadius;
    struct UIEdgeInsets _padding;
}

@property (nonatomic, readonly) NSShadow *shadow;
@property (nonatomic, readonly) double shadowCornerRadius;
@property (nonatomic, readonly) _Bool userInterfaceStyleAllowsShadow;
@property (nonatomic, readonly) struct UIEdgeInsets padding;

- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)sectionConfiguratorForAssetCollection:(id)arg1 inZoomLevel:(long long)arg2;
- (_Bool)allowsPositionDependentHeaderContentOpacityInZoomLevel:(long long)arg1;

@end
