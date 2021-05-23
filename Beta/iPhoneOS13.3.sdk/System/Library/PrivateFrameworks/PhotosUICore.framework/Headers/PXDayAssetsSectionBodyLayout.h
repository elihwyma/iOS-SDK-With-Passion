/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryAssetsSectionGeneratedLayout.h>

@class PXDayAssetsSectionBodyLayoutSpec;

@interface PXDayAssetsSectionBodyLayout : PXCuratedLibraryAssetsSectionGeneratedLayout

{
    PXDayAssetsSectionBodyLayoutSpec *_spec;
    long long _style;
    long long _numberOfPrecedingAssets;
}

@property (nonatomic, readonly) struct CGSize minimumItemSize;
@property (retain, nonatomic) PXDayAssetsSectionBodyLayoutSpec *spec;
@property (nonatomic) long long style;
@property (nonatomic) long long numberOfPrecedingAssets;
@property (nonatomic, readonly) struct CGSize minPlayableSpriteSize;
@property (nonatomic, readonly) double buildingRowContentHeight;
@property (nonatomic, readonly) double buildingRowSpacing;

+ (struct CGSize)estimatedSizeWithReferenceSize:(struct CGSize)arg1 spec:(id)arg2 style:(long long)arg3 numberOfAssets:(long long)arg4;

- (void)contentSizeDidChange;
- (void)referenceSizeDidChange;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (struct _PXGSpriteIndexRange)spriteIndexRangeCoveringRect:(struct CGRect)arg1;
- (void)enumerateRowsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)newGenerator;
- (id)_inputItemAtIndex:(unsigned int)arg1;
- (struct CGRect)sectionRect;
- (void)enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct CGSize)_minSizeOfDominantSprites;

@end
