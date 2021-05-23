/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SBDashBoardNotificationPresenter, SBSyncController, SBWallpaperAggdLogger;

@protocol CSApplicationInforming, CSAuthenticationManaging, CSCarPlayStatusProviding, CSHomeAffordanceControlling, CSLegibilityProviding, CSMediaControlling, CSModalHomeAffordanceControlling, CSNotificationPresenting, CSPowerStatusProviding, CSReachabilityControlling, CSResetRestoreStatusProviding, CSScreenStateProviding, CSStatusBarControlling, CSTelephonyStatusProviding, CSThermalStatusProviding, CSTodayOverlayProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSWallpaperViewProviding, SBFActionProviding, SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFDateProviding, SBFLockOutStatusProvider, SBFPasscodeFieldChangeObserver, SBFScreenWakeAnimationControlling, SBUIBiometricResource;

@interface SBDefaultCoverSheetContext : NSObject

{
    SBSyncController *_syncController;
    SBWallpaperAggdLogger *_wallpaperAggdLogger;
    SBDashBoardNotificationPresenter *_notificationPresenter;
    id <SBFAuthenticationAssertionProviding> _authenticationAssertionProvider;
    id <SBFAuthenticationStatusProvider> _authenticationStatusProvider;
    id <SBFPasscodeFieldChangeObserver> _passcodeFieldChangeObserver;
    id <SBFDateProviding> _dateProvider;
    id <SBFLockOutStatusProvider> _lockOutStatusProvider;
    id <CSLegibilityProviding> _legibilityProvider;
    id <CSPowerStatusProviding> _powerStatusProvider;
    NSString *_powerStatusChangeNotificationName;
    id <CSThermalStatusProviding> _thermalStatusProvider;
    id <SBUIBiometricResource> _biometricResource;
    id <CSScreenStateProviding> _screenStateProvider;
    id <SBFScreenWakeAnimationControlling> _screenWakeAnimationController;
    id <CSHomeAffordanceControlling> _homeAffordanceController;
    id <CSModalHomeAffordanceControlling> _modalHomeAffordanceController;
    id <CSStatusBarControlling> _statusBarController;
    id <CSWallpaperViewProviding> _wallpaperViewProvider;
    id <SBFActionProviding> _contentActionProvider;
    id <CSApplicationInforming> _applicationInformer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isCarPlayActiveForNotifications) _Bool carPlayActiveForNotifications;
@property (nonatomic, readonly, getter=isRestoring) _Bool restoring;
@property (nonatomic, readonly) long long restoreState;
@property (nonatomic, readonly, getter=isResetting) _Bool resetting;
@property (nonatomic, readonly) long long resetState;
@property (nonatomic, readonly) _Bool expectsPocketTouches;
@property (nonatomic, readonly, getter=isLogoutSupported) _Bool logoutSupported;
@property (nonatomic, readonly) _Bool wantsTodayOverlay;
@property (nonatomic, readonly) id <SBFAuthenticationAssertionProviding> authenticationAssertionProvider;
@property (nonatomic, readonly) id <SBFAuthenticationStatusProvider> authenticationStatusProvider;
@property (nonatomic, readonly) id <SBFPasscodeFieldChangeObserver> passcodeFieldChangeObserver;
@property (nonatomic, readonly) id <SBFLockOutStatusProvider> lockOutStatusProvider;
@property (nonatomic, readonly) id <SBFDateProviding> dateProvider;
@property (nonatomic, readonly) id <CSLegibilityProviding> legibilityProvider;
@property (nonatomic, readonly) id <CSPowerStatusProviding> powerStatusProvider;
@property (copy, nonatomic, readonly) NSString *powerStatusChangeNotificationName;
@property (nonatomic, readonly) id <CSResetRestoreStatusProviding> resetRestoreStatusProvider;
@property (nonatomic, readonly) id <CSThermalStatusProviding> thermalStatusProvider;
@property (nonatomic, readonly) id <SBUIBiometricResource> biometricResource;
@property (copy, nonatomic, readonly) NSArray *dismissableOverlays;
@property (nonatomic, readonly) id <CSScreenStateProviding> screenStateProvider;
@property (nonatomic, readonly) id <SBFScreenWakeAnimationControlling> screenWakeAnimationController;
@property (nonatomic, readonly) id <CSWallpaperViewProviding> wallpaperViewProvider;
@property (nonatomic, readonly) id <CSTelephonyStatusProviding> telephonyStatusProvider;
@property (nonatomic, readonly) id <CSAuthenticationManaging> authenticationManager;
@property (nonatomic, readonly) id <CSHomeAffordanceControlling> homeAffordanceController;
@property (nonatomic, readonly) id <CSModalHomeAffordanceControlling> modalHomeAffordanceController;
@property (nonatomic, readonly) id <CSStatusBarControlling> statusBarController;
@property (nonatomic, readonly) id <CSMediaControlling> mediaController;
@property (nonatomic, readonly) id <CSUnlockRequesting> unlockRequester;
@property (nonatomic, readonly) id <CSWallpaperLogging> wallpaperLogger;
@property (nonatomic, readonly) id <SBFActionProviding> contentActionProvider;
@property (nonatomic, readonly) id <CSApplicationInforming> applicationInformer;
@property (nonatomic, readonly) id <CSNotificationPresenting> notificationPresenter;
@property (nonatomic, readonly) id <CSTouchEnvironmentStatusProviding> touchEnvironmentStatusProvider;
@property (nonatomic, readonly) id <CSUserSessionControlling> userSessionController;
@property (nonatomic, readonly) id <CSReachabilityControlling> reachabilityController;
@property (nonatomic, readonly) id <CSCarPlayStatusProviding> carPlayStatusProvider;
@property (nonatomic, readonly) id <CSTodayOverlayProviding> todayOverlayProvider;

- (id)init;
- (void)logout;
- (id)newTodayOverlayController;
- (id)createUnlockRequestForActionContext:(id)arg1;
- (void)unlockWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deactivateReachability;
- (void)incrementIrisPlayCount;
- (void)stopMediaPlaybackForSource:(long long)arg1;
- (void)setBiometricAutoUnlockingDisabled:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)isEmergencyCallSupported;
- (void)setPasscodeVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)attemptUnlockWithPasscode:(id)arg1 finishUIUnlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)createUnlockRequest;

@end
