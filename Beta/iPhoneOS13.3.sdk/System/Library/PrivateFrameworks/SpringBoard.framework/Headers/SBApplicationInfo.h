/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/_UIApplicationInfo.h>

@class CRCarPlayAppDeclaration, NSArray, NSSet, NSString, NSURL, NSUserDefaults, XBSnapshotContainerIdentity;

@interface SBApplicationInfo : _UIApplicationInfo

{
    NSString *_applicationShortcutWidgetBundleIdentifier;
    NSArray *_staticApplicationShortcutItems;
    NSString *_displayName;
    Class _iconClass;
    CRCarPlayAppDeclaration *_carPlayDeclaration;
    NSArray *_domainsToPreheat;
    NSArray *_launchImageInfo;
    NSString *_launchInterfaceFileName;
    NSSet *_urlSchemes;
    NSSet *_supportedContentTypes;
    NSString *_iconMasqueradeIdentifier;
    NSURL *_restorationArchiveContainerURL;
    NSURL *_dataContainerURLOverride;
    NSUserDefaults *_lazy_userDefaults;
    NSString *_installInstanceID;
    unsigned long long _applicationSizeInBytes;
    unsigned long long _dynamicApplicationShortcutItemsVersion;
    unsigned long long _visibilityOverride;
    long long _defaultStatusBarStyle;
    unsigned long long _uninstallCapability;
    unsigned long long _voipClass;
    long long _whitePointAdaptivityStyle;
    unsigned long long _allowedNKNotificationsPerDay;
    long long _forcedUserInterfaceStyle;
    int _networkUsageTypes;
    int _supportedTypes;
    int _ignoredStatusBarStyleOverrides;
    _Bool _isLaunchableDuringSetup;
    _Bool _usesSplashBoard;
    _Bool _disablesClassicMode;
    _Bool _representsWebApplication;
    _Bool _isOkemoLinked;
    _Bool _isMonarchLinked;
    _Bool _isTigrisLinked;
    _Bool _isPeaceLinked;
    _Bool _isPeaceBLinked;
    _Bool _isYukonLinked;
    _Bool _isYukonELinked;
    _Bool _prefersSavedSnapshots;
    _Bool _wantsLaunchWithoutPNG;
    _Bool _wantsFullScreen;
    _Bool _isGameCenterEnabled;
    _Bool _wasGameCenterEverEnabled;
    _Bool _statusBarIsLegacy;
    _Bool _preventsLaunchInterfaceSplitting;
    _Bool _requiresHiDPI;
    _Bool _alwaysLaunchesSuspended;
    _Bool _systemAppSupportsLocalNotifications;
    _Bool _disallowsNotificationCenter;
    _Bool _disallowsControlCenter;
    _Bool _staticApplicationShortcutItemsHaveBeenLocalized;
    _Bool _hasHiddenTag;
    _Bool _usesRLNDataProvider;
    _Bool _shouldSkipCrossfadeToLive;
    _Bool _supports64Bit;
    _Bool _isNewsstand;
    _Bool _canChangeBackgroundStyle;
    _Bool _allowNonDefaultBackgroundStyle;
    _Bool _supportsDirectToAirplay;
    _Bool _alwaysReceivesOpenURLSource;
    _Bool _ocelotApplication;
    _Bool _shouldLaunchWithLiveContentASAP;
    _Bool _cloudDemoted;
    _Bool _wantsExclusiveForeground;
    NSURL *_documentInboxURL;
    XBSnapshotContainerIdentity *_manifestContainerIdentity;
}

@property (nonatomic, readonly) _Bool supportsDirectToAirplayOrIsWhitelisted;
@property (nonatomic, readonly, getter=isSystemApplication) _Bool systemApplication;
@property (nonatomic, readonly, getter=isInternalApplication) _Bool internalApplication;
@property (nonatomic, readonly, getter=isAppleApplication) _Bool appleApplication;
@property (nonatomic, readonly, getter=isOcelotApplication) _Bool ocelotApplication;
@property (copy, nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly, getter=isMonarchLinked) _Bool monarchLinked;
@property (nonatomic, readonly, getter=isTigrisLinked) _Bool tigrisLinked;
@property (nonatomic, readonly, getter=isPeaceLinked) _Bool peaceLinked;
@property (nonatomic, readonly, getter=isPeaceBLinked) _Bool peaceBLinked;
@property (nonatomic, readonly, getter=isYukonLinked) _Bool yukonLinked;
@property (nonatomic, readonly, getter=isYukonELinked) _Bool yukonELinked;
@property (nonatomic, readonly) int supportedTypes;
@property (nonatomic, readonly) NSSet *urlSchemes;
@property (nonatomic, readonly) NSURL *restorationArchiveContainerURL;
@property (nonatomic, readonly) NSString *installInstanceID;
@property (nonatomic, readonly) _Bool representsWebApplication;
@property (nonatomic, readonly) _Bool supports64Bit;
@property (nonatomic, readonly, getter=isNewsstand) _Bool newsstand;
@property (nonatomic, readonly) unsigned long long applicationSizeInBytes;
@property (nonatomic, readonly) unsigned long long visibilityOverride;
@property (nonatomic, readonly) _Bool hasHiddenTag;
@property (nonatomic, readonly) _Bool usesRLNDataProvider;
@property (nonatomic, readonly) _Bool systemAppSupportsLocalNotifications;
@property (nonatomic, readonly) _Bool suppressUserNotificationPermissionAlert;
@property (nonatomic, readonly) unsigned long long allowedNKNotificationsPerDay;
@property (nonatomic, readonly, getter=isStatusBarLegacy) _Bool statusBarIsLegacy;
@property (nonatomic, readonly) long long defaultStatusBarStyle;
@property (nonatomic, readonly) int ignoredStatusBarStyleOverrides;
@property (nonatomic, readonly) _Bool shouldLaunchSuspendedAlways;
@property (nonatomic, readonly) NSArray *domainsToPreheat;
@property (nonatomic, readonly, getter=isLaunchableDuringSetup) _Bool launchableDuringSetup;
@property (nonatomic, readonly) _Bool shouldLaunchWithLiveContentASAP;
@property (nonatomic, readonly) XBSnapshotContainerIdentity *manifestContainerIdentity;
@property (nonatomic, readonly) _Bool usesSplashBoard;
@property (nonatomic, readonly) _Bool wantsLaunchWithoutPNG;
@property (nonatomic, readonly) _Bool wantsFullScreen;
@property (nonatomic, readonly) _Bool prefersSavedSnapshots;
@property (nonatomic, readonly) _Bool preventsLaunchInterfaceSplitting;
@property (nonatomic, readonly) _Bool disablesClassicMode;
@property (nonatomic, readonly) NSString *launchInterfaceFileName;
@property (nonatomic, readonly) NSArray *launchImageInfo;
@property (nonatomic, readonly) long long whitePointAdaptivityStyle;
@property (nonatomic, readonly) _Bool requiresHiDPI;
@property (nonatomic, readonly) _Bool disallowsNotificationCenter;
@property (nonatomic, readonly) _Bool disallowsControlCenter;
@property (copy, nonatomic, readonly) NSString *iconMasqueradeIdentifier;
@property (nonatomic, readonly) Class iconClass;
@property (copy, nonatomic, readonly) NSString *applicationShortcutWidgetBundleIdentifier;
@property (nonatomic, readonly) NSArray *staticApplicationShortcutItems;
@property (nonatomic, readonly) unsigned long long dynamicApplicationShortcutItemsVersion;
@property (nonatomic, readonly) unsigned long long uninstallCapability;
@property (nonatomic, readonly) int networkUsageTypes;
@property (nonatomic, readonly) unsigned long long voipClass;
@property (nonatomic, readonly) _Bool supportsLegacyVOIPBackgroundMode;
@property (nonatomic, readonly) _Bool supportsAudioBackgroundMode;
@property (nonatomic, readonly) _Bool supportsFetchBackgroundMode;
@property (nonatomic, readonly) _Bool supportsRemoteNotificationBackgroundMode;
@property (nonatomic, readonly) _Bool supportsNewsstandContentBackgroundMode;
@property (nonatomic, readonly) CRCarPlayAppDeclaration *carPlayDeclaration;
@property (nonatomic, readonly, getter=isGameCenterEnabled) _Bool gameCenterEnabled;
@property (nonatomic, readonly) _Bool wasGameCenterEverEnabled;
@property (nonatomic, readonly, getter=isCloudDemoted) _Bool cloudDemoted;
@property (nonatomic, readonly) _Bool wantsExclusiveForeground;
@property (nonatomic, readonly) _Bool shouldSkipCrossfadeToLive;
@property (nonatomic, readonly) NSURL *documentInboxURL;
@property (nonatomic, readonly) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) _Bool supportsDirectToAirplay;
@property (nonatomic, readonly) _Bool alwaysReceivesOpenURLSource;

+ (unsigned long long)_visibilityOverrideFromInfo:(id)arg1 entitlements:(id)arg2;
+ (int)_calculateApplicationSupportedTypesFromProxy:(id)arg1;

- (id)dataContainerURL;
- (void)_loadFromProxy:(id)arg1;
- (_Bool)canChangeBackgroundStyle;
- (long long)backgroundStyle;
- (_Bool)statusBarHiddenWhenVerticallyCompact;
- (_Bool)_supportsApplicationType:(int)arg1;
- (id)_configureTags:(id)arg1 hasVisibilityOverride:(_Bool)arg2;
- (unsigned long long)_calculateVoipClassWithEntitlements:(id)arg1;
- (long long)backgroundStyleForRequestedBackgroundStyle:(long long)arg1;

@end
