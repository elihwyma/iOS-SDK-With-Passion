/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@class CSBounceSettings, CSCoverSheetDismissGestureSettings, CSCoverSheetTransitionsSettings, CSDashBoardNotificationVersusPagingScrollSettings, CSDashBoardQuickActionsButtonSettings, CSDashBoardScrollModifierSettings, CSHorizontalScrollFailureRecognizerSettings, CSLockScreenMesaSettings, CSLockScreenPasscodeSettings, CSLockScreenPearlSettings, CSLockScreenTestPluginSettings, PTOutlet, SBFAnimationSettings;

@interface CSLockScreenSettings : PTSettings

{
    _Bool _autoDismissUnlockedLockScreen;
    _Bool _showNowPlaying;
    _Bool _showUserPicture;
    _Bool _showLogoutButton;
    _Bool _showThermalTrap;
    _Bool _showBlockedUI;
    _Bool _showResetRestore;
    _Bool _showEmergencyDialer;
    _Bool _showRegionsDebugView;
    _Bool _alwaysPutPluginsBelowScrollView;
    _Bool _killsInsecureDrawingApps;
    PTOutlet *_addNotificationOutlet;
    CSBounceSettings *_verticalBounceSettings;
    CSBounceSettings *_horizontalBounceSettings;
    CSLockScreenPasscodeSettings *_passcodeSettings;
    CSLockScreenMesaSettings *_mesaSettings;
    CSLockScreenPearlSettings *_pearlSettings;
    CSCoverSheetTransitionsSettings *_coverSheetTransitionsSettings;
    CSHorizontalScrollFailureRecognizerSettings *_horizontalScrollFailureRecognizerSettings;
    CSDashBoardScrollModifierSettings *_dashBoardScrollModifierSettings;
    CSDashBoardNotificationVersusPagingScrollSettings *_dashBoardNotificationScrollSettings;
    CSDashBoardQuickActionsButtonSettings *_dashBoardQuickActionButtonSettings;
    CSCoverSheetDismissGestureSettings *_coverSheetDismissGestureSettings;
    SBFAnimationSettings *_unlockToPhoneWallpaperOutSettings;
    SBFAnimationSettings *_unlockToPhoneWallpaperInSettings;
    SBFAnimationSettings *_unlockWallpaperOutSettings;
    SBFAnimationSettings *_unlockWallpaperInSettings;
    CSLockScreenTestPluginSettings *_testPluginSettings;
    double _nowPlayingHeight;
    double _mainToCameraViewSlideCompletionPercentage;
    double _mainToTodayViewSlideCompletionPercentage;
    double _unlockSlideForIdleTimerDisabledPercentage;
    double _unlockSlideForIdleTimerDisabledPercentageIPad;
    double _notificationScrollForIdleTimerDisabledOffset;
    double _notificationScrollForIdleTimerDisabledOffsetIPad;
    double _appGrabberSlideUpVelocityThreshold;
    double _unlockPasscodeThreshold;
    double _unlockRubberBandThreshold;
    double _unlockRubberBandFeedbackInterval;
    long long _unlockRubberBandFeedbackIntensity;
    double _lockJiggleHapticDelay;
    double _lockJiggleAnimationDelay;
    double _unlockSwipeWallpaperAlpha;
}

@property _Bool autoDismissUnlockedLockScreen;
@property _Bool showNowPlaying;
@property _Bool showUserPicture;
@property _Bool showLogoutButton;
@property _Bool showThermalTrap;
@property _Bool showBlockedUI;
@property _Bool showResetRestore;
@property _Bool showEmergencyDialer;
@property _Bool showRegionsDebugView;
@property (retain) PTOutlet *addNotificationOutlet;
@property (retain) CSBounceSettings *verticalBounceSettings;
@property (retain) CSBounceSettings *horizontalBounceSettings;
@property (retain) CSLockScreenPasscodeSettings *passcodeSettings;
@property (retain) CSLockScreenMesaSettings *mesaSettings;
@property (retain) CSLockScreenPearlSettings *pearlSettings;
@property (retain) CSCoverSheetTransitionsSettings *coverSheetTransitionsSettings;
@property (retain) CSHorizontalScrollFailureRecognizerSettings *horizontalScrollFailureRecognizerSettings;
@property (retain) CSDashBoardScrollModifierSettings *dashBoardScrollModifierSettings;
@property (retain) CSDashBoardNotificationVersusPagingScrollSettings *dashBoardNotificationScrollSettings;
@property (retain) CSDashBoardQuickActionsButtonSettings *dashBoardQuickActionButtonSettings;
@property (retain) CSCoverSheetDismissGestureSettings *coverSheetDismissGestureSettings;
@property (retain) SBFAnimationSettings *unlockToPhoneWallpaperOutSettings;
@property (retain) SBFAnimationSettings *unlockToPhoneWallpaperInSettings;
@property (retain) SBFAnimationSettings *unlockWallpaperOutSettings;
@property (retain) SBFAnimationSettings *unlockWallpaperInSettings;
@property (retain) CSLockScreenTestPluginSettings *testPluginSettings;
@property double nowPlayingHeight;
@property double mainToCameraViewSlideCompletionPercentage;
@property double mainToTodayViewSlideCompletionPercentage;
@property double unlockSlideForIdleTimerDisabledPercentage;
@property double unlockSlideForIdleTimerDisabledPercentageIPad;
@property double notificationScrollForIdleTimerDisabledOffset;
@property double notificationScrollForIdleTimerDisabledOffsetIPad;
@property double appGrabberSlideUpVelocityThreshold;
@property double unlockPasscodeThreshold;
@property double unlockRubberBandThreshold;
@property double unlockRubberBandFeedbackInterval;
@property long long unlockRubberBandFeedbackIntensity;
@property double lockJiggleHapticDelay;
@property double lockJiggleAnimationDelay;
@property double unlockSwipeWallpaperAlpha;
@property _Bool alwaysPutPluginsBelowScrollView;
@property _Bool killsInsecureDrawingApps;

+ (id)settingsControllerModule;

- (void)setDefaultValues;

@end
