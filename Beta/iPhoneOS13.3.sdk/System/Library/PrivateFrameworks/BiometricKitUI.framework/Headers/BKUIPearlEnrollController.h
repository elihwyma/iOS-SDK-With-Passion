/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <Preferences/PSViewController.h>

@class BKUIOrientationStateHandler, BKUIPearlCoachingController, BKUIPearlEnrollViewController, NSString, UINavigationBar;

@protocol BKUIPearlEnrollControllerDelegate, NSObject;

@interface BKUIPearlEnrollController : PSViewController

{
    _Bool _systemRotationAnimating;
    long long _orientation;
    _Bool _hasBeenPortrait;
    id <BKUIPearlEnrollControllerDelegate> _delegate;
    BKUIPearlEnrollViewController *_enrollViewController;
    BKUIPearlCoachingController *_coachingController;
    id <NSObject> _rotationChangeToken;
    id <NSObject> _rotationLockToken;
    UINavigationBar *_navbarCopy;
    BKUIOrientationStateHandler *_orientationStateHandler;
}

@property (retain, nonatomic) BKUIPearlEnrollViewController *enrollViewController;
@property (retain, nonatomic) BKUIPearlCoachingController *coachingController;
@property (nonatomic) _Bool hasBeenPortrait;
@property (retain, nonatomic) id <NSObject> rotationChangeToken;
@property (retain, nonatomic) id <NSObject> rotationLockToken;
@property (nonatomic, readonly) UINavigationBar *navbarCopy;
@property (retain, nonatomic) BKUIOrientationStateHandler *orientationStateHandler;
@property (weak, nonatomic) id <BKUIPearlEnrollControllerDelegate> delegate;
@property (nonatomic) _Bool inBuddy;
@property (nonatomic) _Bool inDemo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)preloadWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)isDisplayZoomEnabled;
+ (_Bool)isPearlAvailable;
+ (_Bool)isPearlInterlocked;

- (id)init;
- (void)dealloc;
- (_Bool)isCompact;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)navigationItem;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (void)resetLayout;
- (void)_startObserving;
- (_Bool)canBeShownFromSuspendedState;
- (void)deviceOrientationDidChange:(id)arg1;
- (id)initWithPreloadedState:(id)arg1;
- (void)primeWithPasscode:(id)arg1;
- (void)setSplashImageView:(id)arg1;
- (id)transitionAnimator:(long long)arg1;
- (void)pearlEnrollViewController:(id)arg1 finishedEnrollWithError:(id)arg2;
- (void)pearlEnrollControllerCompleted:(id)arg1;
- (void)setCustomInstructionString:(id)arg1 forState:(int)arg2;
- (void)setCustomDetailString:(id)arg1 forState:(int)arg2;
- (void)_copyAndShowInternalNavBar;
- (void)setCoachingHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)diffSystemAndForcedRotationOrientations;
- (void)deviceOrientationChanged:(long long)arg1 duration:(double)arg2;
- (void)deviceOrientationChanged:(long long)arg1;
- (void)coachingSkipped;

@end
