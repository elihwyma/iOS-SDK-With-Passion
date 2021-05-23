/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSIndexPath, NSMapTable, NSMutableArray, NSMutableIndexSet, NSNumber, NSString, SKUICollectionView, SKUIColorScheme, SKUIIndexBarControl, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIProductPageOverlayController, SKUIResourceLoader, SKUIStackedBar, SKUIStorePageSplitsDescription, UICollectionView, UIRefreshControl, UITapGestureRecognizer, UIView;

@protocol SKUICollectionViewPullToRefreshDelegate, SKUIStorePageSectionsDelegate, UIViewControllerPreviewing;

__attribute__((visibility("hidden")))
@interface SKUIStorePageSectionsViewController : SKUIViewController <Swift>

{
    SKUIProductPageOverlayController *_activeOverlayController;
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    SKUICollectionView *_collectionView;
    UITapGestureRecognizer *_collectionViewTapGestureRecognizer;
    SKUIColorScheme *_colorScheme;
    struct UIEdgeInsets _contentInsetAdjustments;
    id _deferredSplitsDescription;
    id <SKUIStorePageSectionsDelegate> _delegate;
    _Bool _delegateWantsDidScroll;
    _Bool _delegateWantsWillScrollToOffsetVisibleRange;
    _Bool _didInitialReload;
    NSMapTable *_entityProviderToRelevantSections;
    NSMapTable *_expandSectionContexts;
    NSMutableIndexSet *_expandInsertSections;
    NSMutableIndexSet *_expandRemoveSections;
    long long _ignoreSectionsChangeCount;
    SKUIIndexBarControl *_indexBarControl;
    NSIndexPath *_indexPathOfEditedCell;
    NSArray *_initialOverlayURLs;
    NSNumber *_lastKnownWidth;
    long long _layoutStyle;
    NSMapTable *_menuSectionContexts;
    SKUIMetricsController *_metricsController;
    SKUIProductPageOverlayController *_overlayController;
    long long _pinningTransitionStyle;
    id <UIViewControllerPreviewing> _viewControllerPreviewing;
    id <SKUICollectionViewPullToRefreshDelegate> _pullToRefreshDelegate;
    UIRefreshControl *_refreshControl;
    _Bool _rendersWithParallax;
    _Bool _rendersWithPerspective;
    SKUIResourceLoader *_resourceLoader;
    _Bool _scrollOffsetHasChanged;
    NSMutableArray *_sections;
    SKUIStorePageSplitsDescription *_splitsDescription;
    UIView *_splitsDividerView;
    SKUIStackedBar *_stackedBar;
    SKUILayoutCache *_textLayoutCache;
    long long _lastInterfaceOrientation;
    _Bool _itemsChangedStateWhileDisappeared;
}

@property (retain, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession;
@property (retain, nonatomic) SKUIResourceLoader *resourceLoader;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (copy, nonatomic) SKUIColorScheme *colorScheme;
@property (weak, nonatomic) id <SKUIStorePageSectionsDelegate> delegate;
@property (weak, nonatomic) id <SKUICollectionViewPullToRefreshDelegate> pullToRefreshDelegate;
@property (retain, nonatomic) SKUIIndexBarControl *indexBarControl;
@property (retain, nonatomic) SKUIMetricsController *metricsController;
@property (nonatomic) long long pinningTransitionStyle;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly, getter=isDisplayingOverlays) _Bool displayingOverlays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)reloadSections:(id)arg1;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint)arg2 inSourceView:(id)arg3;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (void)_handleTap:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)collectionView:(id)arg1 didConfirmButtonElement:(id)arg2 withClickInfo:(id)arg3 forItemAtIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 layout:(id)arg2 willApplyLayoutAttributes:(id)arg3;
- (void)_contentSizeChangeNotification:(id)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_unregisterForNotificationsForEntityProvider:(id)arg1;
- (id)_newStorePageCollectionViewLayout;
- (void)_longPressAction:(id)arg1;
- (void)_enumerateSectionContextsUsingBlock:(CDUnknownBlockType)arg1;
- (id)_defaultSectionForGridComponent:(id)arg1;
- (id)_defaultSectionForSwooshComponent:(id)arg1;
- (id)_collectionViewSublayouts;
- (id)_textLayoutCache;
- (void)setSectionsWithSplitsDescription:(id)arg1;
- (id)_newSectionContext;
- (id)_createSectionsForExpandPageComponent:(id)arg1 context:(id)arg2 newSections:(id)arg3 sectionCount:(long long)arg4 sectionsByViewElement:(id)arg5 updateStyle:(long long)arg6;
- (id)_newSectionsWithPageComponent:(id)arg1;
- (void)_updateCollectionViewWithUpdates:(CDUnknownBlockType)arg1;
- (void)_reloadRelevantEntityProviders;
- (void)dismissOverlays;
- (void)_setActiveProductPageOverlayController:(id)arg1;
- (void)_startRefresh:(id)arg1;
- (void)_deselectCellsForAppearance:(_Bool)arg1;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (void)_invalidateIfLastKnownWidthChanged;
- (id)_currentBackdropGroupName;
- (void)_beginActiveImpressionsForImpressionableViewElements;
- (void)_endAllPendingActiveImpression;
- (void)_setPageSize:(struct CGSize)arg1;
- (void)_reloadCollectionView;
- (void)_scrollFirstAppearanceSectionToView;
- (void)_prefetchArtworkForVisibleSections;
- (void)invalidateAndReload;
- (id)_splitForSectionIndex:(long long)arg1;
- (id)defaultSectionForComponent:(id)arg1;
- (void)_updateSectionsAfterMenuChange;
- (id)_menuContextForMenuComponent:(id)arg1;
- (id)_childSectionsForMenuComponent:(id)arg1 selectedIndex:(long long)arg2;
- (id)_impressionableViewElements;
- (void)_invalidateLayoutWithNewSize:(struct CGSize)arg1 transitionCoordinator:(id)arg2;
- (void)_enumerateVisibleSectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_entityProviderDidInvalidateNotification:(id)arg1;
- (id)_prepareLayoutForSections;
- (void)_registerForNotificationsForEntityProvider:(id)arg1;
- (void)_beginIgnoringSectionChanges;
- (void)_endIgnoringSectionChanges;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)productPageOverlayDidDismiss:(id)arg1;
- (id)backgroundColorForSection:(long long)arg1;
- (void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 canScrollCellAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 pinningContentInsetForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningStyleForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningGroupForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 layout:(id)arg2 pinningTransitionStyleForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2;
- (id)indexPathsForPinningItemsInCollectionView:(id)arg1 layout:(id)arg2;
- (id)indexPathsForGradientItemsInCollectionView:(id)arg1 layout:(id)arg2;
- (_Bool)performTestWithName:(id)arg1 options:(id)arg2;
- (void)setSectionsWithPageComponents:(id)arg1;
- (void)setSKUIStackedBar:(id)arg1;
- (void)showOverlayWithProductPage:(id)arg1 metricsPageEvent:(id)arg2;
- (id)SKUIStackedBar;
- (void)setUsePullToRefresh:(_Bool)arg1;
- (void)collectionView:(id)arg1 editorialView:(id)arg2 didSelectLink:(id)arg3;
- (void)collectionView:(id)arg1 expandEditorialForLabelElement:(id)arg2 indexPath:(id)arg3;
- (void)collectionView:(id)arg1 performDefaultActionForViewElement:(id)arg2 indexPath:(id)arg3;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)itemCollectionView:(id)arg1 didTapVideoForCollectionViewCell:(id)arg2;
- (void)skuiCollectionViewWillLayoutSubviews:(id)arg1;
- (void)_insertSectionsWithComponents:(id)arg1 afterSection:(id)arg2;
- (void)_pageSectionDidDismissOverlayController:(id)arg1;
- (void)_setRendersWithPerspective:(_Bool)arg1;
- (void)_setRendersWithParallax:(_Bool)arg1;
- (void)_setSelectedIndex:(long long)arg1 forMenuSection:(id)arg2;
- (void)_updateSectionsForIndex:(long long)arg1 menuSection:(id)arg2;
- (id)_visibleMetricsImpressionsString;
- (void)_applyColorScheme:(id)arg1 toIndexBarControl:(id)arg2;
- (id)_expandContextForMenuComponent:(id)arg1;
- (id)_newSectionsWithPageComponents:(id)arg1;

@end
