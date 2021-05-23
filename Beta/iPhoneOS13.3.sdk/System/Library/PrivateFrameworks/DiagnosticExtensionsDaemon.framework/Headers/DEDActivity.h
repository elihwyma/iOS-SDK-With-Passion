/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@protocol OS_os_activity;

@interface DEDActivity : NSObject

{
    NSObject<OS_os_activity> *_cleanup;
}

@property (retain) NSObject<OS_os_activity> *cleanup;

+ (id)sharedInstance;

- (id)currentCleanupActivity;
- (id)newCleanupActivity;

@end
