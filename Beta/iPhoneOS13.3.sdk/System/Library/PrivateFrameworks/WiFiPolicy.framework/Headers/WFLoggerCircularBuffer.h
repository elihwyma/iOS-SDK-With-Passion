/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <WiFiPolicy/WFLoggerBase.h>

@class NSDateFormatter, NSObject;

@protocol OS_dispatch_queue;

@interface WFLoggerCircularBuffer : WFLoggerBase

{
    char *_wiFiLoggingLogBufferRef;
    long long _wiFiLoggingLogBufferIndex;
    long long _wiFiLoggingLogBufferMaxSize;
    unsigned int _dumpId;
    NSDateFormatter *_tsFormatter;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (id)init;
- (void)dealloc;
- (void)dump;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 message:(const char *)arg3 valist:(char *)arg4;
- (void)WFLog:(unsigned long long)arg1 privacy:(unsigned long long)arg2 cfStrMsg:(struct __CFString *)arg3;

@end
