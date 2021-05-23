/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryCardSectionConfigurator.h>

@class PXMonthsAssetsSectionHeaderLayoutSpec;

@interface PXMonthCardSectionConfigurator : PXCuratedLibraryCardSectionConfigurator

{
    PXMonthsAssetsSectionHeaderLayoutSpec *_floatingHeaderSpec;
}

+ (long long)zoomLevel;

- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (id)createCardSpecWithExtendedTraitCollection:(id)arg1;

@end
