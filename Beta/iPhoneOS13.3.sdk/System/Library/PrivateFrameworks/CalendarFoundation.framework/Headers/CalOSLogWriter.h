/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <CalendarFoundation/CalLogWriter.h>

@class NSObject;

@protocol OS_os_log;

@interface CalOSLogWriter : CalLogWriter

{
    NSObject<OS_os_log> *CalOSLogClient;
}

+ (id)autoLogNamespaces;

- (id)initWithParameters:(id)arg1;
- (void)write:(id)arg1;
- (void)_configureOSLogClient;
- (void)_configureAutoLogNamespaces;
- (void)_logStringInChunks:(id)arg1;
- (unsigned long long)_indexToSplitOnForIndex:(unsigned long long)arg1 chunkBytes:(const char *)arg2;

@end
