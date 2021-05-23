/*
 Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

#import <Foundation/NSObject.h>

@interface TULogging : NSObject

+ (void)enablePhoneLogging;
+ (void)disablePhoneLogging;
+ (void)registerForShouldLogChangedNotification;
+ (void)unregisterForShouldLogChangedNotification;
+ (_Bool)sendDirectoryToCrashReporter:(id)arg1 error:(id *)arg2;

@end
