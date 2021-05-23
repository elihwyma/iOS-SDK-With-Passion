/*
 Image: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
 */

#import <Foundation/NSObject.h>

@interface WLLogController : NSObject

{
    _Bool _loggingEnabled;
}

+ (id)sharedLogger;

- (id)init;
- (_Bool)_loggingEnabled;
- (void)_reloadLogPreferences;
- (void)logMessageFromAddress:(void *)arg1 withLevel:(unsigned long long)arg2 format:(id)arg3 args:(char *)arg4;

@end
