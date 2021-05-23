/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSCountedSet, NSString, SBHUDSettings, SBMainScreenActiveInterfaceOrientationWindow, UIScreen, _SBHUDHostViewController;

@protocol BSInvalidatable;

@interface SBHUDController : NSObject <Swift>

{
    NSCountedSet *_hudHiddenAssertions;
    id <BSInvalidatable> _stateCaptureHandle;
    UIScreen *_screen;
    SBMainScreenActiveInterfaceOrientationWindow *_hudWindow;
    _SBHUDHostViewController *_hudViewController;
    SBHUDSettings *_settings;
}

@property (nonatomic, readonly) SBMainScreenActiveInterfaceOrientationWindow *hudWindow;
@property (nonatomic, readonly) _SBHUDHostViewController *hudViewController;
@property (nonatomic, readonly) SBHUDSettings *settings;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic, readonly) _Bool anyHUDsVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_defaultCrossfadeAnimatorForHUDController:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_tearDown;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)initWithScreen:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)_presentHUD:(id)arg1 animated:(_Bool)arg2;
- (id)presentedHUDControllerForIdentifier:(id)arg1;
- (id)knownHUDControllerForIdentifier:(id)arg1;
- (id)acquireHUDHiddenAssertionForIdentifier:(id)arg1 withReason:(id)arg2;
- (id)HUDSessionForViewController:(id)arg1 identifier:(id)arg2;
- (void)dismissHUDs:(_Bool)arg1;
- (void)_setupStateCapture;
- (void)_notificationWhichWeWantToUseToTearEverythingDown:(id)arg1;
- (id)presentedHUDs;
- (id)knownHUDs;
- (id)presentingHUDs;
- (void)_createHUDWindowIfNeeded;
- (void)_finishedTransitionForHUD:(id)arg1 intendedState:(long long)arg2 finalState:(long long)arg3;
- (void)_tearDownIfNoHuds;
- (void)hudViewController:(id)arg1 willDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 didDismissHUD:(id)arg2;
- (void)hudViewController:(id)arg1 didPresentHUD:(id)arg2;
- (void)hudViewController:(id)arg1 willPresentHUD:(id)arg2;
- (void)_dismissHUD:(id)arg1 animated:(_Bool)arg2;

@end
