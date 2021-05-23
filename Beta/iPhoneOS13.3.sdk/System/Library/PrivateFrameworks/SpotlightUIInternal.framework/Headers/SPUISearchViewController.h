/*
 Image: /System/Library/PrivateFrameworks/SpotlightUIInternal.framework/SpotlightUIInternal
 */

#import <UIKit/UIViewController.h>

#import <SpotlightUIInternal/Swift-Protocol.h>

@class NSMutableSet, NSString, SPUILockScreenFooterView, SPUIResultsViewController, SPUISearchFirstTimeViewController, SPUISearchHeader, SPUITestingHelper, _UILegibilitySettings;

@protocol SPUISearchViewControllerDelegate;

@interface SPUISearchViewController : UIViewController <Swift>

{
    _Bool _internetOverrideForPPT;
    _Bool _lastQueryWasAuthenticated;
    id <SPUISearchViewControllerDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
    SPUISearchHeader *_searchHeader;
    NSMutableSet *_allHeaderViews;
    SPUISearchFirstTimeViewController *_firstTimeExperienceViewController;
    SPUIResultsViewController *_searchResultViewController;
    SPUIResultsViewController *_proactiveResultViewController;
    SPUILockScreenFooterView *_lockScreenFooterView;
    unsigned long long _presentationMode;
    double _timeAtDismissal;
    SPUITestingHelper *_testingHelper;
    unsigned long long _queryId;
    unsigned long long _feedbackBackgroundTaskIdentifier;
}

@property (retain) SPUISearchHeader *searchHeader;
@property (retain) NSMutableSet *allHeaderViews;
@property (retain) SPUISearchFirstTimeViewController *firstTimeExperienceViewController;
@property (retain) SPUIResultsViewController *searchResultViewController;
@property (retain) SPUIResultsViewController *proactiveResultViewController;
@property (retain) SPUILockScreenFooterView *lockScreenFooterView;
@property unsigned long long presentationMode;
@property _Bool internetOverrideForPPT;
@property _Bool lastQueryWasAuthenticated;
@property double timeAtDismissal;
@property (retain) SPUITestingHelper *testingHelper;
@property unsigned long long queryId;
@property unsigned long long feedbackBackgroundTaskIdentifier;
@property (weak, nonatomic) id <SPUISearchViewControllerDelegate> delegate;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) double distanceToTopOfAppIcons;
@property (nonatomic, readonly) SPUISearchHeader *headerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)_updateHeaderView:(id)arg1 fromText:(id)arg2 fromToken:(id)arg3;
+ (_Bool)shouldShowAsTypedSuggestion;
+ (_Bool)isFeedbackSelector:(SEL)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (id)contentScrollView;
- (void)hideKeyboard;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (void)didEngageResult:(id)arg1;
- (id)currentQuery;
- (void)clearSearchResults;
- (id)activeViewController;
- (void)endBackgroundTaskIfNeeded;
- (_Bool)allowInternet;
- (void)firstTimeExperienceContinueButtonPressed;
- (void)returnKeyPressed;
- (id)viewControllerForPresenting;
- (void)dismissIfNecessaryForIconDrag;
- (void)didUpdateContentScrolledOffScreenStatus:(_Bool)arg1 animated:(_Bool)arg2;
- (void)purgeMemory;
- (_Bool)sectionShouldBeExpanded:(id)arg1;
- (void)getUserActivityForResult:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didChangeExpansionStateForSection:(id)arg1 expanded:(_Bool)arg2;
- (_Bool)hasShortLookViewControllerForResult:(id)arg1;
- (id)shortLookViewControllerForResult:(id)arg1;
- (void)didScrollPastBottomOfContent;
- (void)didBeginScrollingResults;
- (void)didTapInEmptyRegion;
- (void)shortLookViewController:(id)arg1 didCompleteActionWithResult:(long long)arg2;
- (void)shortLookViewController:(id)arg1 willDisplayLongLookWithReason:(long long)arg2;
- (void)shortLookViewController:(id)arg1 willDismissLongLookWithReason:(long long)arg2 actionCompleted:(_Bool)arg3 shouldClearAction:(_Bool)arg4;
- (void)shortLookViewController:(id)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(_Bool)arg3 shouldClearAction:(_Bool)arg4;
- (void)cancelButtonPressed;
- (void)activateViewController:(id)arg1 animate:(_Bool)arg2;
- (id)createAdditionalHeaderView;
- (void)checkClearTimer;
- (void)spotlightDidBackground;
- (void)clearTimerExpired;
- (void)searchThroughPunchoutForResult:(id)arg1 forQuery:(id)arg2;
- (void)launchSiriWithUtteranceText:(id)arg1 source:(long long)arg2;
- (void)performSearchWithSuggestion:(id)arg1;
- (id)userActivityFromIntent:(id)arg1;
- (void)sendActionFeedbackFromShortLookViewController:(id)arg1 isPunchout:(_Bool)arg2;
- (void)performTestSearchWithQuery:(id)arg1 event:(unsigned long long)arg2 sourcePreference:(unsigned long long)arg3;
- (void)showVerticalScrollIndicators:(_Bool)arg1;
- (_Bool)queryIsPresent;
- (void)activateFirstTimeExperienceViewIfNecessary;
- (void)activateFirstTimeExperienceViewAnimate:(_Bool)arg1;
- (void)updateHeaderViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)queryContextDidChange:(id)arg1 fromSearchHeader:(id)arg2 allowZKW:(_Bool)arg3;
- (void)didBeginEditing;
- (void)dictationButtonPressed;
- (void)willUpdateFromResults;
- (void)searchViewWillPresentFromSource:(unsigned long long)arg1;
- (void)searchViewDidUpdatePresentationProgress:(double)arg1;
- (void)dismissCancelButtonAnimated;
- (void)searchViewDidPresentFromSource:(unsigned long long)arg1;
- (void)searchViewWillDismissWithReason:(unsigned long long)arg1;
- (void)searchViewDidDismissWithReason:(unsigned long long)arg1;
- (void)setInternetOverrideToDisable:(_Bool)arg1;
- (id)searchResultsTestingObject;
- (id)proactiveResultsTestingObject;

@end
