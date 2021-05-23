/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSComponent, CSLayoutStrategy, CSPaddingHeaderViewController, CSPageViewController, CSTodayPageView, NSSet, NSString, SBViewControllerTransitionContext, UIView, WGWidgetGroupViewController, _UILegibilitySettings;

@protocol CSPersistentContentLayoutProviding, CSSpotlightPresenting, CSTodayViewControllerDelegate, CSWidgetGroupViewControllerProviding, SBFAuthenticationStatusProvider, SBFLegibilitySettingsProvider, SBFLegibilitySettingsProviderDelegate;

@interface CSTodayViewController : CSCoverSheetViewControllerBase

{
    CSComponent *_dateViewComponent;
    CSComponent *_statusBarBackgroundComponent;
    CSComponent *_proudLockComponent;
    CSComponent *_homeAffordanceComponent;
    CSComponent *_controlCenterGrabberComponent;
    NSSet *_contentViews;
    id <SBFLegibilitySettingsProvider> _spotlightLegibilityProvider;
    WGWidgetGroupViewController *_todayViewController;
    UIView *_fakeCanvasView;
    _Bool _pullToSearchPossible;
    _Bool _pullToSearchRecognizing;
    _Bool _scrollViewContentOffsetDirty;
    struct CGPoint _scrollViewLastContentOffset;
    _Bool _shouldAnimateNextDateComponentUpdate;
    id <SBFLegibilitySettingsProviderDelegate> _delegate;
    CSLayoutStrategy *_layoutStrategy;
    id <CSSpotlightPresenting> _spotlightPresenter;
    id <CSTodayViewControllerDelegate> _todayViewControllerDelegate;
    id <CSPersistentContentLayoutProviding> _persistentLayoutProviding;
    CSPageViewController *_pageController;
    SBViewControllerTransitionContext *_transitionContext;
    id <SBFAuthenticationStatusProvider> _authenticationStatusProvider;
    id <CSWidgetGroupViewControllerProviding> _widgetGroupViewControllerProvider;
    CSPaddingHeaderViewController *_timePaddingViewController;
}

@property (retain, nonatomic) CSTodayPageView *view;
@property (weak, nonatomic) CSPaddingHeaderViewController *timePaddingViewController;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (weak, nonatomic) id <CSTodayViewControllerDelegate> todayViewControllerDelegate;
@property (weak, nonatomic) id <CSPersistentContentLayoutProviding> persistentLayoutProviding;
@property (weak, nonatomic) CSPageViewController *pageController;
@property (retain, nonatomic) SBViewControllerTransitionContext *transitionContext;
@property (retain, nonatomic) id <SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (retain, nonatomic) id <CSWidgetGroupViewControllerProviding> widgetGroupViewControllerProvider;
@property (retain, nonatomic) id <CSSpotlightPresenting> spotlightPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double distanceFromBarToContent;
@property (nonatomic, readonly) double topContentInset;
@property (nonatomic, readonly) double clippingOffset;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id <SBFLegibilitySettingsProviderDelegate> delegate;

+ (Class)viewClass;
+ (_Bool)_isPortrait;
+ (double)verticalSpacingBetweenWidgets;

- (id)init;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)_updateContentInsets;
- (double)_statusBarHeight;
- (_Bool)handleEvent:(id)arg1;
- (void)_updateAppearance;
- (void)_updateBehavior;
- (void)providerLegibilitySettingsChanged:(id)arg1;
- (id)_searchBarViewController;
- (struct CGSize)widgetGroupViewController:(id)arg1 sizeForInterfaceOrientation:(long long)arg2;
- (struct UIEdgeInsets)widgetGroupViewController:(id)arg1 contentOccludingInsetsForInterfaceOrientation:(long long)arg2;
- (long long)participantState;
- (void)searchBarDidFocus;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)resetForSpotlightDismissalAnimated:(_Bool)arg1;
- (void)cleanupAfterSpotlightDismissal;
- (void)updateAppearanceForHidden:(_Bool)arg1 offset:(struct CGPoint)arg2;
- (void)updateAppearanceForStatusBarBackgroundHidden:(_Bool)arg1;
- (void)_evaluateContentViews;
- (void)updateAccessoryLegibility;
- (void)_prepareChildViewControllersIfNecessary;
- (void)_updateSpotlightLegibility;
- (void)_setUpScrollView:(id)arg1;
- (void)_widgetEditViewWillAppear:(id)arg1;
- (void)_widgetEditViewWillDisappear:(id)arg1;
- (void)_widgetEditViewDidDisappear:(id)arg1;
- (struct CGSize)_timePaddingSize;
- (void)_widgetEditViewDidDisappearImplementation;
- (void)_updateAppearanceForScrollView:(id)arg1;
- (double)_topContentInsetForNavigationBar:(id)arg1;
- (double)pullDownSearchGestureYOffset;
- (struct UIEdgeInsets)widgetListViewEdgeInsetsIncludingSearchHeader:(_Bool)arg1;
- (_Bool)pullDownSearchGestureDraggingFromTopOfScrollView:(id)arg1;
- (double)pullDownSearchGesturePercentComplete;
- (void)handleDraggingWillEndWithTargetContentOffset:(inout struct CGPoint *)arg1 forScrollView:(id)arg2;
- (void)handleScrollingEnded:(id)arg1;
- (_Bool)_allowsDateViewScroll;
- (double)_dateMinY;
- (void)_updateAppearanceForScrollView:(id)arg1 animated:(_Bool)arg2;
- (void)_initializeTodayViewControllerIfNecessary;
- (void)_setTodayViewController:(id)arg1;
- (id)_dateMovingScrollView;
- (double)_totalDistanceForBlurTransition;
- (double)_maxClippingOffset;
- (id)_majorScrollView;

@end
