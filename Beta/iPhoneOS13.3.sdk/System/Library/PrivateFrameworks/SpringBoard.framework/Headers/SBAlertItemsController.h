/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSHashTable, NSMapTable, NSMutableOrderedSet, NSMutableSet, NSString, SBAlertItemsObjectQueue, SBModalAlertPresenter, SBUserSessionController;

@protocol BSInvalidatable, SBAlertItemPresenter, SBAlertItemPresenter><SBLockScreenActionProvider;

@interface SBAlertItemsController : NSObject <Swift>

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
    _Bool _inUILockedMode;
    _Bool _isProcessingQueue;
    _Bool _delayProcessingQueue;
    _Bool _suppressAlertsForKeynote;
    id <BSInvalidatable> _systemModalAlertVisibleAssertion;
    SBModalAlertPresenter *_systemModalAlertPresenter;
    id <SBAlertItemPresenter><SBLockScreenActionProvider> _lockScreenModalAlertItemPresenter;
    id <SBAlertItemPresenter> _lockScreenNotificationsAlertItemPresenter;
    id <SBAlertItemPresenter> _unlockedAlertItemPresenter;
}

@property (retain, nonatomic, getter=_systemModalAlertPresenter, setter=_setSystemModalAlertPresenter:) SBModalAlertPresenter *systemModalAlertPresenter;
@property (retain, nonatomic) id <SBAlertItemPresenter><SBLockScreenActionProvider> lockScreenModalAlertItemPresenter;
@property (retain, nonatomic) id <SBAlertItemPresenter> lockScreenNotificationsAlertItemPresenter;
@property (retain, nonatomic) id <SBAlertItemPresenter> unlockedAlertItemPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)activateAlertItem:(id)arg1;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2;
- (void)_notifyObservers:(CDUnknownBlockType)arg1;
- (void)setForceAlertsToPend:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)deactivateAlertItemsOfClass:(Class)arg1;
- (_Bool)hasAlerts;
- (_Bool)hasVisibleAlert;
- (_Bool)canDeactivateAlertForMenuClickOrSystemGesture;
- (_Bool)deactivateAlertForMenuClickOrSystemGestureWithAnimation:(_Bool)arg1;
- (void)deactivateAlertItem:(id)arg1;
- (void)moveActiveUnlockedAlertsToPendingWithAnimation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)alertItemsOfClass:(Class)arg1;
- (void)noteVolumeOrLockPressedOverLockedAlerts;
- (_Bool)hasVisibleSuperModalAlert;
- (void)captureSuppressionAssertion:(id)arg1 reason:(id)arg2;
- (id)visibleAlertItem;
- (void)deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(_Bool)arg3;
- (void)activateAlertItem:(id)arg1 animated:(_Bool)arg2;
- (id)_initWithUserSessionController:(id)arg1;
- (void)_buddyDidExit;
- (void)_activeCallStateDidChange:(id)arg1;
- (void)_updateActiveDestinations;
- (void)_enumerateWithDirection:(unsigned long long)arg1 presentationsWithType:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumeratePresentationsWithType:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_performBatchActions:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 processQueue:(_Bool)arg3;
- (void)_processAlertItemQueuesAnimated:(_Bool)arg1;
- (void)_deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(_Bool)arg3;
- (_Bool)hasAlertOfClass:(Class)arg1;
- (void)_processAlertItemsFromQueue:(id)arg1 animated:(_Bool)arg2;
- (id)_presentationForAlertItem:(id)arg1;
- (_Bool)_isAlertItemPresentable:(id)arg1 outReasonsNotPresentable:(id *)arg2;
- (_Bool)_shouldPendAlertItem:(id)arg1 outReasonsPended:(id *)arg2;
- (id)_presenterForAlertItem:(id)arg1;
- (void)_presentAlertItem:(id)arg1 withPresenter:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_hasPresentationForPresenter:(id)arg1;
- (id)_presentedAlertItemForPresenter:(id)arg1;
- (void)_deactivateAlertItem:(id)arg1 reason:(int)arg2 animated:(_Bool)arg3 alertDismissCompletion:(CDUnknownBlockType)arg4;
- (void)_reallyDeactivateAlertItem:(id)arg1 forReason:(int)arg2 deactivateBlock:(CDUnknownBlockType)arg3;
- (void)_dismissAlertItem:(id)arg1 fromPresenter:(id)arg2 forReason:(int)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2;
- (_Bool)deactivateAlertItemsOfClass:(Class)arg1 reason:(int)arg2 animated:(_Bool)arg3;
- (_Bool)_hasVisibleModalAlertOfType:(unsigned long long)arg1;
- (void)activatePendedAlertsIfNecessary;
- (void)setInUILockedMode:(_Bool)arg1;
- (void)convertUnlockedAlertsToLockedAlerts;
- (void)convertLockedAlertsToUnlockedAlerts;
- (void)_clearAllQueuedAlertItems;
- (id)_activePresenterForAlertItem:(id)arg1;
- (_Bool)hasLockScreenModalAlert;
- (_Bool)hasVisibleModalAlert;

@end
