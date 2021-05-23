/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSNumber, WFLoggerBase;

@protocol OS_dispatch_queue;

@interface WFLogger : NSObject

{
    WFLoggerBase *_loggerBase;
    unsigned long long _destination;
    unsigned long long _privacy;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (copy, readonly, getter=getLogLifespanInDays) NSNumber *logLifespanInDays;
@property (readonly, getter=getLogLevelEnable) unsigned long long logLevelEnable;
@property (readonly, getter=getLogLevelPersist) unsigned long long logLevelPersist;
@property (readonly, getter=getDestination) unsigned long long destination;
@property (readonly, getter=getLogPrivacy) unsigned long long logPrivacy;
@property (readonly, getter=getMaxFileSizeInMB) unsigned long long maxFileSizeInMB;

+ (id)sharedWFLoggerSingleton;

- (id)init;
- (void)dump;
- (void)WFLog:(unsigned long long)arg1 message:(const char *)arg2;
- (void)setDestinationOsLog:(struct __CFString *)arg1 category:(struct __CFString *)arg2 logLifespanInDays:(unsigned long long)arg3 logLevel:(unsigned long long)arg4 logPrivacy:(unsigned long long)arg5;
- (id)loggerBase;
- (void)setDestinationCircularBuffer;
- (void)setDestinationFile:(struct __CFString *)arg1 runLoopRef:(struct __CFRunLoop *)arg2 runLoopMode:(struct __CFString *)arg3 classC:(unsigned char)arg4 dateFormatter:(struct __CFDateFormatter *)arg5 maxFileSizeInMB:(unsigned long long)arg6 logLifespanInDays:(unsigned long long)arg7;
- (void)setDestinationFileLocation:(struct __CFString *)arg1 fileNamePrefix:(struct __CFString *)arg2 runLoopRef:(struct __CFRunLoop *)arg3 runLoopMode:(struct __CFString *)arg4 classC:(unsigned char)arg5 dateFormatter:(struct __CFDateFormatter *)arg6 maxFileSizeInMB:(unsigned long long)arg7 logLifespanInDays:(unsigned long long)arg8;

@end
