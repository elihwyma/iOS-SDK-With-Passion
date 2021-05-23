/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGCompositeLayout.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString, PXAssetsDataSource, PXAssetsSectionLayout, PXCuratedLibraryLayoutSpec, PXCuratedLibraryViewModel, PXGSpriteReference;

@interface PXCuratedLibrarySectionedLayout : PXGCompositeLayout <Swift>

{
    CDStruct_d97c9657 _updateFlags;
    PXAssetsDataSource *_currentDataSource;
    long long _currentZoomLevel;
    NSMutableIndexSet *_zoomLevelsPreferringDominantHeros;
    long long *_accumulatedSectionItems;
    long long _accumulatedSectionItemsCount;
    _Bool _isUpdatingSublayouts;
    unsigned long long _dataSourceIdentifierOfCachedSectionsWithSelectedItems;
    NSIndexSet *_cachedSectionsWithSelectedItems;
    _Bool _isInitialLoad;
    _Bool _performedInitialLoad;
    PXCuratedLibraryLayoutSpec *_spec;
    PXCuratedLibraryViewModel *_viewModel;
    double _lateralMargin;
    id _lastVisibleDominantObjectReference;
    PXGSpriteReference *_lastHitSpriteReference;
    double _defaultInterlayoutSpacing;
    long long _presentedZoomLevel;
    PXAssetsDataSource *_presentedDataSource;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) _Bool isInitialLoad;
@property (nonatomic) _Bool performedInitialLoad;
@property (nonatomic, readonly) double defaultInterlayoutSpacing;
@property (nonatomic, readonly) struct UIEdgeInsets padding;
@property (nonatomic, readonly) long long presentedZoomLevel;
@property (nonatomic, readonly) PXAssetsDataSource *presentedDataSource;
@property (nonatomic, readonly) PXCuratedLibraryViewModel *viewModel;
@property (nonatomic) double lateralMargin;
@property (nonatomic, readonly) PXAssetsSectionLayout *dominantSectionLayout;
@property (retain, nonatomic) id dominantHeroPreferences;
@property (retain, nonatomic) id lastVisibleDominantObjectReference;
@property (retain, nonatomic) PXGSpriteReference *lastHitSpriteReference;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) PXCuratedLibraryLayoutSpec *spec;

- (id)init;
- (void)dealloc;
- (void)update;
- (void)setSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)didFaultInSublayout:(id)arg1 fromEstimatedContentSize:(struct CGSize)arg2;
- (void)willFaultOutSublayout:(id)arg1;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1;
- (id)viewModel:(id)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;
- (void)enumerateSectionBoundariesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)clearLastVisibleAreaAnchoringInformation;
- (CDUnknownBlockType)locationNamesFutureForContentInRect:(struct CGRect)arg1;
- (struct CGRect)sectionBoundariesForAssetCollectionReference:(id)arg1;
- (id)initWithViewModel:(id)arg1 spec:(id)arg2;
- (struct CGSize)layout:(id)arg1 estimatedContentSizeForSublayoutAtIndex:(long long)arg2 referenceSize:(struct CGSize)arg3;
- (id)layout:(id)arg1 createSublayoutAtIndex:(long long)arg2;
- (void)enumerateHeroSpritesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)layout:(id)arg1 collectIndexesOfChapterHeaderSublayouts:(id)arg2 heroSublayouts:(id)arg3 inRange:(struct _NSRange)arg4;
- (_Bool)layout:(id)arg1 shouldPreventFaultOutOfSublayout:(id)arg2;
- (void)_updateFaultOutsets;
- (void)_updatePrefetchedSectionsForFaultedInSublayout:(id)arg1;
- (void)_updateSublayoutsDataSource;
- (void)_prepareAccumulatedSectionItemsBufferForSections:(long long)arg1;
- (void)_updateSublayoutsForSkimming;
- (void)_updatePreheating;
- (void)_anchorVisibleArea;
- (_Bool)prefersDominantHeroForZoomLevel:(long long)arg1;
- (void)setPrefersDominantHero:(_Bool)arg1 forZoomLevel:(long long)arg2;
- (void)_configureSectionLayout:(id)arg1 atIndex:(long long)arg2;
- (void)enumerateAssetsSectionSublayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateAssetsSectionSublayoutsInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateScrollablePagesWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_heroSectionLayoutClosestToSectionLayout:(id)arg1 zoomLevel:(long long)arg2;
- (id)_heroAssetCollectionReferenceClosestToAssetCollectionReference:(id)arg1 zoomLevel:(long long)arg2;
- (id)_targetAssetCollectionReferenceInZoomLevel:(long long)arg1 forTransitionFromAssetCollectionReference:(id)arg2;

@end
