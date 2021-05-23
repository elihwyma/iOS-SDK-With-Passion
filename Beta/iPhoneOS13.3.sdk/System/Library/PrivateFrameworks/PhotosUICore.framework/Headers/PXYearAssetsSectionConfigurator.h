/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryCardSectionConfigurator.h>

@class PXYearAssetsSectionHeaderLayoutSpec, PXYearAssetsSkimmingSectionHeaderLayoutSpec;

@interface PXYearAssetsSectionConfigurator : PXCuratedLibraryCardSectionConfigurator

{
    PXYearAssetsSkimmingSectionHeaderLayoutSpec *_skimmingHeaderSpec;
    PXYearAssetsSectionHeaderLayoutSpec *_normalHeaderSpec;
}

- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (id)createCardSpecWithExtendedTraitCollection:(id)arg1;

@end
