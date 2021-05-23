/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <PrototypeTools/PTSettings.h>

@class CSLockScreenBiometricFailureSettings;

@interface CSLockScreenPearlSettings : PTSettings

{
    _Bool _pearlDebugUIEnabled;
    _Bool _showScanningStateOnLockScreen;
    _Bool _showScanningStateDuringFaceDetect;
    _Bool _coachingDelaysUnlock;
    _Bool _spinBeforeCoaching;
    _Bool _overrideCoachingConditionEnabled;
    CSLockScreenBiometricFailureSettings *_failureSettings;
    double _minimumDurationBeforeShowingScanningState;
    double _minimumDurationBetweenLeavingCoachingAndCoaching;
    double _minimumDurationShowingCoaching;
    double _durationOnCameraCoveredGlyphBeforeCoaching;
    double _durationToSuppressCameraCoveredWhenWakingWithSmartCover;
    unsigned long long _overrideCoachingBiometricEvent;
}

@property (nonatomic) _Bool pearlDebugUIEnabled;
@property (retain, nonatomic) CSLockScreenBiometricFailureSettings *failureSettings;
@property (nonatomic) _Bool showScanningStateOnLockScreen;
@property (nonatomic) _Bool showScanningStateDuringFaceDetect;
@property (nonatomic) double minimumDurationBeforeShowingScanningState;
@property (nonatomic) double minimumDurationBetweenLeavingCoachingAndCoaching;
@property (nonatomic) double minimumDurationShowingCoaching;
@property (nonatomic) double durationOnCameraCoveredGlyphBeforeCoaching;
@property (nonatomic) double durationToSuppressCameraCoveredWhenWakingWithSmartCover;
@property (nonatomic) _Bool coachingDelaysUnlock;
@property (nonatomic) _Bool spinBeforeCoaching;
@property (nonatomic) _Bool overrideCoachingConditionEnabled;
@property (nonatomic) unsigned long long overrideCoachingBiometricEvent;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (CDStruct_2960579e)proudLockControllerViewControllerConfiguration;

@end
