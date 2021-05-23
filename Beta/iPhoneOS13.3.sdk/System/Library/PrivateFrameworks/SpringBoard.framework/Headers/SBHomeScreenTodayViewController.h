/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class FBDisplayLayoutElement, NSString, SBUISpotlightBarNavigationController, SBViewControllerTransitionContext, SPUISearchBarController, WGWidgetGroupViewController, _UILegibilitySettings;

@protocol SBHomeScreenTodayViewControllerDelegate;

@interface SBHomeScreenTodayViewController : UIViewController

{
    WGWidgetGroupViewController *_widgetViewController;
    SBUISpotlightBarNavigationController *_spotlightNavController;
    FBDisplayLayoutElement *_displayLayoutElement;
    SPUISearchBarController *_searchBarViewController;
    _Bool _scrollViewContentOffsetDirty;
    struct CGPoint _scrollViewLastContentOffset;
    _Bool _showsSearchBar;
    _Bool _ignoresScrolling;
    SBViewControllerTransitionContext *_transitionContext;
    _UILegibilitySettings *_legibilitySettings;
    UIViewController *_spotlightViewController;
    id <SBHomeScreenTodayViewControllerDelegate> _delegate;
    long long _pullToSearchState;
}

@property (weak, nonatomic) id <SBHomeScreenTodayViewControllerDelegate> delegate;
@property (nonatomic) long long pullToSearchState;
@property (nonatomic) _Bool ignoresScrolling;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIViewController *spotlightViewController;
@property (nonatomic) _Bool showsSearchBar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext;

+ (double)_verticalSpacingBetweenWidgets;

- (id)initWithDelegate:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
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
- (void)_statusBarHeightDidChange:(id)arg1;
- (void)coronaAnimationController:(id)arg1 willAnimateCoronaTransitionWithAnimator:(id)arg2;
- (struct CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2;
- (struct UIEdgeInsets)widgetGroupViewController:(id)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2;
- (void)searchBarDidFocus;
- (void)setDisplayLayoutElementActive:(_Bool)arg1;
- (void)_updateLegibilitySettings;
- (void)resetForSpotlightDismissalAnimated:(_Bool)arg1;
- (void)cleanupAfterSpotlightDismissal;
- (id)spotlightHeaderAcquiringViewController;
- (void)_widgetEditViewWillAppear:(id)arg1;
- (void)_widgetEditViewDidDisappear:(id)arg1;
- (void)_widgetEditViewDidDisappearImplementation;
- (double)_topContentInsetForNavigationBar:(id)arg1;
- (double)pullDownSearchGestureYOffset;
- (struct UIEdgeInsets)widgetListViewEdgeInsetsIncludingSearchHeader:(_Bool)arg1;
- (_Bool)pullDownSearchGestureDraggingFromTopOfScrollView:(id)arg1;
- (double)pullDownSearchGesturePercentComplete;
- (void)handleScrollingEnded:(id)arg1;
- (double)_maxClippingOffset;
- (id)_majorScrollView;
- (void)_coverSheetDidPresent:(id)arg1;
- (id)_widgetGroupViewController;
- (struct CGRect)_suggestedTodayViewFrameForBounds:(struct CGRect)arg1;
- (void)_updateScrollViewContentInsetAndOffsetIfNecessary;
- (void)_configureMatchMoveAnimations;
- (void)_setRequestDisableRootFolderParallax:(_Bool)arg1 reason:(id)arg2;
- (void)_setRequestDisableRootFolderScrolling:(_Bool)arg1 reason:(id)arg2;
- (void)_removeMatchMoveAnimations;
- (_Bool)canBeginPullDownSearchGesture;
- (id)_eligibleScrollViews;
- (void)handleDraggingWillEndWithTargetContentOffset:(inout struct CGPoint *)arg1 withVelocity:(struct CGPoint)arg2 forScrollView:(id)arg3;
- (struct UIEdgeInsets)defaultTodayViewContentInsets;
- (void)_configureOuterMatchMoveAnimation;
- (void)_configureInnerMatchMoveAnimation;
- (void)_applyScaleOnlyMatchMoveToView:(id)arg1 withSourceView:(id)arg2 animationKey:(id)arg3;

@end
