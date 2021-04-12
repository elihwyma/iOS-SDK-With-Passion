//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableOrderedSet, NSMutableSet, NSString, SBAlertItemsObjectQueue, SBModalAlertPresenter, SBUserSessionController;
@protocol BSInvalidatable, SBAlertItemPresenter, SBAlertItemPresenter><SBLockScreenActionProvider;

@interface SBAlertItemsController : NSObject <BSDescriptionProviding>
{
    SBUserSessionController *_userSessionController;
    SBAlertItemsObjectQueue *_alertItemsQueue;
    SBAlertItemsObjectQueue *_superModalItemsQueue;
    NSMutableSet *_pendedAlertsToReenqueuePostDismissal;
    NSMutableOrderedSet *_alertItemPresentations;
    NSMutableOrderedSet *_superModalAlertItemPresentations;
    NSMutableSet *_activePresenters;
    NSMutableSet *_forceAlertsToPendReasons;
    NSMapTable *_suppressionAssertionReasons;
    NSHashTable *_observers;
    BOOL _inUILockedMode;
    BOOL _isProcessingQueue;
    BOOL _delayProcessingQueue;
    BOOL _suppressAlertsForKeynote;
    id <BSInvalidatable> _systemModalAlertVisibleAssertion;
    SBModalAlertPresenter *_systemModalAlertPresenter;
    id <SBAlertItemPresenter><SBLockScreenActionProvider> _lockScreenModalAlertItemPresenter;
    id <SBAlertItemPresenter> _lockScreenNotificationsAlertItemPresenter;
    id <SBAlertItemPresenter> _unlockedAlertItemPresenter;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <SBAlertItemPresenter> unlockedAlertItemPresenter; // @synthesize unlockedAlertItemPresenter=_unlockedAlertItemPresenter;
@property(retain, nonatomic) id <SBAlertItemPresenter> lockScreenNotificationsAlertItemPresenter; // @synthesize lockScreenNotificationsAlertItemPresenter=_lockScreenNotificationsAlertItemPresenter;
@property(retain, nonatomic) id <SBAlertItemPresenter><SBLockScreenActionProvider> lockScreenModalAlertItemPresenter; // @synthesize lockScreenModalAlertItemPresenter=_lockScreenModalAlertItemPresenter;
@property(retain, nonatomic, getter=_systemModalAlertPresenter, setter=_setSystemModalAlertPresenter:) SBModalAlertPresenter *systemModalAlertPresenter; // @synthesize systemModalAlertPresenter=_systemModalAlertPresenter;
// - (void).cxx_destruct;
- (void)captureSuppressionAssertion:(id)arg1 reason:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_notifyObservers:(id /* CDUnknownBlockType */)arg1;
- (void)_activeCallStateDidChange:(id)arg1;
- (void)_buddyDidExit;
- (void)moveActiveUnlockedAlertsToPendingWithAnimation:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)setForceAlertsToPend:(BOOL)arg1 forReason:(id)arg2;
- (void)noteVolumeOrLockPressedOverLockedAlerts;
- (BOOL)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(BOOL)arg1;
- (BOOL)canDeactivateAlertForMenuClickOrSystemGesture;
- (id)visibleAlertItem;
- (BOOL)hasVisibleSuperModalAlert;
- (BOOL)hasVisibleModalAlert;
- (BOOL)hasVisibleAlert;
- (BOOL)hasLockScreenModalAlert;
- (BOOL)hasAlerts;
- (BOOL)hasAlertOfClass:(Class)arg1;
- (id)alertItemsOfClass:(Class)arg1;
- (BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(BOOL)arg3;
- (BOOL)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2;
- (BOOL)deactivateAlertItemsOfClass:(Class)arg1;
- (void)_enumerateWithDirection:(NSUInteger)arg1 presentationsWithType:(NSUInteger)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (void)_enumeratePresentationsWithType:(NSUInteger)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (BOOL)_hasVisibleModalAlertOfType:(NSUInteger)arg1;
- (id)_presentationForAlertItem:(id)arg1;
- (void)_reallyDeactivateAlertItem:(id)arg1 forReason:(int)arg2 deactivateBlock:(id /* CDUnknownBlockType */)arg3;
- (void)_dismissAlertItem:(id)arg1 fromPresenter:(id)arg2 forReason:(int)arg3 animated:(BOOL)arg4 completion:(id /* CDUnknownBlockType */)arg5;
- (void)_deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3 alertDismissCompletion:(id /* CDUnknownBlockType */)arg4;
- (void)_deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3;
- (void)_presentAlertItem:(id)arg1 withPresenter:(id)arg2 animated:(BOOL)arg3;
- (id)_activePresenterForAlertItem:(id)arg1;
- (id)_presenterForAlertItem:(id)arg1;
- (BOOL)_shouldPendAlertItem:(id)arg1 outReasonsPended:(id )arg2;
- (id)_presentedAlertItemForPresenter:(id)arg1;
- (BOOL)_hasPresentationForPresenter:(id)arg1;
- (void)_processAlertItemsFromQueue:(id)arg1 animated:(BOOL)arg2;
- (void)_processAlertItemQueuesAnimated:(BOOL)arg1;
- (BOOL)_isAlertItemPresentable:(id)arg1 outReasonsNotPresentable:(id )arg2;
- (void)_performBatchActions:(id /* CDUnknownBlockType */)arg1 animated:(BOOL)arg2 processQueue:(BOOL)arg3;
- (void)_updateActiveDestinations;
- (void)_clearAllQueuedAlertItems;
- (void)activatePendedAlertsIfNecessary;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(BOOL)arg3;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2;
- (void)deactivateAlertItem:(id)arg1;
- (void)activateAlertItem:(id)arg1 animated:(BOOL)arg2;
- (void)activateAlertItem:(id)arg1;
- (void)convertLockedAlertsToUnlockedAlerts;
- (void)convertUnlockedAlertsToLockedAlerts;
- (void)setInUILockedMode:(BOOL)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)_initWithUserSessionController:(id)arg1;
- (id)init;

@end

