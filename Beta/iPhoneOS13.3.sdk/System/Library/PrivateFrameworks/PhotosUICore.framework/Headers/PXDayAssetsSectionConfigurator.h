/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXAssetsSectionBodyAllPhotosGridLayoutSpec, PXDayAssetsSectionBodyLayoutSpec, PXDayAssetsSectionHeaderLayoutSpec;

@interface PXDayAssetsSectionConfigurator : PXAssetsSectionConfigurator

{
    PXDayAssetsSectionHeaderLayoutSpec *_floatingHeaderSpec;
    PXAssetsSectionBodyAllPhotosGridLayoutSpec *_allPhotosGridBodySpec;
    PXDayAssetsSectionBodyLayoutSpec *_daysBodySpec;
}

- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (id)_bodySpecForBodyStyle:(long long)arg1 zoomLevel:(long long)arg2;
- (void)_getHeaderAndBodyStylesForAssetCollection:(id)arg1 isCurated:(_Bool)arg2 zoomLevel:(long long)arg3 headerStyle:(long long *)arg4 bodyStyle:(long long *)arg5;
- (void)configureAssetSectionLayout:(id)arg1;
- (void)_configureSelectAllButtonOfSectionLayout:(id)arg1;
- (struct CGSize)estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(_Bool)arg2 numberOfAssets:(long long)arg3 referenceSize:(struct CGSize)arg4 zoomLevel:(long long)arg5;

@end
