/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/WFLoggerBase.h>

@class NSMutableDictionary, NSObject, NSString;

@protocol OS_os_log;

@interface WFLoggerOsLog : WFLoggerBase

{
    struct __CFString *_subSystem;
    struct __CFString *_category;
    NSObject<OS_os_log> *_osLog;
    NSMutableDictionary *_profileSettings;
    unsigned long long _currentLevel;
    unsigned long long _logLifeSpanInDays;
}

@property (copy, readonly, getter=getProfileFilePath) NSString *profileFilePath;

- (void)dealloc;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char *)arg3 valist:(char *)arg4;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(struct __CFString *)arg3;
- (id)getLogLifespanInDays;
- (void)setLogLifespanInDays:(id)arg1;
- (unsigned long long)getLogPrivacy;
- (void)setLogPrivacy:(unsigned long long)arg1;
- (unsigned long long)getLogLevelEnable;
- (void)setLogLevelEnable:(unsigned long long)arg1;
- (unsigned long long)getLogLevelPersist;
- (void)setLogLevelPersist:(unsigned long long)arg1;
- (unsigned long long)getMaxFileSizeInMB;
- (void)setMaxSizeInKb:(unsigned long long)arg1;
- (void)stopWatchingLogFile;
- (id)init:(id)arg1 subSystem:(struct __CFString *)arg2 category:(struct __CFString *)arg3 logLifespanInDays:(unsigned long long)arg4 logLevel:(unsigned long long)arg5 logPrivacy:(unsigned long long)arg6 dispatchQueue:(id)arg7;
- (id)mapLogLevelEnum:(unsigned long long)arg1;
- (unsigned char)doesProfileExist:(id)arg1;
- (void)createOsLogProfile;
- (id)getLevelEnabled:(id)arg1 category:(id)arg2;
- (id)getLevelPersist:(id)arg1 category:(id)arg2;
- (id)getTtlDays:(id)arg1 category:(id)arg2;
- (id)getPrivacy:(id)arg1 category:(id)arg2;
- (unsigned char)convertLogLevel:(unsigned long long)arg1;
- (id)formatOsLogProfile:(id)arg1 levelEnabled:(id)arg2 levelPersist:(id)arg3 ttlDays:(id)arg4 privacy:(id)arg5;
- (unsigned char)writeDictToFile:(id)arg1 idStr:(id)arg2;
- (unsigned char)setTtlDays:(id)arg1 category:(id)arg2 value:(id)arg3;
- (unsigned char)setPrivacy:(id)arg1 category:(id)arg2 value:(id)arg3;
- (unsigned char)setLevelEnabled:(id)arg1 category:(id)arg2 value:(id)arg3;
- (unsigned long long)mapLogLevelStr:(id)arg1;
- (unsigned char)setLevelPersist:(id)arg1 category:(id)arg2 value:(id)arg3;

@end
