/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVStackCommonTemplateController.h>

@class IKChangeSet, NSArray, NSIndexPath, NSMutableArray, NSString, UIView, UIViewController, _TVNeedsMoreContentEvaluator;

@interface _TVStackTemplateController : _TVStackCommonTemplateController

{
    NSArray *_unfilteredViewControllers;
    IKChangeSet *_filteredChangeSet;
    NSArray *_viewControllers;
    NSMutableArray *_preloadQueue;
    NSArray *_stackSections;
    NSArray *_stackRows;
    double _contentHeight;
    double _showcaseFactor;
    NSIndexPath *_lastFocusedIndexPath;
    _TVNeedsMoreContentEvaluator *_needsMoreContentEvaluator;
    UIViewController *_backdropTintViewController;
    UIView *_backdropTintView;
    _Bool _requiresShowcasing;
    _Bool _shouldInvalidateMetrics;
    struct {
        _Bool _preloadingScheduled;
    } _flags;
    double _showcaseInset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double showcaseFactor;
@property (nonatomic) double showcaseInset;

- (id)init;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (id)viewControllers;
- (long long)numberOfCollections;
- (void)_configureBackgroundTintView;
- (void)_adjustedContentOffsetForRowIndex:(long long)arg1 targetContentOffset:(struct CGPoint *)arg2;
- (void)_buildStackSections;
- (void)_updateBackgroundTintView;
- (void)_updateBackgroundTintViewEffects;
- (double)_maxViewWidth;
- (struct CGSize)_maxContentSize;
- (void)_updateFirstItemRowIndexes;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 showcaseFactorDidChangeForLayout:(id)arg2;
- (void)updateCollectionViewControllersAndForceReload:(_Bool)arg1;
- (void)updateBackgroundAndBackdrop;
- (void)updateBackgroundAndBackdropMaskFactor;
- (void)didUpdateSupplementarySectionInfo;
- (_Bool)shouldAdjustForTabBarSafeAreaInsets;
- (void)mediaInfoDidChange;
- (void)showcaseFactorDidChange;
- (void)_invalidateSectionMetricsIfNeeded;
- (id)scrollStopForShowcaseTransition;
- (double)_offsetToScrollStop:(id)arg1;
- (id)_updateWithCollectionListElement:(id)arg1 commits:(CDUnknownBlockType *)arg2 autoHighlightIndexPath:(id *)arg3;
- (struct UIEdgeInsets)_scrollableBoundsInset;
- (void)_scheduleNextPreloadConditional;
- (void)_preloadNext;
- (id)scrollStopForEnteringSectionAtIndex:(long long)arg1 fromEdge:(long long)arg2;
- (_Bool)_didExtendContentForPeekMetrics:(CDStruct_6408a1ed *)arg1 above:(_Bool)arg2 initial:(_Bool)arg3;
- (void)didUpdateSectionInfo;
- (id)tabBarObservedScrollView;
- (void)_scrollToTopAnimated:(_Bool)arg1;

@end
