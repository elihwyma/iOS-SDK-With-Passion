/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <WatchKit/WKInterfaceController.h>

@interface WKUserNotificationInterfaceController : WKInterfaceController

- (id)init;
- (void)_didReceiveNotification:(id)arg1 remoteNotification:(id)arg2 localNotification:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)didReceiveNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didReceiveLocalNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)didReceiveRemoteNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
