/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, WFLogger;

@protocol OS_dispatch_queue;

@interface WFLoggerBase : NSObject

{
    WFLogger *_ctxt;
    unsigned char _internalInstall;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (readonly) unsigned char WFIsInternalInstall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, getter=getLogLifespanInDays) NSNumber *logLifespanInDays;
@property (getter=getLogPrivacy) unsigned long long logPrivacy;
@property (getter=getLogLevelEnable) unsigned long long logLevelEnable;
@property (getter=getLogLevelPersist) unsigned long long logLevelPersist;
@property (getter=getMaxFileSizeInMB) unsigned long long maxSizeInKb;

- (void)dump;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char *)arg3 valist:(char *)arg4;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(struct __CFString *)arg3;
- (void)stopWatchingLogFile;

@end
