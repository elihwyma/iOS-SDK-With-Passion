/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoardFoundation/SBFTouchPassThroughViewController.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBDisplayLayoutElement, NSSet, NSString, SBAppSuggestionManager, SBApplication, SBApplicationController, SBFAnalyticsClient, SBFloatingDockSuggestionsModel, SBFloatingDockViewController, SBFolderController, SBIconController, SBIconListView, SBLayoutStateTransitionCoordinator, SBRecentDisplayItemsController, SBRecentDisplayItemsDataStore, SBWorkspaceApplicationSceneTransitionContext, _UILegibilitySettings;

@protocol SBFloatingDockRootViewControllerDelegate, SBIconViewProviding;

@interface SBFloatingDockRootViewController : SBFTouchPassThroughViewController <Swift>

{
    struct {
        unsigned int floatingDockRootViewControllerShouldHandlePanGestureRecognizer:1;
    } _delegateRespondsTo;
    double _presentedProgress;
    _Bool _supressingKeyboard;
    _UILegibilitySettings *_legibilitySettings;
    _Bool _transitioningPresentation;
    _Bool _useDismissHitTestPadding;
    id <SBFloatingDockRootViewControllerDelegate> _delegate;
    SBApplication *_requestedSuggestedApplication;
    FBDisplayLayoutElement *_displayLayoutElement;
    SBFloatingDockViewController *_floatingDockViewController;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBAppSuggestionManager *_appSuggestionManager;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    SBRecentDisplayItemsController *_recentsController;
    SBRecentDisplayItemsDataStore *_recentsDataStore;
    SBFAnalyticsClient *_analyticsClient;
    SBWorkspaceApplicationSceneTransitionContext *_currentTransitionContext;
    id <SBIconViewProviding> _iconViewProvider;
    SBFloatingDockSuggestionsModel *_suggestionsModel;
}

@property (nonatomic, readonly) SBIconController *iconController;
@property (nonatomic, readonly) SBApplicationController *applicationController;
@property (nonatomic, readonly) SBAppSuggestionManager *appSuggestionManager;
@property (retain, nonatomic) SBFloatingDockViewController *floatingDockViewController;
@property (retain, nonatomic) SBLayoutStateTransitionCoordinator *layoutStateTransitionCoordinator;
@property (retain, nonatomic) SBRecentDisplayItemsController *recentsController;
@property (retain, nonatomic) SBRecentDisplayItemsDataStore *recentsDataStore;
@property (nonatomic, getter=isTransitioningPresentation) _Bool transitioningPresentation;
@property (nonatomic) _Bool useDismissHitTestPadding;
@property (retain, nonatomic) SBFAnalyticsClient *analyticsClient;
@property (retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *currentTransitionContext;
@property (weak, nonatomic, readonly) id <SBIconViewProviding> iconViewProvider;
@property (retain, nonatomic) SBFloatingDockSuggestionsModel *suggestionsModel;
@property (weak, nonatomic) id <SBFloatingDockRootViewControllerDelegate> delegate;
@property (nonatomic, readonly, getter=isFloatingDockPresented) _Bool floatingDockPresented;
@property (nonatomic, readonly, getter=isFloatingDockFullyPresented) _Bool floatingDockFullyPresented;
@property (nonatomic, readonly) double presentedProgress;
@property (nonatomic, readonly) double maximumFloatingDockHeight;
@property (nonatomic, readonly) double floatingDockHeight;
@property (nonatomic, readonly) double effectiveFloatingDockHeight;
@property (nonatomic, readonly) double preferredVerticalMargin;
@property (nonatomic, readonly) double floatingDockViewTopMargin;
@property (nonatomic, readonly) double translationFromFullyPresentedFrame;
@property (nonatomic, readonly) struct CGRect floatingDockScreenFrame;
@property (nonatomic, readonly) struct CGRect floatingDockScreenPresentationFrame;
@property (nonatomic, readonly) double maximumDockContinuousCornerRadius;
@property (retain, nonatomic) SBApplication *requestedSuggestedApplication;
@property (nonatomic, readonly, getter=isPresentingFolder) _Bool presentingFolder;
@property (nonatomic, readonly) SBFolderController *presentedFolderController;
@property (nonatomic, readonly) FBDisplayLayoutElement *displayLayoutElement;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) SBIconListView *userIconListView;
@property (nonatomic, readonly) SBIconListView *suggestionsIconListView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *presentedIconLocations;

- (id)initWithCoder:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_beginPresentationTransition;
- (void)_handlePanGestureRecognizer:(id)arg1;
- (void)floatingDockViewController:(id)arg1 didChangeContentHeight:(double)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (_Bool)isDisplayingIconView:(id)arg1;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isFloatingDockViewControllerPresentedOverTransitioningContent:(id)arg1;
- (_Bool)isPresentingIconLocation:(id)arg1;
- (void)floatingDockViewController:(id)arg1 willUseAnimator:(id)arg2 forTransitioningWithFolder:(id)arg3 presenting:(_Bool)arg4;
- (void)floatingDockViewController:(id)arg1 willPerformTransitionWithFolder:(id)arg2 presenting:(_Bool)arg3 withTransitionCoordinator:(id)arg4;
- (double)statusBarHeightForFloatingDockViewController:(id)arg1;
- (double)minimumHomeScreenScaleForFloatingDockViewController:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1;
- (void)floatingDockViewController:(id)arg1 wantsToBePresented:(_Bool)arg2;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (_Bool)isDisplayingIcon:(id)arg1;
- (_Bool)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)layoutUserControlledIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(_Bool)arg3;
- (void)presentFolderForIcon:(id)arg1 location:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)registerAsSharedInstance;
- (id)initWithIconController:(id)arg1 applicationController:(id)arg2 recentsController:(id)arg3 recentsDataStore:(id)arg4 appSuggestionManager:(id)arg5 layoutStateTransitionCoordinator:(id)arg6 iconViewProvider:(id)arg7 analyticsClient:(id)arg8;
- (void)dismissPresentedFolderAnimated:(_Bool)arg1 withTransitionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setPresentationProgress:(double)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)prepareForTransitionToEnvironmentMode:(long long)arg1 fromDockVisible:(_Bool)arg2 toDockVisible:(_Bool)arg3;
- (void)cleanupAfterTransitionToEnvironmentMode:(long long)arg1;
- (void)_layoutFloatingDockViewWithProgress:(double)arg1;
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_setPresentedProgress:(double)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2;
- (struct CGRect)_calculateStandardDockFrame;
- (void)_endPresentationTransition;
- (double)_floatingDockViewTranslation;
- (double)_floatingDockViewTranslationForHeight:(double)arg1;
- (void)setPresentationProgressInteractively:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setPresentationProgressInteractively:(double)arg1;
- (void)setPresentationProgress:(double)arg1 animated:(_Bool)arg2 interactive:(_Bool)arg3;

@end
