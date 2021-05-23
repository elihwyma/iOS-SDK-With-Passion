/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL, UNSNotificationSourceSettingsDescription;

@interface UNSNotificationSourceDescription : NSObject

{
    _Bool _allowCriticalAlerts;
    _Bool _allowPrivateProperties;
    _Bool _allowUnlimitedContentBody;
    _Bool _allowServiceExtensionFiltering;
    _Bool _hideSettings;
    _Bool _automaticallyShowSettings;
    _Bool _suppressDismissalSync;
    _Bool _suppressIconMask;
    _Bool _suppressUserAuthorizationPrompt;
    _Bool _useDefaultDataProvider;
    _Bool _usesCloudKit;
    _Bool _supportsContentAvailableRemoteNotifications;
    _Bool _restricted;
    _Bool _daemonShouldReceiveBackgroundResponses;
    _Bool _daemonShouldReceiveNotificationSettingsUpdates;
    _Bool _daemonShouldReceiveApplicationEvents;
    _Bool _allowUnlimitedPendingNotifications;
    NSString *_bundleIdentifier;
    NSString *_processBundleIdentifier;
    NSString *_universalApplicationIdentifier;
    NSString *_displayName;
    NSString *_pushEnvironment;
    NSString *_defaultIconFile;
    NSString *_settingsIconFile;
    NSString *_settingsSheetIconFile;
    NSString *_carPlayIconFile;
    NSString *_watchQuickLookSmallIconFile;
    NSString *_watchQuickLookLargeIconFile;
    NSString *_watchListSmallIconFile;
    NSString *_watchListLargeIconFile;
    NSString *_watchQuickLook394hIconFile;
    NSString *_watchQuickLook448hIconFile;
    NSString *_watchList394hIconFile;
    NSString *_watchList448hIconFile;
    NSURL *_bundleURL;
    NSURL *_dataContainerURL;
    NSDictionary *_groupContainerURLS;
    NSArray *_defaultCategories;
    UNSNotificationSourceSettingsDescription *_defaultSettings;
    NSArray *_defaultTopics;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *processBundleIdentifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *universalApplicationIdentifier;
@property (copy, nonatomic) NSString *pushEnvironment;
@property (copy, nonatomic) NSString *defaultIconFile;
@property (copy, nonatomic) NSString *settingsIconFile;
@property (copy, nonatomic) NSString *settingsSheetIconFile;
@property (copy, nonatomic) NSString *carPlayIconFile;
@property (copy, nonatomic) NSString *watchQuickLookSmallIconFile;
@property (copy, nonatomic) NSString *watchQuickLookLargeIconFile;
@property (copy, nonatomic) NSString *watchListSmallIconFile;
@property (copy, nonatomic) NSString *watchListLargeIconFile;
@property (copy, nonatomic) NSString *watchQuickLook394hIconFile;
@property (copy, nonatomic) NSString *watchQuickLook448hIconFile;
@property (copy, nonatomic) NSString *watchList394hIconFile;
@property (copy, nonatomic) NSString *watchList448hIconFile;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSURL *dataContainerURL;
@property (copy, nonatomic) NSDictionary *groupContainerURLS;
@property (retain, nonatomic) NSArray *defaultCategories;
@property (retain, nonatomic) UNSNotificationSourceSettingsDescription *defaultSettings;
@property (retain, nonatomic) NSArray *defaultTopics;
@property (nonatomic) _Bool automaticallyShowSettings;
@property (nonatomic) _Bool hideSettings;
@property (nonatomic) _Bool useDefaultDataProvider;
@property (nonatomic) _Bool suppressDismissalSync;
@property (nonatomic) _Bool suppressIconMask;
@property (nonatomic) _Bool suppressUserAuthorizationPrompt;
@property (nonatomic) _Bool allowCriticalAlerts;
@property (nonatomic) _Bool allowServiceExtensionFiltering;
@property (nonatomic) _Bool allowPrivateProperties;
@property (nonatomic) _Bool allowUnlimitedPendingNotifications;
@property (nonatomic) _Bool allowUnlimitedContentBody;
@property (nonatomic) _Bool usesCloudKit;
@property (nonatomic) _Bool supportsContentAvailableRemoteNotifications;
@property (nonatomic, getter=isRestricted) _Bool restricted;
@property (nonatomic) _Bool daemonShouldReceiveBackgroundResponses;
@property (nonatomic) _Bool daemonShouldReceiveNotificationSettingsUpdates;
@property (nonatomic) _Bool daemonShouldReceiveApplicationEvents;

+ (id)systemSourceDirectoryURLs;
+ (id)systemSourcePathExtension;
+ (id)systemSourceDescriptionWithBundleURL:(id)arg1;
+ (id)applicationSourceDescriptionWithApplication:(id)arg1;
+ (id)sourceDescriptionWithBundleIdentifier:(id)arg1;
+ (id)_validEnvironmentFromEnvironment:(id)arg1;
+ (id)systemSourceDescriptionWithBundleIdentifier:(id)arg1;
+ (id)applicationSourceDescriptionWithBundleIdentifier:(id)arg1;
+ (id)descriptionWithBundleIdentifier:(id)arg1 path:(id)arg2 allowServiceExtensionFiltering:(_Bool)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)setSystemPropertiesFromDictionary:(id)arg1 bundle:(id)arg2;
- (void)setDefaultCategoriesFromArray:(id)arg1 bundle:(id)arg2;
- (void)setDefaultTopicsFromArray:(id)arg1 bundle:(id)arg2;
- (void)setIconFilesFromDictionary:(id)arg1;

@end
