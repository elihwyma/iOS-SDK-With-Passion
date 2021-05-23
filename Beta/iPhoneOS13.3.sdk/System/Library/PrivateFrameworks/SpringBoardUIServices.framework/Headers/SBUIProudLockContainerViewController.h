/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIViewController.h>

@class SBUIProudLockIconView, UIView, _UILegibilitySettings;

@protocol SBUIProudLockContainerViewControllerDelegate, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerOrientationProvider;

@interface SBUIProudLockContainerViewController : UIViewController

{
    long long _desiredIconState;
    unsigned long long _desiredCoachingCondition;
    int _unlockSource;
    SBUIProudLockIconView *_testProudLockIconView;
    id <SBUIProudLockContainerViewControllerOrientationProvider> _orientationProvider;
    _Bool _authenticated;
    _Bool _screenOn;
    _Bool _suppressScanningState;
    _Bool _suppressNotLooking;
    _Bool _guidanceTextVisible;
    _Bool _canShowScanningState;
    _Bool _shouldShowScanningState;
    _Bool _canShowCoachingCondition;
    _Bool _canLeaveCoachingCondition;
    _Bool _hasSeenFaceSinceScreenOn;
    _Bool _canShowCameraCovered;
    id <SBUIProudLockContainerViewControllerDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
    id <SBUIProudLockContainerViewControllerLockStatusProvider> _authenticationInformationProvider;
    CDUnknownBlockType _unlockCompletion;
    unsigned long long _forceCount;
    CDStruct_29b32c11 _configuration;
}

@property (weak, nonatomic) id <SBUIProudLockContainerViewControllerLockStatusProvider> authenticationInformationProvider;
@property (nonatomic) _Bool canShowScanningState;
@property (nonatomic) _Bool shouldShowScanningState;
@property (nonatomic) _Bool canShowCoachingCondition;
@property (nonatomic) _Bool canLeaveCoachingCondition;
@property (nonatomic) _Bool hasSeenFaceSinceScreenOn;
@property (nonatomic) _Bool canShowCameraCovered;
@property (copy, nonatomic) CDUnknownBlockType unlockCompletion;
@property (nonatomic) unsigned long long forceCount;
@property (nonatomic) CDStruct_29b32c11 configuration;
@property (weak, nonatomic) id <SBUIProudLockContainerViewControllerDelegate> delegate;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isAuthenticated) _Bool authenticated;
@property (nonatomic, getter=isScreenOn) _Bool screenOn;
@property (nonatomic) _Bool suppressScanningState;
@property (nonatomic) _Bool suppressNotLooking;
@property (nonatomic, readonly) UIView *cameraCoveredView;
@property (nonatomic, getter=isGuidanceTextVisible) _Bool guidanceTextVisible;
@property (nonatomic, readonly) _Bool isPortrait;

- (void)reset;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setOrientationProvider:(id)arg1;
- (id)initWithAuthenticationInformationProvider:(id)arg1;
- (void)updateLockForBiometricMatchFailure;
- (void)setAuthenticated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (void)_setCounterTransformForOrientation:(long long)arg1;
- (void)_setLocalTransformForOrientation:(long long)arg1;
- (void)_updateIconViewStateAnimated:(_Bool)arg1;
- (void)_startScanningStateTimer;
- (id)_proudLockIconView;
- (unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)arg1 orientation:(long long)arg2;
- (void)_setCoachingCondition:(unsigned long long)arg1 animated:(_Bool)arg2 force:(_Bool)arg3;
- (void)setScreenOn:(_Bool)arg1 fromUnlockSource:(int)arg2;
- (_Bool)_isBiometricLockedOut;
- (void)_allowCameraCoveredImmediately:(_Bool)arg1;
- (void)_allowCoachingConditionImmediately:(_Bool)arg1;
- (unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)arg1;
- (void)_setCoachingCondition:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_allowScanningState;
- (void)_clearCoachingCondition;
- (void)_updateIconViewStateAnimated:(_Bool)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performForcedUpdate:(CDUnknownBlockType)arg1;
- (void)_setIconState:(long long)arg1 animated:(_Bool)arg2;
- (void)_setIconState:(long long)arg1 animated:(_Bool)arg2 options:(long long)arg3 force:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (long long)_actualIconState;
- (void)_handleBiometricEvent:(unsigned long long)arg1;
- (void)_updateLockForMatchStarted;
- (void)_updateLockForFaceInView;
- (void)_dontCallThis_updateCoachingCondition:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_dontCallThis_showLockIfNeededAnimated:(_Bool)arg1 force:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)_iconViewStateForCoachingCondition:(unsigned long long)arg1;
- (void)_setCoachingCondition:(unsigned long long)arg1 animated:(_Bool)arg2 skipScanningState:(_Bool)arg3 force:(_Bool)arg4;
- (_Bool)_canTransitionToState:(long long)arg1;
- (void)_allowLeavingCoachingCondition;
- (void)_updateScanningState;
- (void)_allowCoachingCondition;
- (void)_reallyAllowCoachingConditionAnimated:(_Bool)arg1;
- (void)_reallyAllowCameraCovered;
- (void)_reallyAllowLeavingCoachingCondition;
- (_Bool)_isShowingCoachingCondition:(unsigned long long)arg1;
- (id)orientationProvider;
- (void)updateForScreenWillTurnOff;
- (id)testProudLockIconView;
- (void)setTestProudLockIconView:(id)arg1;

@end
