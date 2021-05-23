/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSMutableDictionary, NSString;

@interface PFLoggerBackendOSLog : PFLoggerBackendAdapter

{
    NSMutableDictionary *_osLogs;
    NSString *_sender;
    struct os_unfair_lock_s _lock;
}

+ (id)backendsFromUserDefaultsWithLogLevel:(int)arg1;

- (_Bool)allowsConcurrentAccess;
- (void)logFromCodeLocation:(CDStruct_98c8119d)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char *)arg7;
- (id)initWithSender:(id)arg1;
- (_Bool)formatsMessage;
- (_Bool)outputsToDebuggerConsole;
- (void)_logFromCodeLocation:(CDStruct_98c8119d)arg1 subsystem:(id)arg2 type:(unsigned int)arg3;

@end
