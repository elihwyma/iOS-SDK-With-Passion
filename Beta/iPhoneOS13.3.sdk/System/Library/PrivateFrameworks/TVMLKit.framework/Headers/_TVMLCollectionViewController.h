/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <UIKit/UIViewController.h>

@class IKCollectionElement, IKViewElement, NSArray, NSDictionary, NSIndexPath, NSString, UICollectionView, _TVCollectionWrappingView, _TVNeedsMoreContentEvaluator, _TVShadowViewElement;

@protocol TVPreviewInteractionController;

__attribute__((visibility("hidden")))
@interface _TVMLCollectionViewController : UIViewController

{
    _Bool _didAppear;
    _Bool _didUpdateFocus;
    double _impressionThreshold;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    id <TVPreviewInteractionController> _previewInteractionController;
    _Bool _indexDisplayEnabled;
    UICollectionView *_collectionView;
    UIViewController *_headerViewController;
    IKCollectionElement *_collectionElement;
    IKViewElement *_headerElement;
    UIViewController *_footerViewController;
    IKViewElement *_footerElement;
    NSIndexPath *_lastFocusedIndexPath;
    _TVShadowViewElement *_shadowViewElement;
    NSDictionary *_indexPathsByIndexTitle;
    NSArray *_sortedIndexTitles;
    struct TVShowcaseConfig _showcaseConfig;
    struct TVCellMetrics _cellMetrics;
}

@property (retain, nonatomic) UIViewController *headerViewController;
@property (retain, nonatomic) UIViewController *footerViewController;
@property (retain, nonatomic) _TVShadowViewElement *shadowViewElement;
@property (nonatomic) struct TVShowcaseConfig showcaseConfig;
@property (copy, nonatomic) NSDictionary *indexPathsByIndexTitle;
@property (copy, nonatomic) NSArray *sortedIndexTitles;
@property (retain, nonatomic, readonly) _TVCollectionWrappingView *collectionWrappingView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic, readonly) IKCollectionElement *collectionElement;
@property (retain, nonatomic, readonly) IKViewElement *headerElement;
@property (nonatomic, readonly) struct TVCellMetrics cellMetrics;
@property (retain, nonatomic, readonly) IKViewElement *footerElement;
@property (copy, nonatomic) NSIndexPath *lastFocusedIndexPath;
@property (nonatomic, getter=isIndexDisplayEnabled) _Bool indexDisplayEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)headerElementFromCollectionElement:(id)arg1;
+ (id)_shadowViewElementForCollectionElement:(id)arg1;
+ (id)footerElementFromCollectionElement:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)indexTitlesForCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (id)_closestIndexPathToIndexPath:(id)arg1;
- (void)_updateHeaderView;
- (void)_updateFooterView;
- (void)tv_updateViewLayout;
- (void)_cancelImpressionsUpdate;
- (void)tv_setShowcaseConfig:(struct TVShowcaseConfig)arg1;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)updateWithViewElement:(id)arg1 cellMetrics:(struct TVCellMetrics)arg2;
- (void)preloadSubviewsInRect:(struct CGRect)arg1;
- (void)dispatchEvent:(id)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2;
- (void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (unsigned long long)preferredScrollPosition;
- (void)_updateImpressions;
- (void)_recordImpressionsForVisibleView;
- (void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2;
- (_Bool)shouldHeaderFloatByDefault;
- (void)updateVisibleCell:(id)arg1 atIndexPath:(id)arg2 withElement:(id)arg3;
- (Class)cellClassForElement:(id)arg1;
- (void)updateSupplementaryViewsForSectionAtOldIndex:(long long)arg1 oldElement:(id)arg2 withNewIndex:(long long)arg3 newElement:(id)arg4 requiresReload:(_Bool *)arg5 requiresRelayout:(_Bool *)arg6;
- (void)didUpdateCollectionViewByNeedingReload:(_Bool)arg1 focusUpdate:(_Bool)arg2;
- (void)adjustContentOffsetToDisplayIndexPath:(id)arg1;
- (void)_registerCellClassesInCollectionView:(id)arg1;
- (void)_doUpdateViewLayoutAnimated:(_Bool)arg1 relayout:(_Bool)arg2;
- (void)_registerPreviewInteractionController;

@end
