/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
 */

#import <AXFrontBoardUtils/Swift-Protocol.h>

@class BSCornerRadiusConfiguration, MISSING_TYPE, NSNumber, NSString;

@protocol UIApplicationSceneSettings <Swift>

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
@property (nonatomic, readonly) struct UIEdgeInsets peripheryInsets;
@property (nonatomic, readonly) long long statusBarParts;
@property (nonatomic, readonly) struct CGRect statusBarAvoidanceFrame;
@property (nonatomic, readonly) double statusBarHeight;
@property (nonatomic, readonly) double systemMinimumMargin;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsPortrait;
@property (nonatomic, readonly) double homeAffordanceOverlayAllowance;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property (nonatomic, readonly) struct UIEdgeInsets safeAreaInsetsLandscapeRight;
@property (nonatomic, readonly) long long deviceOrientation;
@property (nonatomic, readonly) unsigned long long artworkSubtype;
@property (nonatomic, readonly) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic, readonly) unsigned int hostContextIdentifierForSnapshotting;
@property (nonatomic, readonly) unsigned long long scenePresenterRenderIdentifierForSnapshotting;

- (MISSING_TYPE *)defaultStatusBarHeightForOrientation: /* Error: Ran out of types for this method. */;

@end
