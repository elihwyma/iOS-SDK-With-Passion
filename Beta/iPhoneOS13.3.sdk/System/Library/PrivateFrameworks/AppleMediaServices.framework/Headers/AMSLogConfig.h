/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_os_log;

@interface AMSLogConfig : NSObject

{
    NSString *_category;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (copy, nonatomic) NSString *subsystem;
@property (nonatomic, readonly) _Bool debugLogsEnabled;
@property (nonatomic, readonly) NSObject<OS_os_log> *OSLogObject;

+ (id)sharedConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedMediaConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedConfigOversize;
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;
+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;
+ (_Bool)_debugLogsEnabled:(id)arg1;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedBagConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedMediaServiceOwnerConfig;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
