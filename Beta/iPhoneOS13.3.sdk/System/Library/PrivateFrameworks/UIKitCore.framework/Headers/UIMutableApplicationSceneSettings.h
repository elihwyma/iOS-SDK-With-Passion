/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <FrontBoardServices/FBSMutableSceneSettings.h>

@class BSCornerRadiusConfiguration, NSNumber, NSString;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings

@property (retain, nonatomic) NSString *persistenceIdentifier;
@property (nonatomic) _Bool underLock;
@property (nonatomic) int statusBarStyleOverridesToSuppress;
@property (nonatomic) unsigned long long deactivationReasons;
@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) NSNumber *forcedStatusBarStyle;
@property (nonatomic) _Bool forcedStatusBarForegroundTransparent;
@property (nonatomic) _Bool deviceOrientationEventsEnabled;
@property (nonatomic) _Bool canShowAlerts;
@property (nonatomic) _Bool idleModeEnabled;
@property (nonatomic) _Bool statusBarDisabled;
@property (nonatomic) struct UIEdgeInsets peripheryInsets;
@property (nonatomic) long long statusBarParts;
@property (nonatomic) struct CGRect statusBarAvoidanceFrame;
@property (nonatomic) double statusBarHeight;
@property (nonatomic) double systemMinimumMargin;
@property (nonatomic) struct UIEdgeInsets safeAreaInsetsPortrait;
@property (nonatomic) double homeAffordanceOverlayAllowance;
@property (nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property (nonatomic) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property (nonatomic) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) unsigned long long artworkSubtype;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned int hostContextIdentifierForSnapshotting;
@property (nonatomic) unsigned long long scenePresenterRenderIdentifierForSnapshotting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (_Bool)isUISubclass;
- (double)defaultStatusBarHeightForOrientation:(long long)arg1;
- (void)setDefaultStatusBarHeight:(double)arg1 forOrientation:(long long)arg2;

@end
