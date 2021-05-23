/*
 Image: /System/Library/PrivateFrameworks/BiometricKitUI.framework/BiometricKitUI
 */

#import <UIKit/UIViewController.h>

#import <BiometricKitUI/Swift-Protocol.h>

@class AVHapticPlayer, BKDevicePearl, BKEnrollPearlOperation, BKIdentity, BKUIPearlAudioSession, BKUIPearlEnrollControllerPreloadedState, BKUIPearlEnrollView, BKUIPearlInstructionView, LAContext, NSArray, NSDate, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSTimer, SFClient, UIButton, UILabel, UILayoutGuide, UIScrollView, UIView, _UIBackdropView;

@protocol BKUIPearlEnrollViewControllerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface BKUIPearlEnrollViewController : UIViewController <Swift>

{
    BKUIPearlEnrollControllerPreloadedState *_preloadedState;
    BKDevicePearl *_device;
    BKEnrollPearlOperation *_enrollOperation;
    NSMutableArray *_poseStatus;
    _Bool _bioCaptureComplete;
    double _bioKitCompletion;
    BKUIPearlEnrollView *_enrollView;
    UIScrollView *_scrollView;
    BKUIPearlInstructionView *_instructionView;
    BKUIPearlInstructionView *_animatingInstructionView;
    NSArray *_instructionViewConstraints;
    NSMutableDictionary *_customInstructionStrings;
    NSMutableDictionary *_customDetailStrings;
    UIButton *_nextStateButton;
    UIView *_nextStateButtonContainer;
    NSLayoutConstraint *_nextStateButtonContainerHorizontalPositionConstraint;
    UIButton *_escapeHatchButton;
    UIView *_buttonTray;
    _UIBackdropView *_darkTrayBackdrop;
    _UIBackdropView *_lightTrayBackdrop;
    NSLayoutConstraint *_buttonTrayToNextStateButtonContainerTopConstraint;
    UILabel *_debugLabel;
    NSString *_progressString;
    NSString *_statusString;
    LAContext *_authContext;
    int _state;
    int _previousState;
    _Bool _suspended;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_semaphore> *_stateSema;
    NSDate *_stateStart;
    _Bool _animatingState;
    NSDate *_lastFaceFoundDate;
    int _substate;
    int _pendingSubstate;
    _Bool _substatePending;
    NSTimer *_substateDelayTimer;
    NSTimer *_statusPollTimer;
    SFClient *_sharingclient;
    BKUIPearlAudioSession *_audioSession;
    AVHapticPlayer *_hapticPlayer;
    _Bool _enrollOperationInProgress;
    _Bool _inBuddy;
    _Bool _inDemo;
    _Bool _isDisplayZoomEnabled;
    _Bool _darkBackground;
    id <BKUIPearlEnrollViewControllerDelegate> _delegate;
    NSString *_credential;
    BKIdentity *_identity;
    NSLayoutConstraint *_enrollViewTopConstraint;
    NSLayoutConstraint *_nextStateButtonContainerBottomConstraintTall;
    NSLayoutConstraint *_nextStateButtonContainerBottomConstraintShort;
    NSLayoutConstraint *_instructionViewTopConstraint;
    UILayoutGuide *_instructionBaselineLayoutGuide;
}

@property (nonatomic, readonly) int state;
@property (copy, nonatomic) NSString *credential;
@property (retain, nonatomic) BKIdentity *identity;
@property (nonatomic) _Bool darkBackground;
@property (retain, nonatomic) NSLayoutConstraint *enrollViewTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *nextStateButtonContainerBottomConstraintTall;
@property (retain, nonatomic) NSLayoutConstraint *nextStateButtonContainerBottomConstraintShort;
@property (retain, nonatomic) NSLayoutConstraint *instructionViewTopConstraint;
@property (retain, nonatomic) UILayoutGuide *instructionBaselineLayoutGuide;
@property (weak, nonatomic) id <BKUIPearlEnrollViewControllerDelegate> delegate;
@property (nonatomic) _Bool inBuddy;
@property (nonatomic) _Bool inDemo;
@property (nonatomic) _Bool isDisplayZoomEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)preloadWithCompletion:(CDUnknownBlockType)arg1;
+ (id)_entryAnimationImages;
+ (_Bool)_shouldShowEscapeHatchForState:(int)arg1 inBuddy:(_Bool)arg2 inDemo:(_Bool)arg3;
+ (_Bool)_shouldShowAccessibilityOptionForState:(int)arg1 poseStatus:(id)arg2;

- (void)dealloc;
- (void)setStatus:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (long long)preferredStatusBarStyle;
- (void)_setSuspended:(_Bool)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)didBecomeActive:(id)arg1;
- (void)setState:(int)arg1 animated:(_Bool)arg2;
- (void)event:(long long)arg1 params:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)enrollOperation:(id)arg1 finishedWithIdentity:(id)arg2;
- (void)enrollOperation:(id)arg1 percentCompleted:(long long)arg2;
- (void)enrollOperation:(id)arg1 failedWithReason:(long long)arg2;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)enrollOperation:(id)arg1 progressedWithInfo:(id)arg2;
- (id)initWithPreloadedState:(id)arg1;
- (void)primeWithPasscode:(id)arg1;
- (void)setSplashImageView:(id)arg1;
- (void)restartEnroll;
- (void)_removeIdentity;
- (void)endEnrollFlowWithError:(id)arg1;
- (void)_cleanupEnroll;
- (void)_cleanupSound;
- (void)_cleanUpHaptics;
- (void)_endEnrollFlowWithError:(id)arg1;
- (void)_setupSound;
- (void)_setUpHaptics;
- (void)_checkForCompletion;
- (void)forceDarkBackground:(_Bool)arg1 animated:(_Bool)arg2;
- (void)toggleDebugAndSave;
- (void)escapeHatchButtonPressed;
- (void)nextStateButtonPressed:(id)arg1;
- (void)_configureInstructionView:(id)arg1 forState:(int)arg2 substate:(int)arg3;
- (id)_constraintsForInstructionView:(id)arg1 state:(int)arg2 position:(long long)arg3;
- (void)toggleDebug;
- (void)_updateLeftBarButtonItem;
- (void)returnToEnroll;
- (void)cancelEnroll;
- (id)_nextStateButtonTitleForState:(int)arg1;
- (id)_escapeHatchTitleForState:(int)arg1;
- (void)prepareForAnimationToState:(int)arg1 fromState:(int)arg2;
- (void)_triggerSoundHapticForTransitionToState:(int)arg1 fromState:(int)arg2;
- (void)animateInstruction;
- (void)finalizeInstructionAnimation;
- (void)animateToSuccessCompletionLayout:(long long)arg1;
- (void)_triggerSoundHapticForTransitionToSubstate:(int)arg1 fromSubstate:(int)arg2;
- (void)_setSubstate:(int)arg1 animated:(_Bool)arg2;
- (void)_setState:(int)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setState:(int)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;
- (void)startEnroll;
- (void)_updateDebugLabel;
- (void)fadeCurrentSound:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playHaptic:(unsigned long long)arg1 withDelay:(double)arg2 gain:(double)arg3;
- (void)_cleanupEnroll:(_Bool)arg1;
- (id)_getAuthContextForCredentialError:(id *)arg1;
- (id)getEnrollview;
- (void)_enableEnrollUI;
- (id)_instructionTextForState:(int)arg1 substate:(int)arg2;
- (id)_detailTextForState:(int)arg1 substate:(int)arg2;
- (id)_locStateNameForState:(int)arg1;
- (void)setSubstate:(int)arg1 animated:(_Bool)arg2 afterDelay:(double)arg3;
- (_Bool)_validateEnrolledPoses:(id)arg1;
- (void)_cancelEnroll;
- (void)cancelEnrollForRotationIfNeeded:(long long)arg1;
- (void)enrollView:(id)arg1 willNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
- (void)enrollView:(id)arg1 didNudgeInDirection:(unsigned long long)arg2 nudgeCount:(unsigned long long)arg3;
- (void)didReachSmallNudgePeakForEnrollView:(id)arg1;
- (void)didReachLargeNudgePeakForEnrollView:(id)arg1;
- (void)setUseNextButton:(_Bool)arg1;
- (_Bool)useNextButton;
- (int)_firstVisibleState;
- (void)setCustomInstructionString:(id)arg1 forState:(int)arg2;
- (void)setCustomDetailString:(id)arg1 forState:(int)arg2;
- (void)setEnrollMovieViewHidden:(_Bool)arg1;
- (void)animateWithOrientation:(long long)arg1;

@end
