/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString, SSLogFileOptions;

@protocol OS_dispatch_queue, OS_os_log;

@interface SSLogConfig : NSObject

{
    _Bool _writeToDisk;
    NSString *_category;
    unsigned long long _environment;
    NSString *_subsystem;
    SSLogFileOptions *_backingLogFileOptions;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
    NSString *_outputDirectory;
    NSString *_outputFilename;
}

@property (retain, nonatomic) SSLogFileOptions *backingLogFileOptions;
@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *outputDirectory;
@property (copy, nonatomic) NSString *outputFilename;
@property (copy, nonatomic) NSString *subsystem;
@property (nonatomic) _Bool writeToDisk;
@property (nonatomic, readonly) _Bool debugLogsEnabled;
@property (nonatomic, readonly) SSLogFileOptions *logFileOptions;
@property (nonatomic, readonly) NSObject<OS_os_log> *OSLogObject;
@property (nonatomic, readonly) _Bool shouldLog;
@property (nonatomic, readonly) _Bool shouldLogToDisk;

+ (id)sharedConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;
+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;
+ (_Bool)_debugLogsEnabled:(id)arg1;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedBagConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedStoreServicesConfig;
+ (id)sharedAccountsAuthenticationConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharediTunesStoreConfig;
+ (id)_logFileDirectoryPathForSubsystem:(id)arg1 category:(id)arg2;
+ (id)_logFilenameForSubsystem:(id)arg1 category:(id)arg2;
+ (_Bool)_deviceIsRunningInternalBuild;
+ (_Bool)_deviceIsRunningSeedBuild;
+ (_Bool)_deviceIsRunningInternalOrSeedBuild;
+ (id)sharedAskPermissionExtensionConfig;
+ (id)sharedFairPlayAnisetteConfig;
+ (id)sharedFeatureEnablerMigrationConfig;
+ (id)sharediTunesStoreConfigOversize;
+ (id)sharedStoreServicesConfigOversize;
+ (id)sharedWriteToDiskConfig;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
