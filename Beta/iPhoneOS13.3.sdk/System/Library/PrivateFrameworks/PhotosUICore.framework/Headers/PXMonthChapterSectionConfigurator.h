/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@class PXCuratedLibraryChapterHeaderLayoutSpec, PXMonthCardSectionBodyLayoutSpec;

@interface PXMonthChapterSectionConfigurator : PXAssetsSectionConfigurator

{
    PXCuratedLibraryChapterHeaderLayoutSpec *_chapterHeaderSpec;
    PXMonthCardSectionBodyLayoutSpec *_cardBodySpec;
}

@property (nonatomic, readonly) PXCuratedLibraryChapterHeaderLayoutSpec *chapterHeaderSpec;
@property (nonatomic, readonly) PXMonthCardSectionBodyLayoutSpec *cardBodySpec;

- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;
- (void)configureAssetSectionLayout:(id)arg1;
- (id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3;

@end
