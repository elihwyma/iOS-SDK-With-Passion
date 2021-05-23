/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSPointerArray, NSSet, NSString, PTToggleTestRecipe, SBApplication, SBDeviceOrientationUpdateDeferralAssertion, SBFAnalyticsClient, SBFailingSystemGestureRecognizer, SBFloatingDockBehaviorAssertion, SBFloatingDockRootViewController, SBFloatingDockViewController, SBFolderController, SBIconController, SBIconListView, SBLayoutStateTransitionCoordinator, SBMainScreenActiveInterfaceOrientationWindow, SBReusableViewMap, UIViewController, _UILegibilitySettings;

@protocol BSInvalidatable, SBFloatingDockControllerDelegate;

@interface SBFloatingDockController : NSObject <Swift>

{
    SBFloatingDockRootViewController *_viewController;
    _Bool _homeScreenTransitioningToTodayView;
    _Bool _homeScreenTodayViewTransitioning;
    NSPointerArray *_floatingDockBehaviorAssertionsByLevel[12];
    NSPointerArray *_floatingDockWindowLevelAssertionsByPriority[5];
    SBFAnalyticsClient *_analyticsClient;
    SBFloatingDockBehaviorAssertion *_inAppFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_todayViewFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_iconPullSearchGestureShowingFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_openFolderOverHomeScreenFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_openFolderOverSceneLayoutFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_activeGestureFloatingDockBehaviorAssertion;
    SBFloatingDockBehaviorAssertion *_assistantFloatingDockBehaviorAssertion;
    SBDeviceOrientationUpdateDeferralAssertion *_deferOrientationUpdatesAssertion;
    SBReusableViewMap *_iconViewMap;
    id <BSInvalidatable> _floatingDockStateDumpHandle;
    PTToggleTestRecipe *_testRecipe;
    SBMainScreenActiveInterfaceOrientationWindow *_floatingDockWindow;
    id <SBFloatingDockControllerDelegate> _delegate;
    SBFailingSystemGestureRecognizer *_dismissFloatingDockSystemGestureRecognizer;
    SBIconController *_iconController;
    SBFloatingDockBehaviorAssertion *_activeAssertion;
    SBLayoutStateTransitionCoordinator *_transitionCoordinator;
}

@property (nonatomic, readonly) SBFailingSystemGestureRecognizer *dismissFloatingDockSystemGestureRecognizer;
@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic, readonly) SBMainScreenActiveInterfaceOrientationWindow *floatingDockWindow;
@property (weak, nonatomic) SBFloatingDockBehaviorAssertion *activeAssertion;
@property (weak, nonatomic) SBLayoutStateTransitionCoordinator *transitionCoordinator;
@property (nonatomic, readonly, getter=isPresentingFolder) _Bool presentingFolder;
@property (nonatomic, readonly) SBFolderController *presentedFolderController;
@property (nonatomic, readonly) SBFloatingDockViewController *floatingDockViewController;
@property (weak, nonatomic) id <SBFloatingDockControllerDelegate> delegate;
@property (nonatomic, readonly) UIViewController *viewController;
@property (nonatomic, readonly, getter=isFloatingDockPresented) _Bool floatingDockPresented;
@property (nonatomic, readonly, getter=isFloatingDockFullyPresented) _Bool floatingDockFullyPresented;
@property (nonatomic, readonly, getter=isGesturePossible) _Bool gesturePossible;
@property (nonatomic, readonly) double maximumFloatingDockHeight;
@property (nonatomic, readonly) double floatingDockHeight;
@property (nonatomic, readonly) double effectiveFloatingDockHeight;
@property (nonatomic, readonly) double preferredVerticalMargin;
@property (nonatomic, readonly) double floatingDockViewTopMargin;
@property (nonatomic, readonly) double translationFromFullyPresentedFrame;
@property (nonatomic, readonly) struct CGRect floatingDockScreenFrame;
@property (nonatomic, readonly) struct CGRect floatingDockScreenPresentationFrame;
@property (nonatomic, readonly) double maximumDockContinuousCornerRadius;
@property (nonatomic, readonly) SBIconListView *userIconListView;
@property (nonatomic, readonly) SBIconListView *suggestionsIconListView;
@property (retain, nonatomic) SBApplication *requestedSuggestedApplication;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *presentedIconLocations;

+ (_Bool)isFloatingDockSupported;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_gestureRecognizerFailed:(id)arg1;
- (unsigned long long)viewMap:(id)arg1 maxRecycledViewsOfClass:(Class)arg2;
- (_Bool)viewMap:(id)arg1 shouldRecycleView:(id)arg2;
- (id)recycledViewsContainerProviderForViewMap:(id)arg1;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (_Bool)isDisplayingIconView:(id)arg1;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isPresentingIconLocation:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (void)recycleIconView:(id)arg1;
- (_Bool)isIconViewRecycled:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1;
- (void)dismissPresentedFolderAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1;
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)layoutUserControlledIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
- (void)presentFolderForIcon:(id)arg1 location:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 willBeginTransitionToState:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
- (void)rootFolderPageStateProvider:(id)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3;
- (void)rootFolderPageStateProvider:(id)arg1 willEndTransitionToState:(long long)arg2 successfully:(_Bool)arg3;
- (void)rootFolderPageStateProvider:(id)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(_Bool)arg4;
- (void)_setupStateDumper;
- (id)iconViewMap;
- (void)iconManager:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id)arg4;
- (void)dismissFloatingDockIfPresentedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)presentFloatingDockIfDismissedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)viewForSystemGestureRecognizer:(id)arg1;
- (id)initWithIconController:(id)arg1;
- (void)assistantWillAppear:(id)arg1;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)registerAsSharedInstance;
- (_Bool)shouldShowCloseBoxForIconView:(id)arg1 proposedValue:(_Bool)arg2;
- (_Bool)handlePromptingUserToUninstallIcon:(id)arg1 location:(id)arg2;
- (void)assistantDidDisappear:(id)arg1;
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 transitionCoordinator:(id)arg5 appSuggestionManager:(id)arg6 analyticsClient:(id)arg7;
- (id)initWithIconController:(id)arg1 analyticsClient:(id)arg2;
- (_Bool)_canPresentFloatingDock;
- (void)_presentFloatingDockIfDismissedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_dismissFloatingDockIfPresentedAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dismissPresentedFolderAnimated:(_Bool)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_recalculateWindowLevelForWindowLevelAssertions;
- (unsigned long long)_indexOfPointerArray:(id)arg1 ofObject:(void *)arg2;
- (void)_clearGestureAssertion;
- (void)_evaluateAssertions:(unsigned long long)arg1 interactive:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_deriveActiveAssertion:(id *)arg1 dockProgress:(double *)arg2;
- (void)floatingDockRootViewController:(id)arg1 modifyProgress:(double)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_allowGestureRecognizers;
- (void)_handleTransitionForFolder:(id)arg1 atLevel:(unsigned long long)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id)arg4;
- (void)_configureFloatingDockBehaviorAssertionForOpenFolder:(id)arg1 atLevel:(unsigned long long)arg2;
- (void)floatingDockRootViewController:(id)arg1 willChangeToHeight:(double)arg2;
- (void)floatingDockRootViewController:(id)arg1 floatingDockWantsToBePresented:(_Bool)arg2;
- (_Bool)floatingDockRootViewControllerShouldHandlePanGestureRecognizer:(id)arg1;
- (void)floatingDockRootViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id)arg4;
- (void)floatingDockRootViewControllerDidEndPresentationTransition:(id)arg1;
- (double)minimumHomeScreenScaleForFloatingDockRootViewController:(id)arg1;
- (id)initWithAnalyticsClient:(id)arg1;
- (void)_addFloatingDockWindowLevelAssertion:(id)arg1;
- (void)_removeFloatingDockWindowLevelAssertion:(id)arg1;
- (void)_addFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_removeFloatingDockBehaviorAssertion:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateFloatingDockBehaviorAssertionsInteractive:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSystemGestureRecognizer:(id)arg1;

@end
