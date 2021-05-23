/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIPageViewController.h>

#import <QuickLook/Swift-Protocol.h>

@class NSMapTable, NSString, QLDelegateProxy, UIScrollView, UIViewController;

@protocol QLPageViewControllerDataSource, UIPageViewControllerDelegate, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface QLPageViewController : UIPageViewController <Swift>

{
    NSMapTable *_pages;
    unsigned long long _nextPageIndex;
    struct CGPoint _scrollingStartOffset;
    id <UIPageViewControllerDelegate> _definedDelegate;
    UIScrollView *_scrollView;
    QLDelegateProxy *_scrollViewDelegateProxy;
    QLDelegateProxy *_pageViewControllerDelegateProxy;
    double _interPageSpacing;
    long long _currentPageIndexForAppliedParallaxEffect;
    _Bool _pageClipsToBounds[3];
    _Bool _isTransitioning;
    unsigned long long _currentPageIndex;
    id <QLPageViewControllerDataSource> _indexedDataSource;
    id <UIScrollViewDelegate> _scrollViewDelegate;
    double _parallaxIntensity;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (weak, nonatomic, readonly) UIViewController *currentPage;
@property (weak, nonatomic) id <QLPageViewControllerDataSource> indexedDataSource;
@property (weak, nonatomic) id <UIScrollViewDelegate> scrollViewDelegate;
@property (weak, nonatomic, readonly) UIScrollView *scrollView;
@property (nonatomic) double parallaxIntensity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setUp;
- (void)_setCurrentPageIndex:(unsigned long long)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_viewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2;
- (void)_unsetParallaxEffect;
- (id)_retrieveAndStoreViewControllerAtIndex:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (void)_rearrangeCachedViewControllersWithNewCurrentPageIndex:(long long)arg1;
- (void)_setViewControllers:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_cachedViewControllerAtIndex:(unsigned long long)arg1 offset:(long long)arg2;
- (void)_loadAndCacheViewControllersBeforeAndAfterIndex:(long long)arg1;
- (void)_applyParallaxEffectWithTransitionProgress:(double)arg1;
- (unsigned long long)_indexOfViewController:(id)arg1;
- (void)setCurrentPageIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)clearInternalCache;

@end
