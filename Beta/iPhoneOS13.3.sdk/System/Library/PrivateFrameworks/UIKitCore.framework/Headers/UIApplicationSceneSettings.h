/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <FrontBoardServices/FBSSceneSettings.h>

@class BSCornerRadiusConfiguration, FBSDisplayConfiguration, NSNumber, NSString;

@interface UIApplicationSceneSettings : FBSSceneSettings

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic) unsigned long long artworkSubtype;
@property (nonatomic, readonly) struct UIEdgeInsets peripheryInsets;
@property (nonatomic, readonly) double systemMinimumMargin;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsPortrait;
@property (nonatomic, readonly) double homeAffordanceOverlayAllowance;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property (nonatomic, readonly) NSString *persistenceIdentifier;
@property (nonatomic, readonly) _Bool underLock;
@property (nonatomic, readonly) int statusBarStyleOverridesToSuppress;
@property (nonatomic, readonly) unsigned long long deactivationReasons;
@property (nonatomic, readonly) long long userInterfaceStyle;
@property (nonatomic, readonly) NSNumber *forcedStatusBarStyle;
@property (nonatomic, readonly) _Bool forcedStatusBarForegroundTransparent;
@property (nonatomic, readonly) _Bool deviceOrientationEventsEnabled;
@property (nonatomic, readonly) _Bool canShowAlerts;
@property (nonatomic, readonly) _Bool idleModeEnabled;
@property (nonatomic, readonly) _Bool statusBarDisabled;
@property (nonatomic, readonly) long long statusBarParts;
@property (nonatomic, readonly) struct CGRect statusBarAvoidanceFrame;
@property (nonatomic, readonly) double statusBarHeight;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic, readonly) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic, readonly) unsigned int hostContextIdentifierForSnapshotting;
@property (nonatomic, readonly) unsigned long long scenePresenterRenderIdentifierForSnapshotting;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (_Bool)isUISubclass;
- (double)defaultStatusBarHeightForOrientation:(long long)arg1;

@end
