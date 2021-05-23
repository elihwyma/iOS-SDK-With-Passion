/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UITableViewController.h>

@class BSAnimationSettings, NSString, SBApplicationSceneView, SBBestAppSuggestion;

@protocol SBSwitcherContentViewControllerDataSource, SBSwitcherContentViewControllerDelegate;

@interface SBMinimumViableSwitcherTableViewController : UITableViewController

{
    id <SBSwitcherContentViewControllerDelegate> _delegate;
    SBApplicationSceneView *_temporaryAppView;
    SBApplicationSceneView *_temporarySideAppView;
    SBBestAppSuggestion *_bestAppSuggestion;
    _Bool _liveContentRasterizationDisabled;
    id <SBSwitcherContentViewControllerDataSource> _dataSource;
    long long _contentOrientation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canInterruptActiveTransition;
@property (copy, nonatomic, readonly) BSAnimationSettings *defaultTransitionAnimationSettings;
@property (weak, nonatomic) id <SBSwitcherContentViewControllerDelegate> delegate;
@property (weak, nonatomic) id <SBSwitcherContentViewControllerDataSource> dataSource;
@property (retain, nonatomic) SBBestAppSuggestion *bestAppSuggestion;
@property (nonatomic, getter=isShowingModifierTimeline) _Bool showModifierTimeline;
@property (nonatomic) long long contentOrientation;
@property (nonatomic, getter=isLiveContentRasterizationDisabled) _Bool liveContentRasterizationDisabled;

- (void)viewDidLoad;
- (_Bool)isUserInteractionEnabled;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (double)minimumHomeScreenScale;
- (id)handleGestureDidBegin:(id)arg1;
- (id)handleGestureDidEnd:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
- (double)switcherCardScale;
- (void)failMultitaskingGesturesForReason:(id)arg1;
- (void)acquiredViewController:(id)arg1 forTransientOverlayAppLayout:(id)arg2;
- (void)relinquishTransientOverlayViewController:(id)arg1;
- (_Bool)shouldAcceleratedHomeButtonPressBegin;
- (_Bool)shouldRubberbandHomeGrabberView;
- (void)performTransitionWithContext:(id)arg1 animated:(_Bool)arg2 alongsideAnimationHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)noteKeyboardFocusDidChangeToSceneID:(id)arg1;
- (id)handleGestureDidUpdate:(id)arg1;
- (double)snapshotScaleForSceneHandle:(id)arg1;
- (_Bool)shouldAddAppLayoutToFront:(id)arg1 forTransitionWithContext:(id)arg2 transitionCompleted:(_Bool)arg3;
- (_Bool)isWindowVisible;
- (void)respondToInAppStatusBarRequestedHiddenUpdateAnimated:(_Bool)arg1;
- (_Bool)isStatusBarHiddenForAppLayout:(id)arg1;
- (_Bool)shouldAnimateInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (id)prepareAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2;
- (id)noteModelDidMutateForInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 willAnimate:(_Bool)arg3;
- (void)performAnimatedInsertionOfAppLayouts:(id)arg1 atIndexes:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dispatchAndReturnTetheredInsertionEventWithID:(id)arg1 phase:(unsigned long long)arg2;
- (_Bool)shouldAnimateRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (id)prepareAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2;
- (id)noteModelDidMutateForRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 animated:(_Bool)arg3;
- (void)performAnimatedRemovalOfAppLayout:(id)arg1 forReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dispatchAndReturnTetheredRemovalEventWithID:(id)arg1 phase:(unsigned long long)arg2;
- (void)handleModifierAction:(id)arg1;
- (void)noteAppLayoutsDidChange;
- (id)enterAppExposeForBundleID:(id)arg1;
- (id)_appLayouts;

@end
