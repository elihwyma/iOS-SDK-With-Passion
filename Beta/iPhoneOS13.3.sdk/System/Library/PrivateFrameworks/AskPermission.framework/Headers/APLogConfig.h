/*
 Image: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_dispatch_queue, OS_os_log;

@interface APLogConfig : NSObject

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
@property (nonatomic, readonly) NSObject<OS_os_log> *OSLogObject;

+ (id)sharedConfig;
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;
+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;
+ (id)sharedDaemonConfig;
+ (id)sharedFrameworkConfig;
+ (id)sharedExtensionConfig;
+ (id)sharedSettingsConfig;
+ (id)sharedPluginConfig;
+ (id)sharedUIServiceConfig;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
