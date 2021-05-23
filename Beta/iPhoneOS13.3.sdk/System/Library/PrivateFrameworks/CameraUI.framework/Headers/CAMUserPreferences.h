/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class CAMCaptureConfiguration, CAMConflictingControlConfiguration, NSDate, NSUserDefaults;

@interface CAMUserPreferences : NSObject

{
    _Bool _didResetTorchMode;
    _Bool _shouldShowGridView;
    _Bool _QRBannersEnabledInSettings;
    _Bool _forceEnableQRBanners;
    _Bool _shouldCaptureHDREV0;
    _Bool _shouldUseModernHDRBehavior;
    _Bool _didAcknowledgePortraitModeDescription;
    _Bool _autoLowLightVideoEnabled;
    _Bool _shouldForceMonoAudioRecording;
    _Bool _photoOverCaptureEnabled;
    _Bool _videoOverCaptureEnabled;
    _Bool _autoAdjustmentsEnabled;
    _Bool _didAcknowledgeCTMDescription;
    _Bool _preserveEffectFilter;
    _Bool _preserveCaptureMode;
    _Bool _preserveLivePhoto;
    _Bool _lockAsShutterEnabled;
    _Bool _shouldDelayRemotePersistence;
    _Bool _burstFollowsEncoderSettings;
    _Bool __preferHEVCWhenAvailable;
    _Bool __shouldDisableCameraSwitchingDuringVideoRecording;
    CAMCaptureConfiguration *_captureConfiguration;
    CAMConflictingControlConfiguration *_conflictingControlConfiguration;
    long long _videoConfiguration;
    long long _slomoConfiguration;
    long long _previewViewAspectMode;
    long long _photoModeLastCapturedEffectFilterType;
    long long _squareModeLastCapturedEffectFilterType;
    long long _portraitModeLastCapturedEffectFilterType;
    NSDate *_resetTimeoutDate;
    long long _preferredMinimumFreeBytes;
    long long _overriddenBackCaptureInterval;
    long long _overriddenFrontCaptureInterval;
    NSUserDefaults *__underlyingUserDefaults;
    double __resetTimeoutOverride;
}

@property (retain, nonatomic, getter=_underlyingUserDefaults, setter=_setUnderlyingUserDefaults:) NSUserDefaults *_underlyingUserDefaults;
@property (retain, nonatomic, setter=_setResetTimeoutDate:) NSDate *resetTimeoutDate;
@property (nonatomic, setter=_setDidResetTorchMode:) _Bool didResetTorchMode;
@property (nonatomic, readonly) _Bool _preferHEVCWhenAvailable;
@property (nonatomic, readonly) double _resetTimeoutOverride;
@property (nonatomic, readonly) _Bool _shouldDisableCameraSwitchingDuringVideoRecording;
@property (retain, nonatomic) CAMCaptureConfiguration *captureConfiguration;
@property (retain, nonatomic) CAMConflictingControlConfiguration *conflictingControlConfiguration;
@property (nonatomic, readonly) _Bool shouldShowGridView;
@property (nonatomic, readonly) _Bool QRBannersEnabledInSettings;
@property (nonatomic) _Bool forceEnableQRBanners;
@property (nonatomic, readonly) _Bool shouldShowQRBanners;
@property (nonatomic, readonly) _Bool shouldCaptureHDREV0;
@property (nonatomic, readonly) _Bool shouldUseModernHDRBehavior;
@property (nonatomic) _Bool didAcknowledgePortraitModeDescription;
@property (nonatomic, readonly) _Bool usingMostCompatibleEncoding;
@property (nonatomic, readonly) _Bool didConfirmVideo4k60MostCompatible;
@property (nonatomic, readonly) _Bool didConfirmSlomo1080p240MostCompatible;
@property (nonatomic, readonly) long long videoConfiguration;
@property (nonatomic, readonly) long long slomoConfiguration;
@property (nonatomic, readonly, getter=isAutoLowLightVideoEnabled) _Bool autoLowLightVideoEnabled;
@property (nonatomic, readonly) _Bool shouldForceMonoAudioRecording;
@property (nonatomic, readonly, getter=isPhotoOverCaptureEnabled) _Bool photoOverCaptureEnabled;
@property (nonatomic, readonly, getter=isVideoOverCaptureEnabled) _Bool videoOverCaptureEnabled;
@property (nonatomic, readonly, getter=isAutoAdjustmentsEnabled) _Bool autoAdjustmentsEnabled;
@property (nonatomic) _Bool didAcknowledgeCTMDescription;
@property (nonatomic) long long previewViewAspectMode;
@property (nonatomic, readonly) long long photoEncodingBehavior;
@property (nonatomic) long long photoModeLastCapturedEffectFilterType;
@property (nonatomic) long long squareModeLastCapturedEffectFilterType;
@property (nonatomic) long long portraitModeLastCapturedEffectFilterType;
@property (nonatomic, readonly) _Bool preserveEffectFilter;
@property (nonatomic, readonly) _Bool preserveCaptureMode;
@property (nonatomic, readonly) _Bool preserveLivePhoto;
@property (nonatomic, readonly, getter=isLockAsShutterEnabled) _Bool lockAsShutterEnabled;
@property (nonatomic, readonly) _Bool shouldDelayRemotePersistence;
@property (nonatomic, readonly) _Bool burstFollowsEncoderSettings;
@property (nonatomic, readonly) long long preferredMinimumFreeBytes;
@property (nonatomic, readonly) long long overriddenBackCaptureInterval;
@property (nonatomic, readonly) long long overriddenFrontCaptureInterval;

+ (id)preferences;
+ (_Bool)_fallBackToCameraDefaultsForBundleIdentifier:(id)arg1;
+ (id)_defaultCaptureConfiguration;
+ (long long)defaultFilterTypeForMode:(long long)arg1;
+ (long long)defaultLightingTypeForMode:(long long)arg1;

- (long long)maxSupportedPhotoQualityPrioritizationForMode:(long long)arg1;
- (long long)ppt_readPortraitLightingType;
- (long long)videoEncodingBehaviorForConfiguration:(long long)arg1;
- (id)filterTypesForMode:(long long)arg1;
- (long long)_sanitizeLightingType:(long long)arg1 forMode:(long long)arg2;
- (_Bool)shouldResetCaptureConfiguration;
- (long long)_sanitizeEffectFilterType:(long long)arg1 forMode:(long long)arg2;
- (void)updateResetTimeoutDate;
- (_Bool)readPreferencesWithOverrides:(id)arg1 emulationMode:(long long)arg2 callActive:(_Bool)arg3;
- (void)writePreferences;
- (_Bool)shouldDisableCameraSwitchingDuringVideoRecordingForMode:(long long)arg1;
- (_Bool)isOverCaptureEnabledForCTMCaptureType:(long long)arg1;

@end
