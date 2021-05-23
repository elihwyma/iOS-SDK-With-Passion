/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXCuratedLibraryCardSectionBodyLayoutSpec;

@interface PXCuratedLibraryCardSectionConfigurator : PXAssetsSectionConfigurator

{
    PXCuratedLibraryCardSectionBodyLayoutSpec *_cardSpec;
}

@property (nonatomic, readonly) PXCuratedLibraryCardSectionBodyLayoutSpec *cardSpec;

- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;
- (void)configureAssetSectionLayout:(id)arg1;
- (struct UIEdgeInsets)containerInsets;
- (id)createCardSpecWithExtendedTraitCollection:(id)arg1;

@end
