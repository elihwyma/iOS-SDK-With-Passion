/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class FBDisplayLayoutElement, NSHashTable, NSString, SBAppStatusBarDateTimeAssertion, SBBarSwipeAffordanceViewController, SBHomeGesturePanGestureRecognizer, SBMainScreenActiveInterfaceOrientationWindow, SBTodayOverlayViewController;

@interface SBTodayOverlayController : NSObject <Swift>

{
    NSHashTable *_observers;
    _Bool _dismissing;
    SBMainScreenActiveInterfaceOrientationWindow *_window;
    SBBarSwipeAffordanceViewController *_homeAffordanceViewController;
    SBTodayOverlayViewController *_overlayViewController;
    SBHomeGesturePanGestureRecognizer *_dismissHomeGestureRecognizer;
    FBDisplayLayoutElement *_displayLayoutElement;
    SBAppStatusBarDateTimeAssertion *_statusBarContentAssertion;
    unsigned long long _systemGestureType;
}

@property (nonatomic, readonly) SBMainScreenActiveInterfaceOrientationWindow *window;
@property (nonatomic, readonly) SBBarSwipeAffordanceViewController *homeAffordanceViewController;
@property (nonatomic, readonly) SBTodayOverlayViewController *overlayViewController;
@property (nonatomic, readonly) SBHomeGesturePanGestureRecognizer *dismissHomeGestureRecognizer;
@property (retain, nonatomic) FBDisplayLayoutElement *displayLayoutElement;
@property (retain, nonatomic) SBAppStatusBarDateTimeAssertion *statusBarContentAssertion;
@property (nonatomic, getter=isDismissing) _Bool dismissing;
@property (nonatomic, readonly) unsigned long long systemGestureType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double contentWidth;
@property (nonatomic) double presentationProgress;
@property (nonatomic, readonly, getter=isPresented) _Bool presented;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismissAnimated:(_Bool)arg1;
- (_Bool)handleEvent:(id)arg1;
- (void)presentAnimated:(_Bool)arg1;
- (_Bool)wouldHandleButtonEvent:(id)arg1;
- (void)setPresentationProgress:(double)arg1 interactive:(_Bool)arg2 animated:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setDisplayLayoutElementActive:(_Bool)arg1;
- (void)addTodayOverlayObserver:(id)arg1;
- (double)finalPresentationProgressForPresentationProgress:(double)arg1 gestureVelocity:(double)arg2;
- (id)testScrollView;
- (void)_relinquishStatusBarContentAssertion;
- (id)initWithWindowLevel:(double)arg1 homeGestureParticipantIdentifier:(long long)arg2 systemGestureType:(unsigned long long)arg3 secure:(_Bool)arg4;
- (void)homeGesturePerformedForBarSwipeAffordanceView:(id)arg1;
- (void)dismissTapGestureUpdated:(id)arg1;
- (void)dismissScrollGestureUpdated:(id)arg1;
- (void)_addSystemGestureRecognizer;
- (void)_takeStatusBarContentAssertion;
- (void)_removeSystemGestureRecognizer;
- (void)enumerateTodayOverlayObserversUsingBlock:(CDUnknownBlockType)arg1;
- (void)todayOverlayViewControllerDidChangeHeaderVisibility:(id)arg1;
- (void)removeTodayOverlayObserver:(id)arg1;

@end
