/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIStorePageSection.h>

@class CPLRUDictionary, NSMutableDictionary, NSString, SKUIDynamicPageSectionIndexMapper, SKUIGridComponent, SKUIGridViewElementPageSectionConfiguration, SKUIMutableIntegerValue, SKUIViewElement, SKUIViewElementLayoutContext, SKUIViewElementTextLayoutCache, _SKUIDynamicGridSizeCacheKey;

@protocol SKUIEntityProviding;

__attribute__((visibility("hidden")))
@interface SKUIDynamicGridViewElementPageSection : SKUIStorePageSection

{
    SKUIViewElementLayoutContext *_cellLayoutContext;
    SKUIGridViewElementPageSectionConfiguration *_configuration;
    SKUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    _Bool _editing;
    id <SKUIEntityProviding> _entityProvider;
    CPLRUDictionary *_globalIndexToEntityValueProviderValueCache;
    CPLRUDictionary *_globalIndexToTemplateViewElementCache;
    SKUIViewElement *_independentlySizedViewElement;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
    long long _minimumEntityCountForSections;
    _SKUIDynamicGridSizeCacheKey *_reusableSizeCacheKey;
    SKUIMutableIntegerValue *_reusableGlobalIndexIntegerValue;
    unsigned long long *_sectionHeaderGlobalIndices;
    unsigned long long _numberOfSections;
    _Bool _showsSectionHeaders;
    NSMutableDictionary *_sizeCacheKeyToCachedCellSize;
    NSMutableDictionary *_templateViewElementsCache;
    _Bool _usesSizingEntityValueProvider;
    struct {
        unsigned int respondsToSectionEntityValueProviderAtIndex:1;
    } _entityProviderFlags;
}

@property (nonatomic, readonly) SKUIGridComponent *pageComponent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isEditing) _Bool editing;

- (void)dealloc;
- (void)_setContext:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)initWithPageComponent:(id)arg1;
- (void)_reloadViewElementProperties;
- (long long)applyUpdateType:(long long)arg1;
- (id)backgroundColorForIndexPath:(id)arg1;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (void)deselectItemsAnimated:(_Bool)arg1;
- (void)invalidateCachedLayoutInformation;
- (id)relevantEntityProviders;
- (struct UIEdgeInsets)sectionContentInset;
- (void)willAppearInContext:(id)arg1;
- (void)collectionViewDidConfirmButtonElement:(id)arg1 withClickInfo:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)entityProvider:(id)arg1 didInvalidateWithContext:(id)arg2;
- (long long)numberOfCells;
- (id)indexPathsForPinningItems;
- (_Bool)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(_Bool)arg3;
- (void)reloadVisibleCellsWithReason:(long long)arg1;
- (void)reloadCellWithIndexPath:(id)arg1 reason:(long long)arg2;
- (struct UIEdgeInsets)pinningContentInsetForItemAtIndexPath:(id)arg1;
- (long long)pinningStyleForItemAtIndexPath:(id)arg1;
- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;
- (void)willTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)targetScrollingIndexPathForElementWithIndexBarEntryID:(id)arg1 relativeSectionIndex:(long long)arg2;
- (void)_enumerateVisibleCellsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_invalidateCellSizeCache;
- (void)_resetLayoutProperties;
- (id)_viewElementAtGlobalIndex:(long long)arg1;
- (id)_dynamicGridViewElement;
- (long long)_entityGlobalIndexForGlobalIndex:(long long)arg1 returningSection:(out long long *)arg2;
- (id)_templateViewElementsForType:(id)arg1 mode:(id)arg2;
- (void)_reloadEntityProperties;
- (void)_updateStyleProperties;
- (void)_reloadVisibleCellsAnimated:(_Bool)arg1;
- (id)_entityValueProviderForGlobalIndex:(long long)arg1 sectionIndex:(long long *)arg2;
- (id)_sectionTemplateViewElementForEntityValueProvider:(id)arg1;
- (long long)_globalIndexForEntityGlobalIndex:(long long)arg1;
- (_Bool)_updateShowsSectionHeaders;
- (id)_itemTemplateViewElementForEntityValueProvider:(id)arg1;
- (id)gridViewElementPageSectionConfiguration:(id)arg1 viewElementForIndexPath:(id)arg2;
- (void)gridViewElementPageSectionConfiguration:(id)arg1 configurePosition:(inout long long *)arg2 forItemAtIndexPath:(id)arg3;

@end
