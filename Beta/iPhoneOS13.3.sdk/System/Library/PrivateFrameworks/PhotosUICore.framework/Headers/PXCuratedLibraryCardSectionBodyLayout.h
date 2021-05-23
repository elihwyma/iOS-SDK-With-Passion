/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGLayout.h>

@class NSString, PXAssetsDataSource, PXCuratedLibraryCardSectionBodyLayoutSpec, PXCuratedLibrarySectionGeometryDescriptor, PXGLayoutGuide;

@protocol PXDisplayAsset, PXDisplayAssetFetchResult;

@interface PXCuratedLibraryCardSectionBodyLayout : PXGLayout

{
    unsigned short _assetVersion;
    id <PXDisplayAsset> _keyAsset;
    CDStruct_d97c9657 _updateFlags;
    struct _PXGSpriteIndexRange _assetSpriteIndexRange;
    struct _PXGSpriteIndexRange _skimmingHintSpriteIndexRange;
    _Bool _isSkimming;
    long long _section;
    PXAssetsDataSource *_dataSource;
    long long _zoomLevel;
    PXCuratedLibraryCardSectionBodyLayoutSpec *_spec;
    long long _maxSkimmingIndex;
    long long _currentSkimmingIndex;
    PXGLayoutGuide *_assetLayoutGuide;
    id <PXDisplayAssetFetchResult> _keyAssetsFetchResult;
    struct PXSimpleIndexPath _sectionIndexPath;
}

@property (nonatomic, readonly) struct PXSimpleIndexPath sectionIndexPath;
@property (nonatomic, readonly) id <PXDisplayAssetFetchResult> keyAssetsFetchResult;
@property (nonatomic, readonly) long long section;
@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (nonatomic) long long zoomLevel;
@property (retain, nonatomic) PXCuratedLibraryCardSectionBodyLayoutSpec *spec;
@property (nonatomic) _Bool isSkimming;
@property (nonatomic) long long maxSkimmingIndex;
@property (nonatomic) long long currentSkimmingIndex;
@property (nonatomic, readonly) PXCuratedLibrarySectionGeometryDescriptor *presentedGeometryDescriptor;
@property (nonatomic, readonly) struct CGRect assetFrame;
@property (nonatomic, readonly) PXGLayoutGuide *assetLayoutGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)update;
- (void)_updateSprites;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)applySpriteChangeDetails:(id)arg1 countAfterChanges:(unsigned int)arg2 initialState:(CDUnknownBlockType)arg3 modifyState:(CDUnknownBlockType)arg4;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (id)layoutForItemChanges;
- (struct UIColor *)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)gradientForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)_updateSkimmingHintWithAssetFrame:(struct CGRect)arg1;
- (void)_updateKeyAssetFetchResultWithDataSource:(id)arg1 section:(long long)arg2;

@end
