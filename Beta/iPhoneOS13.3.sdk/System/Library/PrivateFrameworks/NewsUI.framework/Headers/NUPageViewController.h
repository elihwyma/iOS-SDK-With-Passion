/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <UIKit/UIViewController.h>

@class NSMutableArray, NSObject, NSString, NUPageViewControllerScrollView;

@protocol NUPageViewControllerDataSource, NUPageViewControllerDelegate, OS_dispatch_group;

@interface NUPageViewController : UIViewController

{
    _Bool _cancelScrollViewDidScroll;
    _Bool _isTransitioning;
    _Bool _scrollViewStartedScrolling;
    id <NUPageViewControllerDataSource> _dataSource;
    id <NUPageViewControllerDelegate> _delegate;
    UIViewController *_visibleViewController;
    NUPageViewControllerScrollView *_scrollView;
    NSObject<OS_dispatch_group> *_idleDispatchGroup;
    UIViewController *_managedForViewController;
    UIViewController *_previousViewController;
    UIViewController *_nextViewController;
    UIViewController *_possibleNextViewController;
    UIViewController *_originalVisibleViewController;
    UIViewController *_appearingViewController;
    UIViewController *_disappearingViewController;
    NSMutableArray *_replayViewTransitions;
    struct CGSize _transitioningSize;
}

@property (nonatomic, readonly) NUPageViewControllerScrollView *scrollView;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *idleDispatchGroup;
@property (retain, nonatomic) UIViewController *managedForViewController;
@property (retain, nonatomic) UIViewController *previousViewController;
@property (retain, nonatomic) UIViewController *nextViewController;
@property (retain, nonatomic) UIViewController *possibleNextViewController;
@property (retain, nonatomic) UIViewController *originalVisibleViewController;
@property (retain, nonatomic) UIViewController *appearingViewController;
@property (retain, nonatomic) UIViewController *disappearingViewController;
@property (nonatomic) _Bool cancelScrollViewDidScroll;
@property (nonatomic, readonly) _Bool isTransitioning;
@property (nonatomic, readonly) struct CGSize transitioningSize;
@property (nonatomic, readonly) struct CGSize pageSize;
@property (nonatomic, readonly) _Bool scrollViewStartedScrolling;
@property (retain, nonatomic) NSMutableArray *replayViewTransitions;
@property (weak, nonatomic) id <NUPageViewControllerDataSource> dataSource;
@property (weak, nonatomic) id <NUPageViewControllerDelegate> delegate;
@property (retain, nonatomic) UIViewController *visibleViewController;
@property (nonatomic) _Bool pagingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithCoder:(id)arg1;
- (void)updateContentSize;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)childViewControllerForStatusBarHidden;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)accessibilityHandleRequestToGoBackForPageViewControllerScrollView:(id)arg1;
- (void)accessibilityHandleRequestToGoForewardForPageViewControllerScrollView:(id)arg1;
- (void)keyboardOrActionSwitchToNextViewController;
- (void)reindexViewControllers;
- (void)performWhenIdle:(CDUnknownBlockType)arg1;
- (void)transitionToSize:(struct CGSize)arg1;
- (void)updateContentOffset;
- (void)managePreviousAndNextViewController;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (void)updatePositionForViewController:(id)arg1;
- (struct CGPoint)centerForIndex:(unsigned long long)arg1;
- (void)handleScrollStart;
- (void)handleScrollEnd;
- (void)callLastViewAppearanceMethods;
- (_Bool)_shouldIgnoreDidScrollWithScrollView:(id)arg1;
- (void)switchToPreviousViewController;
- (void)switchToNextViewController;
- (_Bool)_assistiveTechnologyIsRunning;
- (_Bool)canSwitchToNextViewController;
- (_Bool)canSwitchToPreviousViewController;
- (void)_keyboardSwitchGoingRight:(_Bool)arg1;
- (void)keyboardOrActionSwitchToPreviousViewController;
- (void)repositionPages;
- (void)updateScrollView;
- (_Bool)isTransitioningToViewController;

@end
