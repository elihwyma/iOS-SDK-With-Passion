/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSString, SKUIInteractiveSegmentedControl, SKUIProxyScrollView, SKUIScrollingSegmentedControllerCollectionView, SKUIScrollingSegmentedControllerNavigationBarTitleView, UIScrollView, UIViewController;

@protocol SKUIScrollingSegmentedControllerDelegate;

@interface SKUIScrollingSegmentedController : SKUIViewController <Swift>

{
    struct CGSize _contentCollectionViewItemSize;
    SKUIScrollingSegmentedControllerCollectionView *_contentCollectionView;
    SKUIScrollingSegmentedControllerNavigationBarTitleView *_navigationBarTitleView;
    SKUIProxyScrollView *_proxyScrollView;
    struct UIEdgeInsets _proxyScrollViewContentInsetAdjustment;
    CDStruct_19149c72 _scrollingTabAppearanceStatus;
    NSMutableArray *_titleObservingViewControllers;
    SKUIInteractiveSegmentedControl *_titlesSegmentedControl;
    _Bool _viewBackgroundIsWhite;
    NSMapTable *_viewControllerToItemContext;
    _Bool _scrollEnabled;
    _Bool _wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
    _Bool _wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
    id <SKUIScrollingSegmentedControllerDelegate> _delegate;
    double _maximumContentWidth;
    NSArray *_viewControllers;
    unsigned long long _focusedViewControllerIndex;
}

@property (nonatomic, readonly, getter=_titlesSegmentedControl) SKUIInteractiveSegmentedControl *titlesSegmentedControl;
@property (weak, nonatomic) id <SKUIScrollingSegmentedControllerDelegate> delegate;
@property (nonatomic) double maximumContentWidth;
@property (copy, nonatomic) NSArray *viewControllers;
@property (nonatomic) _Bool scrollEnabled;
@property (nonatomic) struct UIEdgeInsets segmentedControlContentEdgeInsets;
@property (nonatomic) double segmentedControlHeight;
@property (nonatomic) long long segmentedControlLayoutStyle;
@property (nonatomic, readonly) unsigned long long focusedViewControllerIndex;
@property (nonatomic, readonly) SKUIScrollingSegmentedControllerNavigationBarTitleView *navigationBarTitleView;
@property (nonatomic) _Bool wantsWhiteBackgroundBeyondLeftEdgeWhenBouncing;
@property (nonatomic) _Bool wantsWhiteBackgroundBeyondRightEdgeWhenBouncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIScrollView *scrollingTabNestedPagingScrollView;
@property (nonatomic, readonly) UIViewController *focusedViewController;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)contentScrollView;
- (void)setClientContext:(id)arg1;
- (void)selectViewControllerAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollingTabAppearanceStatusWasUpdated:(CDStruct_19149c72)arg1;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)arg1;
- (void)replaceViewControllerAtIndex:(unsigned long long)arg1 withViewController:(id)arg2;
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (void)scrollViewDidMoveToWindow:(id)arg1;
- (void)_titlesSegmentedControlValueChangeAction:(id)arg1;
- (void)_updateViewBackgroundColor;
- (void)_reloadTitleSegments;
- (void)_updateTitlesSelectionProgress;
- (_Bool)_configureSegment:(id)arg1 forViewController:(id)arg2;
- (struct UIEdgeInsets)_viewControllerContentScrollViewContentInset;
- (id)_indexPathOfFocusedItemAllowingLayoutIfNeeded:(_Bool)arg1;
- (void)_setViewControllers:(id)arg1 viewUpdatesHandler:(CDUnknownBlockType)arg2;
- (void)_scrollToTitlesSelectionProgress:(double)arg1 animated:(_Bool)arg2;
- (void)_updateTitleValueObservation;
- (void)scrollingSegmentedControllerCollectionViewDidLayoutSubviews:(id)arg1;
- (void)contentScrollViewDidChangeForScrollingSegmentedControllerItemContext:(id)arg1;
- (void)_viewControllerNeedsContentScrollViewUpdates:(id)arg1;

@end
