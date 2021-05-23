/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <FrontBoardServices/FBSMutableSceneClientSettings.h>

@class FBSDisplayConfigurationRequest, FBSDisplayMode, NSArray, NSData, NSDictionary, NSString;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings

{
    _Bool _statusBarForegroundTransparent;
    long long _sceneActivationBias;
}

@property (nonatomic) long long statusBarStyle;
@property (nonatomic) long long statusBarModernStyle;
@property (copy, nonatomic) NSDictionary *statusBarPartStyles;
@property (nonatomic) _Bool statusBarHidden;
@property (nonatomic) double statusBarAlpha;
@property (nonatomic, getter=isStatusBarForegroundTransparent) _Bool statusBarForegroundTransparent;
@property (nonatomic) unsigned int statusBarContextID;
@property (nonatomic) long long defaultStatusBarStyle;
@property (nonatomic) _Bool defaultStatusBarHidden;
@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) NSString *defaultPNGName;
@property (nonatomic) double defaultPNGExpirationTime;
@property (nonatomic) long long compatibilityMode;
@property (nonatomic) _Bool deviceOrientationEventsEnabled;
@property (nonatomic) _Bool interfaceOrientationChangesDisabled;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic) _Bool idleTimerDisabled;
@property (nonatomic) unsigned long long proximityDetectionModes;
@property (nonatomic) double controlCenterAmbiguousActivationMargin;
@property (nonatomic) long long controlCenterRevealMode;
@property (nonatomic) long long notificationCenterRevealMode;
@property (nonatomic) struct UIEdgeInsets primaryWindowOverlayInsets;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) _Bool idleModeVisualEffectsEnabled;
@property (nonatomic) long long whitePointAdaptivityStyle;
@property (copy, nonatomic) FBSDisplayMode *requestedDisplayMode;
@property (copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (nonatomic, getter=isReachabilitySupported) _Bool reachabilitySupported;
@property (nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property (nonatomic) _Bool homeIndicatorAutoHidden;
@property (nonatomic) _Bool wantsExclusiveForeground;
@property (nonatomic) unsigned long long visibleMiniAlertCount;
@property (retain, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property (nonatomic) double brightnessLevel;
@property (nonatomic) _Bool disablesMirroring;
@property (copy, nonatomic) NSString *canvasTitle;
@property (retain, nonatomic) NSData *activationConditionsData;
@property (nonatomic) long long sceneActivationBias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (_Bool)settings:(id)arg1 appendDescriptionToBuilder:(id)arg2 forFlag:(long long)arg3 object:(id)arg4 ofSetting:(unsigned long long)arg5;
- (_Bool)isUISubclass;

@end
