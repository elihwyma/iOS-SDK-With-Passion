/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableArray, NSString, SBBannerContainerViewController;

@protocol BSInvalidatable;

@interface SBBannerController : NSObject

{
    NSHashTable *_sources;
    NSHashTable *_suppressionAssertions;
    NSMutableArray *_pendingBannerContextsNeedingRepop;
    SBBannerContainerViewController *_bannerViewController;
    _Bool _soundIsPlaying;
    _Bool _dismissalOverdue;
    _Bool _replaceDelayIsActive;
    _Bool _showingStickyDurationBanner;
    _Bool _suppressingBanners;
    _Bool _enableDelayActive;
    _Bool _assistantIsFullyVisible;
    _Bool _locked;
    unsigned long long _transitionCount;
    id <BSInvalidatable> _deferOrientationUpdatesAssertion;
    long long _overdueDismissReason;
    CDUnknownBlockType _overdueCompletionBlock;
    _Bool _dismissingBannerForAssistantReveal;
    _Bool _dismissingBannerForAssistantDismiss;
    CDUnknownBlockType _assistantRevealCompletionBlock;
    CDUnknownBlockType _assistantDismissCompletionBlock;
    NSMapTable *_bannerContextToViewControllerCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) void *bannerTargetIdentifier;
@property (nonatomic, readonly) long long bannerTargetIdiom;

+ (id)sharedInstance;
+ (id)sharedInstanceIfExists;
+ (id)_sharedInstanceCreateIfNecessary:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)_viewControllerForPresentation;
- (void)registerSource:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)modallyPresentBannerWithContext:(id)arg1;
- (_Bool)isShowingModalBanner;
- (void)signalSource:(id)arg1;
- (id)currentBannerContextForSource:(id)arg1;
- (void)dismissCurrentBannerContextForSource:(id)arg1;
- (void)cacheBannerForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)removeCachedBannerForContext:(id)arg1;
- (id)_bannerItem;
- (id)_bannerContext;
- (void)assistantWillAppear:(id)arg1;
- (void)assistantDidAppear:(id)arg1;
- (void)assistantWillDisappear:(id)arg1;
- (void)assistantDidDisappear:(id)arg1;
- (void)dismissBannerWithAnimation:(_Bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(_Bool)arg3;
- (id)acquireBannerSuppressionAssertionForReason:(id)arg1;
- (_Bool)isShowingBanner;
- (void)_lockStateChanged:(id)arg1;
- (void)_updateBannerSuppressionState;
- (void)_setOverdueCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
- (void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
- (void)dismissBannerWithAnimation:(_Bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_cancelBannerDismissTimers;
- (void)_tryToDismissWithAnimation:(_Bool)arg1 reason:(long long)arg2 forceEvenIfBusy:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_removePendingContextsForSourceNeedingRepop:(id)arg1;
- (void)dismissBannerWithAnimation:(_Bool)arg1 reason:(long long)arg2;
- (void)_presentBannerForContext:(id)arg1 reason:(long long)arg2;
- (_Bool)_dequeueBannerIfPossible;
- (id)_pendingBannerContextForSourceNeedingRepop:(id)arg1;
- (_Bool)_dequeueBannerIfPossibleIgnoringStickyBanner:(_Bool)arg1 existingDismissReason:(long long)arg2;
- (id)_newBannerContentViewController;
- (void)_dismissOverdueOrDequeueIfPossible;
- (void)_updateBannerSuppressionStateAndDequeueIfPossible:(_Bool)arg1 withDelay:(_Bool)arg2;
- (void)_dequeueAfterDelayIfPossible;
- (_Bool)_isItemShowable:(id)arg1 fromSource:(id)arg2;
- (_Bool)_canDequeueIgnoringStickyBanner:(_Bool)arg1;
- (id)_dequeueNextBannerContext;
- (void)_performTransition:(long long)arg1 withAnimation:(_Bool)arg2 context:(id)arg3 reason:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (id)_bannerContainerView;
- (_Bool)_shouldPendStickyBannerContext:(id)arg1 withReason:(long long)arg2;
- (void)_acquireDeferOrientationUpdatesAssertionIfNeeded;
- (void)_setBannerSticky:(_Bool)arg1;
- (void)_performRevealTransitionWithContext:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performReplaceTransitionWithContext:(id)arg1 reason:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performHideTransitionWithContext:(id)arg1 animated:(_Bool)arg2 reason:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setBannerViewControllerForContext:(id)arg1;
- (void)_disposeOfDeferOrientationUpdatesAssertion;
- (void)_stopCurrentSound;
- (void)_dismissIntervalElapsed;
- (void)_replaceIntervalElapsed;
- (void)_setupBannerDismissTimers;
- (void)bannerViewControllerDidSelectAction:(id)arg1;
- (void)bannerViewControllerDidDismissAction:(id)arg1;
- (void)bulletinWindowStoppedBeingBusy;
- (_Bool)isShowingModalBannerWithKeyboard;
- (_Bool)isTransitioningBanner;
- (void)_soundDidFinishPlayingForBannerContext:(id)arg1;

@end
