/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableDictionary, UNSLocationMonitor;

@protocol OS_dispatch_queue;

@interface UNSApplicationLauncher : NSObject

{
    UNSLocationMonitor *_locationMonitor;
    NSMutableDictionary *_bundleIdentifierToAssertions;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)dealloc;
- (id)initWithLocationMonitor:(id)arg1;
- (void)willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 endpoint:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_willPresentNotification:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)_removeAllProcessAssertionsAndInvalidate:(_Bool)arg1;
- (void)_queue_foregroundLaunchApplication:(id)arg1 withResponse:(id)arg2 launchImageName:(id)arg3 origin:(id)arg4 endpoint:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)_queue_actionForNotificationResponse:(id)arg1 bundleIdentifier:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (void)_queue_backgroundLaunchApplication:(id)arg1 withResponse:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_removeProcessAssertion:(id)arg1 forBundleID:(id)arg2 invalidate:(_Bool)arg3;
- (id)_queue_newProcessAssertionForBundleID:(id)arg1 flags:(unsigned int)arg2 reason:(unsigned int)arg3 name:(id)arg4 watchdogInterval:(double)arg5 acquisitionHandler:(CDUnknownBlockType)arg6 invalidationHandler:(CDUnknownBlockType)arg7;
- (void)_queue_removeProcessAssertionsHavingReason:(unsigned int)arg1 forBundleID:(id)arg2 invalidate:(_Bool)arg3;
- (void)_queue_addProcessAssertion:(id)arg1 forBundleID:(id)arg2;
- (void)_queue_removeAllProcessAssertionsAndInvalidate:(_Bool)arg1;

@end
