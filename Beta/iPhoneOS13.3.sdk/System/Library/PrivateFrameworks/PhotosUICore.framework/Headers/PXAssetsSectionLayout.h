/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXGSplitLayout.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSSet, NSString, PXAssetCollectionReference, PXAssetsDataSource, PXAssetsSectionConfigurator, PXAssetsSectionLayoutSpec, PXCuratedLibraryActionManager, PXCuratedLibraryActionPerformer, PXCuratedLibraryAssetDecorationSource, PXCuratedLibraryOverlayButtonConfiguration, PXCuratedLibrarySectionHeaderLayout, PXCuratedLibraryShowAllActionPerformer, PXGLayout, PXGLayoutGuide, PXSelectionSnapshot;

@protocol PXDisplayAssetCollection, PXDisplayAssetFetchResult;

@interface PXAssetsSectionLayout : PXGSplitLayout <Swift>

{
    CDStruct_d97c9657 _updateFlags;
    CDStruct_d97c9657 _postUpdateFlags;
    unsigned int _sectionBoundariesSpriteIndex;
    unsigned int _sectionShadowSpriteIndex;
    unsigned int _showAllButtonSpriteIndex;
    unsigned short _showAllButtonVersion;
    struct CGSize _cachedShowAllButtonConfigurationSize;
    unsigned int _selectAllButtonSpriteIndex;
    unsigned short _selectAllButtonVersion;
    struct CGSize _cachedSelectAllButtonConfigurationSize;
    PXCuratedLibrarySectionHeaderLayout *_sectionHeaderLayout;
    _Bool _isLastSection;
    _Bool _isUpdatingLocalSprites;
    PXCuratedLibraryAssetDecorationSource *_assetDecorationSource;
    _Bool _showAllButtonConfigurationIsValid;
    _Bool _selectAllButtonConfigurationIsValid;
    PXAssetCollectionReference *_assetCollectionReference;
    _Bool _isSelecting;
    _Bool _canStartSelecting;
    _Bool _wantsShadow;
    _Bool _showsSkimmingHints;
    _Bool _showsSkimmingSlideshow;
    _Bool _showsSkimmingInteraction;
    _Bool _allowsPositionDependentHeaderContentOpacity;
    _Bool _presentedSkimming;
    PXCuratedLibraryOverlayButtonConfiguration *_showAllButtonConfiguration;
    PXCuratedLibraryOverlayButtonConfiguration *_selectAllButtonConfiguration;
    long long _zoomLevel;
    long long _targetZoomLevel;
    PXAssetsSectionLayoutSpec *_spec;
    long long _section;
    PXAssetsDataSource *_dataSource;
    PXCuratedLibraryActionManager *_actionManager;
    long long _numberOfPrecedingAssets;
    PXCuratedLibraryShowAllActionPerformer *_showAllActionPerformer;
    PXCuratedLibraryActionPerformer *_selectAllActionPerformer;
    NSString *_selectAllButtonTitle;
    PXGLayoutGuide *_headerLayoutGuide;
    long long _maxSkimmingIndex;
    long long _currentSkimmingIndex;
    PXGLayout *_headerLayout;
    PXGLayout *_bodyContentLayout;
    PXAssetsSectionConfigurator *_configurator;
    PXGLayout *_bodyContainerLayout;
    double _distanceBetweenTitleTopAndBodyBottom;
    double _distanceBetweenHeaderTopAndNextBodyTop;
    double _intersectionSpacing;
    struct CGRect _showAllButtonFrame;
    struct PXSimpleIndexPath _presentedSectionIndexPath;
}

@property (retain, nonatomic) PXAssetsSectionConfigurator *configurator;
@property (retain, nonatomic) PXGLayout *bodyContainerLayout;
@property (nonatomic) _Bool allowsPositionDependentHeaderContentOpacity;
@property (nonatomic) double distanceBetweenTitleTopAndBodyBottom;
@property (nonatomic) double distanceBetweenHeaderTopAndNextBodyTop;
@property (nonatomic, readonly) PXCuratedLibraryOverlayButtonConfiguration *showAllButtonConfiguration;
@property (nonatomic, readonly) PXCuratedLibraryOverlayButtonConfiguration *selectAllButtonConfiguration;
@property (nonatomic) struct CGRect showAllButtonFrame;
@property (nonatomic, readonly) struct PXSimpleIndexPath sectionIndexPath;
@property (nonatomic, readonly) struct PXSimpleIndexPath presentedSectionIndexPath;
@property (nonatomic, readonly) _Bool presentedSkimming;
@property (retain, nonatomic) PXGLayout *headerLayout;
@property (nonatomic, readonly) _Bool isCurated;
@property (nonatomic, readonly) long long numberOfAssets;
@property (nonatomic, readonly) long long keyItemIndex;
@property (nonatomic, readonly) id <PXDisplayAssetFetchResult> keyAssetsFetchResult;
@property (nonatomic) double intersectionSpacing;
@property (nonatomic) long long zoomLevel;
@property (nonatomic) long long targetZoomLevel;
@property (retain, nonatomic) PXAssetsSectionLayoutSpec *spec;
@property (nonatomic, readonly) long long section;
@property (nonatomic, readonly) PXAssetsDataSource *dataSource;
@property (nonatomic, readonly) PXCuratedLibraryActionManager *actionManager;
@property (retain, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (copy, nonatomic) NSSet *draggedAssetReferences;
@property (nonatomic) _Bool isSelecting;
@property (nonatomic) _Bool canStartSelecting;
@property (nonatomic) long long numberOfPrecedingAssets;
@property (nonatomic) _Bool wantsShadow;
@property (retain, nonatomic) PXCuratedLibraryShowAllActionPerformer *showAllActionPerformer;
@property (retain, nonatomic) PXCuratedLibraryActionPerformer *selectAllActionPerformer;
@property (retain, nonatomic) NSString *selectAllButtonTitle;
@property (retain, nonatomic) PXGLayoutGuide *headerLayoutGuide;
@property (nonatomic) _Bool showsSkimmingHints;
@property (nonatomic) _Bool showsSkimmingSlideshow;
@property (nonatomic) _Bool showsSkimmingInteraction;
@property (nonatomic) long long maxSkimmingIndex;
@property (nonatomic) long long currentSkimmingIndex;
@property (nonatomic, readonly) id <PXDisplayAssetCollection> assetCollection;
@property (nonatomic, readonly) PXAssetCollectionReference *assetCollectionReference;
@property (nonatomic, readonly) PXGLayout *bodyContentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double buildingRowContentHeight;
@property (nonatomic, readonly) double buildingRowSpacing;

+ (struct CGSize)estimatedSizeWithReferenceSize:(struct CGSize)arg1 assetCollection:(id)arg2 numberOfAssets:(long long)arg3 isCurated:(_Bool)arg4 zoomLevel:(long long)arg5 spec:(id)arg6;

- (id)init;
- (void)update;
- (id)accessibilityLabel;
- (void)contentSizeDidChange;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateContent;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)objectReferenceForSpriteIndex:(unsigned int)arg1;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (void)visibleRectDidChange;
- (void)screenScaleDidChange;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)generatedLayout:(id)arg1 inputItemAtIndex:(unsigned int)arg2;
- (struct CGRect)generatedLayout:(id)arg1 bestCropRectForInputItemAtIndex:(unsigned int)arg2 withAspectRatio:(double)arg3;
- (id)generatedLayout:(id)arg1 objectReferenceAtIndex:(unsigned int)arg2;
- (double)itemsLayout:(id)arg1 aspectRatioForItem:(long long)arg2;
- (struct CGRect)itemsLayout:(id)arg1 bestCropRectForItem:(long long)arg2 withAspectRatio:(double)arg3;
- (void)itemsLayout:(id)arg1 updateTagsInSpriteInfos:(CDStruct_9d1ebe49 *)arg2 forItemsInRange:(struct _NSRange)arg3;
- (id)diagnosticDescription;
- (void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateVisibleAnchoringLayoutsUsingBlock:(CDUnknownBlockType)arg1;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (_Bool)canCreateAccessibilityGroupElement;
- (_Bool)hasBodyContent;
- (_Bool)canSelectAccessibilityGroupElements;
- (_Bool)canSelectAccessibilityGroupElementsChildren;
- (unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (struct CGSize)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (id)displayAssetRequestObserverForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
- (void)enumerateRowsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)shadowForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (double)cornerRadiusForShadowSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)initWithSection:(long long)arg1 dataSource:(id)arg2 actionManager:(id)arg3 zoomLevel:(long long)arg4 spec:(id)arg5;
- (void)setDataSource:(id)arg1 section:(long long)arg2;
- (id)layoutForItemChanges;
- (void)setBodyContentLayout:(id)arg1 wantsDecoration:(_Bool)arg2;
- (void)_invalidateConfigurator;
- (void)_updateConfigurator;
- (void)_invalidateContent;
- (void)_updateDecorationSource;
- (void)_updateLocalSprites;
- (void)_updateDistanceProperties;
- (void)_updateSectionHeaderProperties;
- (void)_invalidateShowAllButton;
- (void)_invalidateShowAllButtonPosition;
- (void)_updateShowAllButtonPosition;
- (void)_invalidateSelectAllButton;
- (void)_invalidateSelectAllButtonPosition;
- (void)_updateSelectAllButtonPosition;
- (void)_invalidateAssetsWithCoveredBottomTrailingCorner;
- (void)_updateAssetsWithCoveredBottomTrailingCorner;
- (_Bool)_shouldAnchorOnAssetCollection;
- (struct PXSimpleIndexPath)_dataSourceIndexPathForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id *)arg3;
- (id)_assetReferenceClosestVisuallyToAssetReference:(id)arg1;
- (CDUnknownBlockType)dateIntervalFutureForContentInRect:(struct CGRect)arg1;
- (id)_rowBasedBodyContentLayout;
- (id)_displayAssetForBodyItem:(long long)arg1;

@end
