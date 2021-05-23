/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class NSArray, NSString;

@protocol CSApplicationInforming, CSAuthenticationManaging, CSCarPlayStatusProviding, CSHomeAffordanceControlling, CSLegibilityProviding, CSMediaControlling, CSModalHomeAffordanceControlling, CSNotificationPresenting, CSPowerStatusProviding, CSReachabilityControlling, CSResetRestoreStatusProviding, CSScreenStateProviding, CSStatusBarControlling, CSTelephonyStatusProviding, CSThermalStatusProviding, CSTodayOverlayProviding, CSTouchEnvironmentStatusProviding, CSUnlockRequesting, CSUserSessionControlling, CSWallpaperLogging, CSWallpaperViewProviding, SBFActionProviding, SBFAuthenticationAssertionProviding, SBFAuthenticationStatusProvider, SBFDateProviding, SBFLockOutStatusProvider, SBFPasscodeFieldChangeObserver, SBFScreenWakeAnimationControlling, SBUIBiometricResource;

@protocol CSCoverSheetContextProviding <Swift>

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

@end
