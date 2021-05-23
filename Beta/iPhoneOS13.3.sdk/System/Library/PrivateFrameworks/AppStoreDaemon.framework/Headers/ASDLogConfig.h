/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSString;

@protocol OS_dispatch_queue, OS_os_log;

@interface ASDLogConfig : NSObject <Swift>

{
    NSString *_category;
    unsigned long long _environment;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

@property (retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) unsigned long long environment;
@property (copy, nonatomic) NSString *subsystem;
@property (nonatomic, readonly) _Bool debugLogsEnabled;
@property (nonatomic, readonly) NSObject<OS_os_log> *OSLogObject;
@property (nonatomic, readonly) _Bool shouldLog;

+ (id)sharedConfig;
+ (_Bool)_debugLogsEnabled:(id)arg1;
+ (id)sharedDaemonConfig;
+ (id)sharedDaemonConfigOversize;
+ (_Bool)_deviceIsRunningInternalBuild;
+ (_Bool)_deviceIsRunningSeedBuild;
+ (_Bool)_deviceIsRunningInternalOrSeedBuild;
+ (id)sharedFrameworkConfig;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
