/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMapTable, NSString, SKUICrossFadingTabBar, SKUIDynamicBarAnimator, SKUIProxyScrollView, SKUIScrollingTabBarBackgroundView, SKUIScrollingTabBarContentCollectionView, SKUIScrollingTabBarControllerItemContext, SKUIScrollingTabBarPalette, UINavigationController, UIScrollView, UIView, UIViewController;

@protocol SKUITabBarControllerDelegate;

@interface SKUIScrollingTabBarController : SKUIViewController <Swift>

{
    unsigned long long _activePaletteTransitions;
    CDStruct_efaabef7 _additionalPositionOffsetsUpdateRecord;
    unsigned long long _additionalPositionOffsetsAtomicUpdateRequestCount;
    _Bool _canHideBarsOnSwipe;
    struct CGSize _contentCollectionViewItemSize;
    SKUIScrollingTabBarContentCollectionView *_contentCollectionView;
    SKUIDynamicBarAnimator *_dynamicBarAnimator;
    UIScrollView *_focusedContentScrollView;
    UIViewController *_focusedViewController;
    _Bool _focusedScrollViewIsDragging;
    long long _indexOfViewControllerWithUpdatedContentSize;
    _Bool _isDelegatingPresentedViewControllerLogicToSelectedViewController;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    unsigned long long _referenceCountForIgnoringContentOffsetUpdateRequests;
    _Bool _shouldPreserveFocusUponNextContentCollectionViewItemSizeChange;
    _Bool _shouldShowBarsAfterDraggingDownward;
    SKUICrossFadingTabBar *_tabBar;
    UIView *_tabBarContainerView;
    struct UIOffset _tabBarExplicitHidingOffset;
    _Bool _tabBarExplicitlyHidden;
    SKUIScrollingTabBarBackgroundView *_tabBarExtendedBackgroundView;
    SKUIScrollingTabBarPalette *_tabBarPalette;
    UIViewController *_topLevelFocusedViewController;
    SKUIScrollingTabBarControllerItemContext *_transientViewControllerItemContext;
    NSMapTable *_viewControllerToItemContext;
    _Bool _chargeEnabledOnTabBarButtonsContainer;
    _Bool _scrollEnabled;
    id <SKUITabBarControllerDelegate> _delegate;
    UIViewController *_transientViewController;
    NSArray *_viewControllers;
    struct UIOffset _additionalTabBarButtonsContainerPositionOffset;
    struct UIOffset _additionalTabBarPalettePositionOffset;
}

@property (nonatomic) struct UIOffset additionalTabBarButtonsContainerPositionOffset;
@property (nonatomic) struct UIOffset additionalTabBarPalettePositionOffset;
@property (nonatomic) _Bool chargeEnabledOnTabBarButtonsContainer;
@property (nonatomic, readonly) double contentViewControllerBottomInsetAdjustment;
@property (nonatomic) _Bool scrollEnabled;
@property (nonatomic, readonly) struct CGRect tabBarButtonsContainerFrame;
@property (nonatomic, readonly) struct CGRect tabBarPaletteFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) id <SKUITabBarControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *viewControllers;
@property (nonatomic) UIViewController *selectedViewController;
@property (nonatomic) unsigned long long selectedIndex;
@property (nonatomic, readonly) UIView *tabBar;
@property (retain, nonatomic) UIViewController *transientViewController;
@property (nonatomic, readonly) NSArray *allViewControllers;
@property (nonatomic) long long forcedUserInterfaceStyle;
@property (nonatomic, readonly) UINavigationController *moreNavigationController;
@property (nonatomic, readonly) UIViewController *floatingOverlayViewController;

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)areScrollingTabsAllowed;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)traitCollectionDidChange:(id)arg1;
- (id)presentedViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)contentScrollView;
- (void)setTransientViewController:(id)arg1 animated:(_Bool)arg2;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (id)_backdropBarGroupName;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)hideBarWithTransition:(int)arg1;
- (void)showBarWithTransition:(int)arg1;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)_updateDynamicBarGeometry;
- (void)observedScrollViewDidScroll:(id)arg1;
- (void)observedScrollViewWillBeginDragging:(id)arg1;
- (void)observedScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint)arg3;
- (void)dynamicBarAnimatorDidUpdate:(id)arg1;
- (_Bool)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)tabBarBackgroundExtendsBehindPaletteDidChangeForPalette:(id)arg1;
- (void)_setViewControllers:(id)arg1 collectionViewsUpdateHandler:(CDUnknownBlockType)arg2 forFinalTearDown:(_Bool)arg3;
- (void)_updateHorizontalScrollingAvailability;
- (id)_tabBarBackdropGroupName;
- (void)_updateTabBarButtons;
- (void)_updateLayoutOfTabBar;
- (void)_updateForHorizontalLayoutChange;
- (void)_updateStatusBarPositionForcingVisible:(_Bool)arg1;
- (void)_updateHidesBarsOnSwipeAvailability;
- (void)_updateNavigationBarsForVerticalLayoutChange;
- (void)_updateFocusedViewControllerInsetsForVerticalLayoutChange;
- (void)_updateViewControllerContentScrollViewInset;
- (id)_parentCellForViewController:(id)arg1;
- (void)_updateTabBarBackgroundsAndHairlines;
- (_Bool)_focusedContentScrollViewIsScrolledToOrPastBottom;
- (CDStruct_17994511)_viewControllerContentScrollViewContentInsetDescriptor;
- (void)_updateLayoutOfCollectionViewCell:(id)arg1;
- (double)_effectiveBottomBarOffset;
- (struct UIOffset)_roundedOffsetFromOffset:(struct UIOffset)arg1;
- (void)_updateAdditionalPositionOffsetsWithUpdateRecord:(CDStruct_efaabef7)arg1;
- (void)_selectTabAtIndex:(unsigned long long)arg1 shouldFallbackToPoppingToTabRootContent:(_Bool)arg2;
- (void)attachTabBarPalette:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_animatePaletteWithSetup:(CDUnknownBlockType)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)detachTabBarPalette:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)willUpdateAdditionalTabBarComponentsPositionOffsets;
- (void)didUpdateAdditionalTabBarComponentsPositionOffsets;
- (id)_deepestFocusedViewControllerWithTopLevelFocusedViewController:(id)arg1;
- (void)_setFocusedViewController:(id)arg1 showBarsIfNeeded:(_Bool)arg2 animated:(_Bool)arg3 notifyDelegate:(_Bool)arg4;
- (void)_invalidateContentCollectionViewLayoutForUpdatedContentSizeWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1 indexOfViewControllerWithUpdatedContentSize:(unsigned long long)arg2;
- (void)_popVisibleNavigationStacksToRootWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_updateLayoutOfVisibleCollectionViewCells;
- (void)_updateTabBarButtonsSelectionProgressWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_updateFocusedViewControllerWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_discardUndesirableLastSelectedPageIndexesWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_notifyViewControllerAppearanceProgressUpdateWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;
- (void)_tabBarButtonTapped:(id)arg1;
- (void)scrollingTabBarContentCollectionViewDidLayoutSubviews:(id)arg1;
- (void)scrollingTabBarControllerItemContextRequestsContentOffsetUpdate:(id)arg1;
- (void)scrollingTabBarControllerItemContextRequestsContentSizeUpdate:(id)arg1;
- (void)scrollingTabBarControllerItemContext:(id)arg1 observedNavigationStackDidChange:(id)arg2;
- (id)existingTabBarPalette;
- (id)tabBarPaletteWithHeight:(double)arg1;
- (void)attachTabBarPalette:(id)arg1;
- (void)detachTabBarPalette:(id)arg1;
- (void)updateTabBarComponentPositionOffsetsWithPresentationValues;
- (double)_effectiveTopBarHeight;
- (void)_viewControllerNeedsNestedPagingScrollViewUpdate:(id)arg1;

@end
