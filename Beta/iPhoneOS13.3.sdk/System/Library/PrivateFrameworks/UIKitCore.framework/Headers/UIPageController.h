/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class NSMutableArray, UIPageControl, UIScrollView, UIView;

@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController

{
    NSMutableArray *_viewControllers;
    UIView *_wrapperViews[3];
    int _notificationState[3];
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    id <UIPageControllerDelegate> _delegate;
    int _pageSpacing;
    long long _visibleIndex;
    long long _pageCount;
    struct {
        unsigned int delegateViewControllerAtIndex:1;
        unsigned int delegateWillBeginPaging:1;
        unsigned int delegateDidEndPaging:1;
        unsigned int displaysPageControl:1;
        unsigned int wraps:1;
    } _pageControllerFlags;
}

@property (nonatomic) id <UIPageControllerDelegate> delegate;
@property (nonatomic) double pageSpacing;
@property (nonatomic) _Bool displaysPageControl;
@property (retain, nonatomic, readonly) UIViewController *visibleViewController;
@property (nonatomic) long long pageCount;
@property (nonatomic) long long visibleIndex;
@property (nonatomic) _Bool wraps;

- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (id)_scrollView;
- (_Bool)_allowsAutorotation;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)rotatingHeaderView;
- (id)rotatingFooterView;
- (_Bool)_shouldUseOnePartRotation;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)_scrollView:(id)arg1 boundsDidChangeToSize:(struct CGSize)arg2;
- (void)_scrollViewDidScroll:(id)arg1 forceUpdate:(_Bool)arg2;
- (void)_scrollViewWillBeginPaging;
- (void)_scrollViewDidEndPaging;
- (struct CGRect)_scrollViewFrame;
- (void)_createPageControl;
- (_Bool)_isViewControllerBeingUnloaded:(id)arg1 atIndex:(long long)arg2;
- (void)_adjustScrollViewContentInsets;
- (void)_replaceViewControllerAtIndex:(long long)arg1 withViewController:(id)arg2;
- (id)_visibleViewController;
- (void)_setPreviousViewController:(id)arg1;
- (void)_setVisibleViewController:(id)arg1;
- (void)_notifyVisibleViewController:(int)arg1 animated:(_Bool)arg2;
- (void)_setNextViewController:(id)arg1;
- (id)_loadPreviousViewController;
- (id)_loadVisibleViewControllerAndNotify:(_Bool)arg1;
- (id)_loadNextViewController;
- (id)_previousViewController;
- (id)_nextViewController;
- (void)_notifyViewController:(id)arg1 ofState:(int)arg2 previousState:(int)arg3 animated:(_Bool)arg4;
- (int)_previousViewControllerNotificationState;
- (int)_visibleViewControllerNotificationState;
- (int)_nextViewControllerNotificationState;
- (void)_notifyPreviousViewController:(int)arg1 animated:(_Bool)arg2;
- (void)_notifyNextViewController:(int)arg1 animated:(_Bool)arg2;
- (_Bool)_hasPreviousViewController;
- (_Bool)_hasNextViewController;
- (void)_setNextViewControllerNotificationState:(int)arg1;
- (void)_setVisibleViewControllerNotificationState:(int)arg1;
- (void)_setPreviousViewControllerNotificationState:(int)arg1;
- (void)setVisibleIndex:(long long)arg1 preservingLoadedViewControllers:(_Bool)arg2 animated:(_Bool)arg3;
- (void)reloadViewControllerAtIndex:(long long)arg1;
- (_Bool)_needToLoadPrevious;
- (_Bool)_needToLoadNext;
- (void)setVisibleIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_pageChanged:(id)arg1;
- (_Bool)_doesVisibleViewControllerSupportInterfaceOrientation:(long long)arg1;
- (_Bool)_needToLoadVisible;
- (_Bool)_hasVisibleViewController;
- (long long)indexOfViewController:(id)arg1;
- (id)_pageControllerScrollView;

@end
