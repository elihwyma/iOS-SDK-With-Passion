/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NCNotificationViewController, NSString;

@protocol BSInvalidatable, NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving;

@interface SBNotificationLongLookBannerDestination : NSObject <Swift>

{
    NCNotificationViewController *_presentedBanner;
    id <NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving> _parentDestination;
    id <BSInvalidatable> _idleTimerDisableAssertion;
    id <BSInvalidatable> _starModeDisableAssertion;
}

@property (weak, nonatomic) id <NCNotificationAlertDestination><NCNotificationViewControllerDelegatePrivate><NCNotificationViewControllerObserving> parentDestination;
@property (retain, nonatomic) NCNotificationViewController *presentedBanner;
@property (retain, nonatomic) id <BSInvalidatable> idleTimerDisableAssertion;
@property (retain, nonatomic) id <BSInvalidatable> starModeDisableAssertion;
@property (nonatomic, readonly, getter=isPresentingBanner) _Bool presentingBanner;
@property (nonatomic, readonly, getter=isPreventingAutomaticLock) _Bool preventingAutomaticLock;
@property (nonatomic, readonly, getter=isPreemptingSTAR) _Bool preemptingSTAR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldNotificationRequestPresentAsLongLook:(id)arg1;

- (id)_delegate;
- (void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
- (void)notificationViewController:(id)arg1 requestPermissionToExecuteAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)notificationViewController:(id)arg1 executeAction:(id)arg2 withParameters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)notificationViewController:(id)arg1 keyboardAssertionForGestureWindow:(id)arg2;
- (id)hideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (id)unhideHomeAffordanceAnimationSettingsForNotificationViewController:(id)arg1;
- (id)settleHomeAffordanceAnimationBehaviorDescriptionForNotificationViewController:(id)arg1;
- (void)notificationViewControllerWillPresent:(id)arg1;
- (void)notificationViewControllerDidPresent:(id)arg1;
- (void)notificationViewControllerWillDismiss:(id)arg1;
- (void)notificationViewControllerDidDismiss:(id)arg1;
- (id)initWithParentDestination:(id)arg1;
- (_Bool)shouldReceiveNotificationRequest:(id)arg1;
- (_Bool)canModifyNotificationRequest:(id)arg1;
- (_Bool)_presentedBannerMatchesNotificationRequest:(id)arg1;
- (_Bool)canWithdrawNotificationRequest:(id)arg1;
- (void)dismissPresentedBannerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postNotificationRequest:(id)arg1 withPresentingViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setReadyForNotificationRequests;
- (void)_dismissBannerCompleted;

@end
