/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class FBSDisplayConfigurationRequest, FBSDisplayMode, NSArray, NSData, NSDictionary, NSString;

@protocol UIApplicationSceneClientSettings <Swift>

@property (nonatomic, readonly) long long statusBarStyle;
@property (nonatomic, readonly) long long statusBarModernStyle;
@property (copy, nonatomic, readonly) NSDictionary *statusBarPartStyles;
@property (nonatomic, readonly) _Bool statusBarHidden;
@property (nonatomic, readonly) double statusBarAlpha;
@property (nonatomic, readonly, getter=isStatusBarForegroundTransparent) _Bool statusBarForegroundTransparent;
@property (nonatomic, readonly) unsigned int statusBarContextID;
@property (nonatomic, readonly) long long defaultStatusBarStyle;
@property (nonatomic, readonly) _Bool defaultStatusBarHidden;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (copy, nonatomic, readonly) NSString *defaultPNGName;
@property (nonatomic, readonly) double defaultPNGExpirationTime;
@property (nonatomic, readonly) long long compatibilityMode;
@property (nonatomic, readonly) _Bool deviceOrientationEventsEnabled;
@property (nonatomic, readonly) _Bool interfaceOrientationChangesDisabled;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
@property (nonatomic, readonly) _Bool idleTimerDisabled;
@property (nonatomic, readonly) unsigned long long proximityDetectionModes;
@property (nonatomic, readonly) double controlCenterAmbiguousActivationMargin;
@property (nonatomic, readonly) long long controlCenterRevealMode;
@property (nonatomic, readonly) long long notificationCenterRevealMode;
@property (nonatomic, readonly) struct UIEdgeInsets primaryWindowOverlayInsets;
@property (nonatomic, readonly) long long backgroundStyle;
@property (nonatomic, readonly) _Bool idleModeVisualEffectsEnabled;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;
@property (copy, nonatomic, readonly) FBSDisplayMode *requestedDisplayMode;
@property (copy, nonatomic, readonly) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (nonatomic, readonly, getter=isReachabilitySupported) _Bool reachabilitySupported;
@property (nonatomic, readonly) unsigned long long screenEdgesDeferringSystemGestures;
@property (nonatomic, readonly) _Bool homeIndicatorAutoHidden;
@property (nonatomic, readonly) _Bool wantsExclusiveForeground;
@property (nonatomic, readonly) unsigned long long visibleMiniAlertCount;
@property (nonatomic, readonly) NSArray *audioCategoriesDisablingVolumeHUD;
@property (nonatomic, readonly) double brightnessLevel;
@property (nonatomic, readonly) _Bool disablesMirroring;
@property (copy, nonatomic, readonly) NSString *canvasTitle;
@property (nonatomic, readonly) NSData *activationConditionsData;
@property (nonatomic, readonly) long long sceneActivationBias;

@end
