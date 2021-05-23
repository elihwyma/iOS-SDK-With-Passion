/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSString, UNUserNotificationCenter;

@interface MTUserNotificationAppDelegate : NSObject

{
    UNUserNotificationCenter *_notificationCenter;
}

@property (retain, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

@end
